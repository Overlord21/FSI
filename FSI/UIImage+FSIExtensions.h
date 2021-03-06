//
// UIImage+FSI.h
//
// Copyright (c) 2013 Tom Baranes
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#if (TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE)

#import <UIKit/UIKit.h>

/** A delightful UIImage category
 */
@interface UIImage (FSIExtensions)

/** Take a screnshot the screen
	@returns an UIImage corresponding of the screenshot
 */
+ (UIImage *)screenshot;

/** Take a screnshot of a specific UIView
	@param viewToCapture the view which will be used for the screenshot
	@returns an UIImage of the screenshot
 */
+ (UIImage *)screenshotOfView:(UIView *)viewToCapture;

/** A way to create an UIImage fill by a color
 @param color the color which will fill the image
 @returns an image well settled following the color choose
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

@end

#endif