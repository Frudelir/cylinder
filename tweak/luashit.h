#include "lua/lua.h"
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

void init_lua(const char *script);
CATransform3D *default_transform();
void manipulate(UIView *view, float width, float offset);