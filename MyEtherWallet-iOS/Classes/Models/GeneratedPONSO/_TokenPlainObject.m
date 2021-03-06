//
//  _TokenPlainObject.m
//
// DO NOT EDIT. This file is machine-generated and constantly overwritten.
//

#import "_TokenPlainObject.h"
#import "TokenPlainObject.h"

@implementation _TokenPlainObject

#pragma mark - NSCoding

- (void)encodeWithCoder:(NSCoder *)aCoder {

    [aCoder encodeObject:self.address forKey:@"address"];
    [aCoder encodeObject:self.balance forKey:@"balance"];
    [aCoder encodeObject:self.decimals forKey:@"decimals"];
    [aCoder encodeObject:self.name forKey:@"name"];
    [aCoder encodeObject:self.symbol forKey:@"symbol"];
    [aCoder encodeObject:self.fromAccount forKey:@"fromAccount"];
    [aCoder encodeObject:self.price forKey:@"price"];
}

- (id)initWithCoder:(NSCoder *)aDecoder {
    self = [super init];
    if (self != nil) {

        _address = [[aDecoder decodeObjectForKey:@"address"] copy];
        _balance = [[aDecoder decodeObjectForKey:@"balance"] copy];
        _decimals = [[aDecoder decodeObjectForKey:@"decimals"] copy];
        _name = [[aDecoder decodeObjectForKey:@"name"] copy];
        _symbol = [[aDecoder decodeObjectForKey:@"symbol"] copy];
        _fromAccount = [[aDecoder decodeObjectForKey:@"fromAccount"] copy];
        _price = [[aDecoder decodeObjectForKey:@"price"] copy];
    }

    return self;
}

#pragma mark NSCopying

- (id)copyWithZone:(NSZone *)zone {
    TokenPlainObject *replica = [[[self class] allocWithZone:zone] init];

    replica.address = self.address;
    replica.balance = self.balance;
    replica.decimals = self.decimals;
    replica.name = self.name;
    replica.symbol = self.symbol;

    replica.fromAccount = self.fromAccount;
    replica.price = self.price;

    return replica;
}

@end
