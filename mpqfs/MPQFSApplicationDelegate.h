//
//  MPQFSApplicationDelegate.h
//  MPQKit
//
//  Created by Jean-François Roy on 31/03/2007.
//  Copyright 2007 MacStorm. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "RXVersionComparator.h"

@interface MPQFSApplicationDelegate : NSObject {
    IBOutlet NSView* loadStdListfilesView;
    IBOutlet NSButton* loadStdListfilesButton;
	IBOutlet RXVersionComparator* comparator;
}

@end
