/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLUIImageViewController.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, UIImagePickerController, UINavigationItem;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSDictionary *_options;
    UIImagePickerController *_imagePicker;
    UINavigationItem *_navItem;
    id _delegate;
    Class _viewClass;
    unsigned int _canCreateMetadata;
    BOOL _parentInPopoverException;
}

@property(nonatomic) BOOL parentInPopoverException; // @synthesize parentInPopoverException=_parentInPopoverException;
- (void)videoViewPlaybackDidFail:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2;
- (void)_trimVideo:(id)arg1;
- (struct CGRect)previewFrame;
- (int)cropOverlayMode;
- (void)_cancelTrim:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)didChooseVideoAtPath:(id)arg1 options:(id)arg2;
- (void)loadView;
- (void)setViewClass:(Class)arg1;
- (Class)_viewClass;
- (id)uiipc_imagePickerController;
- (id)_trimMessage;
- (id)uiipc_imagePickerOptions;
- (void)setImagePickerOptions:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)navigationItem;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)initWithProperties:(id)arg1;
- (id)initWithPhoto:(id)arg1 trimTitle:(id)arg2;
- (void)_setupNavigationItemAndTrimTitle:(id)arg1;
- (BOOL)_editingForThirdParty;
- (BOOL)_displaysFullScreen;

@end

