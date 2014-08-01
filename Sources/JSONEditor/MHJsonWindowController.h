//
//  MHJsonWindowController.h
//  MongoHub
//
//  Created by Syd on 10-12-27.
//  Copyright 2010 ThePeppersStudio.COM. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "UKSyntaxColoredTextViewController.h"
#import <mongo-objc-driver/MOD_public.h>

@class MODClient;
@class MODCollection;

#ifndef UKSCTD_DEFAULT_TEXTENCODING
#define UKSCTD_DEFAULT_TEXTENCODING     NSUTF8StringEncoding
#endif

@interface MHJsonWindowController : NSWindowController <UKSyntaxColoredTextViewDelegate, MODQueryCallbackTarget>
{
    MODCollection                       *_collection;
    NSDictionary                        *jsonDict;
    IBOutlet NSTextView                 *myTextView;
    NSProgressIndicator                 *_progressIndicator;
    IBOutlet NSTextField                *status;
    UKSyntaxColoredTextViewController   *syntaxColoringController;
}

@property (nonatomic, retain) NSDictionary *jsonDict;
@property (nonatomic, retain) NSTextView *myTextView;
@property (nonatomic, readwrite, retain) MODCollection *collection;
@property (nonatomic, readonly, strong) IBOutlet NSProgressIndicator *progressIndicator;

- (IBAction)save:(id)sender;
- (IBAction)recolorCompleteFile: (id)sender;

@end
