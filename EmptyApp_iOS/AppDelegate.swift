import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
  
  var window: UIWindow?
  
  func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
    window = UIWindow(frame: UIScreen.main.bounds)
    let homeViewController = UIViewController()
    homeViewController.view.backgroundColor = UIColor.gray
    window?.rootViewController = homeViewController
    window?.makeKeyAndVisible()
    return true
  }

}
