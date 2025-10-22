# VGPSDK iOS Specs

Welcome to the `ios-specs` repository for `VGPSDK.xcframework`. This README provides instructions for integrating the `VGPSDK` framework into your iOS project and publishing it to CocoaPods.

## Repository Structure

```
ios-specs/
│   LICENSE
│   README.md
│   VGPSDK.podspec
└── VGPSDK.xcframework/
    ├── ios-arm64/
    │   └── VGPSDK.framework/
    │       ├── Headers/
    │       └── Modules/
    └── ios-arm64_x86_64-simulator/
        └── VGPSDK.framework/
            ├── Headers/
            ├── Modules/
            └── _CodeSignature/
```

- `ios-arm64`: Framework for physical iOS devices (arm64 architecture).
- `ios-arm64_x86_64-simulator`: Framework for iOS simulators (arm64 and x86_64 architectures).
- `VGPSDK.podspec`: Podspec file for CocoaPods integration.
- `LICENSE`: Licensing information for the framework.

## Requirements

- **Xcode**: Version 16.0 or later.
- **iOS**: Minimum deployment target iOS 13.0.
- **Supported Architectures**: arm64 (devices), arm64/x86_64 (simulators).

## Integration Instructions

### 1. Manual Integration

1. **Download the Repository**:
   - Clone or download the repository from [http://gitlab.vgplay.vn/tienrocker/ios-specs/](http://gitlab.vgplay.vn/tienrocker/ios-specs/).
   - Extract (if needed) to access the `VGPSDK.xcframework` folder.

2. **Add Framework to Xcode Project**:
   - Open your Xcode project.
   - Drag and drop `VGPSDK.xcframework` into the **Frameworks, Libraries, and Embedded Content** section of your project target.
   - Ensure the **Embed & Sign** option is selected.

3. **Configure Build Settings** (if needed):
   - In **Build Settings**, verify that the `Framework Search Paths` includes the path to the directory containing `VGPSDK.xcframework` (if stored outside the project).

4. **Using VGPSDK in Code**:
   - Import the framework in your Objective-C files:

     ```objc
      #import <VGPSDK/VGPSDK.h>
     ```

   - Refer to the API documentation or headers in the `Headers/` directory for available APIs. Example:

     ```objc
     // Example initialization (replace with actual API)
     VGPSDK *sdk = [[VGPSDK alloc] init];
     [sdk initializeWithAPIKey:@"YOUR_API_KEY"];
     ```

5. **Build and Run**:
   - Ensure the correct target (device or simulator) is selected in Xcode.
   - Build and run your project.

### 2. Integration via CocoaPods

1. **Add VGPSDK to Podfile**:
   - Include the following in your `Podfile`:

     ```ruby
     pod 'VGPSDK', 'x.y.z'
     # or 
     # pod 'VGPSDK'
     ```

     Replace `x.y.z` with the desired version tag, or remove 'x.y.z' for the latest version.

2. **Install Pods**:
   - Run the following command in your project directory:

     ```bash
     pod install
     ```

3. **Open Workspace**:
   - Open the generated `.xcworkspace` file in Xcode and start using the framework.

## Publishing to CocoaPods

### 1. Validate the Podspec

Before pushing to CocoaPods, validate the `VGPSDK.podspec` file:

```bash
pod spec lint VGPSDK.podspec
```

**Notes for `pod spec lint`**:
- Ensure the `VGPSDK.podspec` is correctly configured (e.g., paths to `VGPSDK.xcframework`, license, version, etc.).
- Fix any validation errors reported by the linter.
- If targeting a private CocoaPods repo, use the `--sources` flag:

  ```bash
  pod spec lint VGPSDK.podspec --sources=https://github.com/CocoaPods/Specs.git,http://gitlab.vgplay.vn/tienrocker/ios-specs.git
  ```

### 2. Push to CocoaPods

Once validated, push the podspec to your CocoaPods trunk or private repo:

```bash
pod trunk push VGPSDK.podspec
```

**Notes for `pod trunk push`**:
- You must be registered with CocoaPods Trunk. Register using:

  ```bash
  pod trunk register tienrocker@gmail.com 'Tien Tran'
  ```

- For private repos, use the `--sources` flag or configure your `.cocoapods/repos` to include the private repo.
- Ensure the repository tag matches the version specified in `VGPSDK.podspec`.

## Troubleshooting

- **"Framework not found" Error**:
  - Verify `Framework Search Paths` in **Build Settings**.
  - Ensure `VGPSDK.xcframework` is added to **Frameworks, Libraries, and Embedded Content** with **Embed & Sign**.

- **Code Signing Issues**:
  - Check the `_CodeSignature` folder in the simulator framework.
  - Ensure the framework is signed correctly in Xcode.

- **API/Class Not Found**:
  - Review the header files in the `Headers/` directory for available APIs.
  - Contact the development team for detailed documentation.

- **Podspec Validation Errors**:
  - Ensure all required fields in `VGPSDK.podspec` (e.g., `source`, `vendored_frameworks`) are correctly set.
  - Verify the repository is accessible and the tag exists.

## Support

For issues or additional information, contact the development team:

- **Email**: tienrocker@gmail.com
- **GitLab Issues**: Create an issue at [http://gitlab.vgplay.vn/tienrocker/ios-specs/](http://gitlab.vgplay.vn/tienrocker/ios-specs/)

## License

Apache License 2.0 @COPYRIGHT 2020 [VGP JSC](https://vgplay.vn/)
