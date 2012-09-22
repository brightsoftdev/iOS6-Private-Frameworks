/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUPlaybackViewController.h>

#import "IUCoverFlowOwner-Protocol.h"

@class IUCoverFlowViewController, IUMediaEntitySpecifier;

@interface IUMixedPlaybackViewController : IUPlaybackViewController <IUCoverFlowOwner>
{
    IUMediaEntitySpecifier *_albumContextSpecifier;
    BOOL _animateREO;
    BOOL _nextPushWillZoomArtwork;
    IUMediaEntitySpecifier *_playlistContextSpecifier;
    BOOL _showFlipperHint;
    IUCoverFlowViewController *_transferredCoverFlowController;
}

- (BOOL)_isExistingGeniusMixForDataSource:(id)arg1;
- (BOOL)_previousViewControllerIsActiveGeniusMix;
- (void)_updateAnimateForResumeEventsOnly;
- (void)_setFakeItemForDataSource:(id)arg1;
- (void)_setAnimatesForResumeEventsOnly:(BOOL)arg1;
- (void)_reloadTVOutForQuery:(id)arg1;
- (void)_exitToPlaylistContext:(id)arg1 animated:(BOOL)arg2;
- (void)_exitToAlbumContext:(id)arg1 animated:(BOOL)arg2;
- (void)_backOfAlbumTrackChangeNotification:(id)arg1;
- (void)_playlistChangeNotification:(id)arg1;
- (unsigned int)transitionEffectForViewController:(id)arg1;
@property(retain, nonatomic) IUCoverFlowViewController *coverFlowViewController;
@property(readonly, nonatomic) BOOL isShowingCoverFlow; // @dynamic isShowingCoverFlow;
@property(nonatomic) BOOL nextPushWillZoomArtwork;
- (BOOL)IUShouldApplyInterfaceStyle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
- (void)exitPlayerForAccessorySplash;
- (void)exitPlayerAnimated:(BOOL)arg1;
- (id)newViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (id)newTransitionControllerForChangeToInterfaceOrientation:(int)arg1 fromInterfaceOrientation:(int)arg2;
- (id)newTransitionControllerForChangeToItem:(id)arg1 fromItem:(id)arg2;
- (id)newMediaNavigationItem;
- (void)dealloc;
- (id)init;

@end
