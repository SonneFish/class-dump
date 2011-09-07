// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2011 Steve Nygard.

#import "CDLCSegment.h"

@interface CDLCSegment64 : CDLCSegment
{
    struct segment_command_64 segmentCommand;
}

@end