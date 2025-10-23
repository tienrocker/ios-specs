// swift-tools-version:6.0
import PackageDescription

let package = Package(
    name: "VGPSDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "VGPSDK",
            targets: ["VGPSDK"]
        ),
    ],
    dependencies: [
        .package(url: "https://github.com/facebook/facebook-ios-sdk.git", from: "18.0.1"),
        .package(url: "https://github.com/firebase/firebase-ios-sdk.git", from: "11.15.0"),
        .package(url: "https://github.com/adjust/ios_sdk.git", from: "5.4.5"),
        .package(url: "https://github.com/adjust/ios_signature.git", from: "3.47.0"),
        .package(url: "https://github.com/tiktok/tiktok-business-ios-sdk.git", from: "1.5.1"),
        .package(url: "https://github.com/facebook/SocketRocket.git", from: "0.7.1"),
        .package(url: "https://github.com/google/GoogleSignIn-iOS.git", from: "9.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "VGPSDK",
            path: "VGPSDK.xcframework"
        )
    ]
)
