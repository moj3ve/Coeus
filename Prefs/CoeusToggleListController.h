#import "CoeusRootListController.h"
#import "CoeusToggleController.h"

@interface PSEditableListController : PSListController
@end

@interface CoeusToggleListController : PSEditableListController

- (PSSpecifier *)createToggleSpecifier:(NSString *)name index:(NSNumber *)index glyph:(NSString *)glyph sfSymbols:(NSNumber *)sfSymbols;
- (void)addToggle;
- (void)saveToggle:(PSSpecifier *)spec;

@end