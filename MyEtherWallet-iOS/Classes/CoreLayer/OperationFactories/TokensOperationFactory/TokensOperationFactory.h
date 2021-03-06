//
//  TokensOperationFactory.h
//  MyEtherWallet-iOS
//
//  Created by Mikhail Nikanorov on 20/05/2018.
//  Copyright © 2018 MyEtherWallet, Inc. All rights reserved.
//

@import Foundation;

@class CompoundOperationBase;
@class NetworkCompoundOperationBuilder;

@protocol QueryTransformer;
@protocol BodyTransformer;
@protocol HeadersBuilder;

@class TokensBody;

@interface TokensOperationFactory : NSObject
- (instancetype)initWithBuilder:(NetworkCompoundOperationBuilder *)builder
               queryTransformer:(id<QueryTransformer>)queryTransformer
                bodyTransformer:(id<BodyTransformer>)bodyTransformer
                 headersBuilder:(id<HeadersBuilder>)headersBuilder;
- (CompoundOperationBase *) contractBalancesWithBody:(TokensBody *)body;
@end
