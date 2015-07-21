//
//  ZHBLEBlocks.h
//  BLE_IOS
//
//  Created by aimoke on 15/7/16.
//  Copyright (c) 2015年 zhuo. All rights reserved.
//

#ifndef BLE_IOS_ZHBLEBlocks_h
#define BLE_IOS_ZHBLEBlocks_h


#endif

#import <CoreBluetooth/CoreBluetooth.h>
@class ZHBLEPeripheral;

//central manager
typedef void (^ZHCharacteristicChangeBlock)(CBCharacteristic *characteristic,NSError *error);
typedef void (^ZHDescriptorChangedBlock)(CBDescriptor * descriptor, NSError * error);
typedef void (^ZHSpecifiedServiceUpdatedBlock)(CBService *service, NSError *error);
typedef void (^ZHObjectChagedBlock)(NSError *error);
typedef void (^ZHServicesUpdated)(NSArray *service);
typedef void (^ZHPeripheralUpdatedBlock)(ZHBLEPeripheral *peripheral);
typedef void (^ZHPeripheralConnectionBlock)(ZHBLEPeripheral *peripheral, NSError*error);


//peripheral manager
typedef void (^ZHPeripheralManagerStatedChangedBlock)(NSDictionary *state);
typedef void (^ZHCentralSubscriptionBlock)(CBCentral *central, CBCharacteristic *characteristic);
typedef void (^ZhCentralReadRequestBlock)(CBATTRequest *readRequest);
typedef void (^ZHCentralWriteRequestBlock)(NSArray *writeRequests);