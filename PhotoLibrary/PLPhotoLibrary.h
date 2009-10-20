/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <MusicLibrary/MLPhotoLibrary.h>
#import "PhotoLibrary-Structs.h"


@interface PLPhotoLibrary : MLPhotoLibrary {
}
// inherited: +(id)sharedPhotoLibrary;
+(id)sharedPhotoLibraryIfExists;
+(id)photosDirectory;
+(CGImageRef)createThumbnailOfImage:(CGImageRef)image format:(int)format atPath:(id)path;
+(CGImageRef)createThumbnailOfImage:(CGImageRef)image format:(int)format atPath:(id)path orientation:(int)orientation;
+(CGImageRef)createThumbnailOfImage:(CGImageRef)image format:(int)format atPath:(id)path orientation:(int)orientation thumbnailDataOut:(id*)anOut;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(CGImageRef)createCGImageForDulcimerImage:(id)dulcimerImage format:(int)format copyImageData:(BOOL)data;
-(CGImageRef)createCGImageForDulcimerImage:(id)dulcimerImage format:(int)format;
-(id)imageForFormat:(int)format forImage:(id)image;
// inherited: -(id)albums;
-(id)posterImageForAlbum:(id)album;
-(void)_cameraAlbumContentsChanged:(id)changed;
@end
