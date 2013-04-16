//
//  SkyDriveDownloadHelper.m
//  arc
//
//  Created by Jerome Cheng on 14/4/13.
//  Copyright (c) 2013 nus.cs3217. All rights reserved.
//

#import "SkyDriveDownloadHelper.h"

@interface SkyDriveDownloadHelper ()
@property (weak, nonatomic) SkyDriveFile *file;
@property (weak, nonatomic) LocalFolder *folder;
@end

@implementation SkyDriveDownloadHelper

- (id)initWithFile:(SkyDriveFile *)file Folder:(LocalFolder *)folder
{
    if (self = [super init]) {
        _file = file;
        _folder = folder;
    }
    return self;
}

- (void)liveOperationSucceeded:(LiveDownloadOperation *)operation
{
    NSData *receivedData = [operation data];
    
    NSString *fileName = [_file name];
    NSString *filePath = [[_folder path] stringByAppendingPathComponent:fileName];
    
    NSFileManager *fileManager = [NSFileManager defaultManager];
    [fileManager createFileAtPath:filePath contents:receivedData attributes:nil];
    
    if (_delegate != nil) {
        [_delegate downloadCompleteForHelper:self];
    }
}

@end
