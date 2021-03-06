/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement
{
    int _created;
    int _updated;
    int _deleted;
}

@property int deleted; // @synthesize deleted=_deleted;
@property int updated; // @synthesize updated=_updated;
@property int created; // @synthesize created=_created;
- (id)copyParseRules;
- (void)setDeletedItem:(id)arg1;
- (void)setUpdatedItem:(id)arg1;
- (void)setCreatedItem:(id)arg1;
- (id)init;

@end

