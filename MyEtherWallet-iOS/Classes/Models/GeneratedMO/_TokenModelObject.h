// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TokenModelObject.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class AccountModelObject;
@class FiatPriceModelObject;

@interface TokenModelObjectID : NSManagedObjectID {}
@end

@interface _TokenModelObject : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) TokenModelObjectID *objectID;

@property (nonatomic, strong, nullable) NSString* address;

@property (nonatomic, strong, nullable) NSDecimalNumber* balance;

@property (nonatomic, strong, nullable) NSNumber* decimals;

@property (atomic) int16_t decimalsValue;
- (int16_t)decimalsValue;
- (void)setDecimalsValue:(int16_t)value_;

@property (nonatomic, strong, nullable) NSString* name;

@property (nonatomic, strong, nullable) NSString* symbol;

@property (nonatomic, strong, nullable) AccountModelObject *fromAccount;

@property (nonatomic, strong, nullable) FiatPriceModelObject *price;

@end

@interface _TokenModelObject (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveAddress;
- (void)setPrimitiveAddress:(nullable NSString*)value;

- (nullable NSDecimalNumber*)primitiveBalance;
- (void)setPrimitiveBalance:(nullable NSDecimalNumber*)value;

- (nullable NSNumber*)primitiveDecimals;
- (void)setPrimitiveDecimals:(nullable NSNumber*)value;

- (int16_t)primitiveDecimalsValue;
- (void)setPrimitiveDecimalsValue:(int16_t)value_;

- (nullable NSString*)primitiveName;
- (void)setPrimitiveName:(nullable NSString*)value;

- (nullable NSString*)primitiveSymbol;
- (void)setPrimitiveSymbol:(nullable NSString*)value;

- (AccountModelObject*)primitiveFromAccount;
- (void)setPrimitiveFromAccount:(AccountModelObject*)value;

- (FiatPriceModelObject*)primitivePrice;
- (void)setPrimitivePrice:(FiatPriceModelObject*)value;

@end

@interface TokenModelObjectAttributes: NSObject 
+ (NSString *)address;
+ (NSString *)balance;
+ (NSString *)decimals;
+ (NSString *)name;
+ (NSString *)symbol;
@end

@interface TokenModelObjectRelationships: NSObject
+ (NSString *)fromAccount;
+ (NSString *)price;
@end

NS_ASSUME_NONNULL_END
