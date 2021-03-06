//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLBasebandHardwareMessage.h>

@interface PLMav4BasebandHardwareMessage : PLBasebandHardwareMessage
{
    struct _PLMav4BasebandHWStatsHeader *_mav4_header;
    struct _PLMav4BasebandHWStatsSystem *_mav4_system;
    struct _PLMav4BasebandHWStatsARMPerf *_mav4_armPerf;
    struct _PLMav4BasebandHWStatsMDSP *_mav4_mdsp;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_mdm;
    struct _PLMav4BasebandHWStatsQDSP *_mav4_qdsp;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_adm;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_gps;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_usb;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_uart;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_spi;
    struct _PLMav4BasebandHWStatsRX *_mav4_rx;
    struct _PLMav4BasebandHWStatsTX *_mav4_tx;
    struct _PLMav4BasebandHWSleepVeto *_mav4_sleep_qdsp;
    struct _PLMav4BasebandHWSleepVeto *_mav4_sleep_arm;
    unsigned int _mav4_duration;
}

@property(nonatomic) struct _PLMav4BasebandHWSleepVeto *sleep_arm; // @synthesize sleep_arm=_mav4_sleep_arm;
@property(nonatomic) struct _PLMav4BasebandHWSleepVeto *sleep_qdsp; // @synthesize sleep_qdsp=_mav4_sleep_qdsp;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *mdm; // @synthesize mdm=_mav4_mdm;
@property(nonatomic) struct _PLMav4BasebandHWStatsARMPerf *armPerf; // @synthesize armPerf=_mav4_armPerf;
@property(nonatomic) struct _PLMav4BasebandHWStatsSystem *system; // @synthesize system=_mav4_system;
@property(readonly, nonatomic) unsigned short hw_rev;
- (void)logSleepWithLogger:(id)arg1;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *gps; // @synthesize gps=_mav4_gps;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *uart; // @synthesize uart=_mav4_uart;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *spi; // @synthesize spi=_mav4_spi;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *usb; // @synthesize usb=_mav4_usb;
@property(nonatomic) struct _PLMav4BasebandHWStatsQDSP *qdsp; // @synthesize qdsp=_mav4_qdsp;
@property(nonatomic) struct _PLMav4BasebandHWStatsMDSP *mdsp; // @synthesize mdsp=_mav4_mdsp;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *adm; // @synthesize adm=_mav4_adm;
@property(readonly, nonatomic) unsigned short sw_rev;
- (void)logWithLogger:(id)arg1;
@property unsigned int logDuration; // @synthesize logDuration=_mav4_duration;
- (id)indexToRAT:(unsigned int)arg1;
@property(nonatomic) struct _PLMav4BasebandHWStatsTX *tx; // @synthesize tx=_mav4_tx;
@property(nonatomic) struct _PLMav4BasebandHWStatsRX *rx; // @synthesize rx=_mav4_rx;
- (void)logRFWithLogger2:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logModemAppWithLogger:(id)arg1;
- (void)logProcessorWithLogger:(id)arg1;
- (void)logHeaderWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
@property(nonatomic) struct _PLMav4BasebandHWStatsHeader *header; // @synthesize header=_mav4_header;
@property(readonly, nonatomic) unsigned char level;
- (id)initWithData:(id)arg1;

@end

