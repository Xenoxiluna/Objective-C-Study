//
//  FactBook.h
//  FunFacts
//
//  Created by BERRY, QUENTIN C. on 11/6/15.
//  Copyright © 2015 Quentin Berry. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

-(NSString *)randomFact;

@end
