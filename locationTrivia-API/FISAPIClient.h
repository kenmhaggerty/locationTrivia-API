//
//  FISAPIClient.h
//  locationTrivia-API
//

#import <Foundation/Foundation.h>

@interface FISAPIClient : NSObject

+ (FISAPIClient *)sharedClient;

- (void)requestLocationsWithSuccess:(void (^)(NSArray *locations))success failure:(void (^)(NSError *error))failure;
- (void)createLocationWithName:(NSString *)name Latitude:(NSNumber *)latitude longitude:(NSNumber *)longitude withSuccess:(void (^)(NSDictionary *location))success failure:(void (^)(NSError *error))failure;
- (void)deleteLocationWithID:(NSString *)locationID withSuccess:(void (^)(BOOL success))success failure:(void (^)(NSError *error))failure;
- (void)createTriviumWithContent:(NSString *)content forLocationWithID:(NSString *)locationID success:(void (^)(NSDictionary *trivium))success failure:(void (^)(NSError *error))failure;
- (void)deleteTriviumWithID:(NSString *)triviumID withLocationID:(NSString *)locationID withSuccess:(void (^)(BOOL success))success failure:(void (^)(NSError *error))failure;

@end