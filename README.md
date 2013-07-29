# SNFSegmentedViewController

SNFSegmentedViewController is the simplest way to use a `UISegmentedControl` for switching between views. You don't have to worry about view controller containment or setting up a kludge of custom empty segues. SNFSegmentedViewController just works.

## Usage

Since `SNFSegmentedViewController` is a subclass of `UITabBarController`, all you have to do is:
* Drag out a `UITabBarController` into a storyboard.
* Wire it up to your views appropriately.
* Change its class to `SNFSegmentedViewController`.

It's that simple.

## Installation

Add `SNFSegmentedViewController` to your Podfile if you're using [CocoaPods](http://cocoapods.org/), or add `SNFSegmentedViewController.{h,m}` into your project.

SNFSegmentedViewController requires iOS 6.0 and above, and it requires ARC.

## Credits

SNFSegmentedViewController was created by [Seth Friedman](https://github.com/sethfri).

Special thanks to [Bill Shirley](https://github.com/bshirley) for [demonstrating how to hide the `UITabBar`](http://stackoverflow.com/questions/1982172/iphone-is-it-possible-to-hide-the-tabbar).

## License

SNFSegmentedViewController is available under the [MIT license](LICENSE).
