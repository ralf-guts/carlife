
#	Build options
#	-------------
#	verbose		-- 1=Produce verbose output.
#
#	$@ - 目标文件
#	@^ - 所有的依赖文件
#	$< - 第一个依赖文件

INTERACTIVE := $(shell [ -t 0 ] && echo 1)
ifdef INTERACTIVE
	ColorMagenta=\033[0;35m
	ColorCyan=\033[0;36m
	ColorEnd=\033[0m
endif

# Build options

ifneq ($(verbose),1)
	quiet				= @
endif
os							= linux
config						= release

# Paths

LibSource					= $(CURDIR)
CarLife-Vehicle-Lib			= $(LibSource)/..
protobuf-2.5.0				= $(CarLife-Vehicle-Lib)/protobuf-2.5.0
BUILDROOT					= $(LibSource)/build
OBJDIR						= $(BUILDROOT)/obj

VPATH						+= $(LibSource)/core
VPATH						+= $(LibSource)/libwrapper
VPATH						+= $(LibSource)/modules
VPATH						+= $(LibSource)/protobuf/cc/src
VPATH						+= $(LibSource)/utility

# Includes

INCLUDES					+= -I$(LibSource)/protobuf/cc/include
INCLUDES					+= -I$(LibSource)/include
INCLUDES					+= -I$(protobuf-2.5.0)/src

# Link flags

LINKFLAGS					+= -L$(protobuf-2.5.0)/src/.libs

# Libraries

LINKFLAGS					+= -lprotobuf

# Warning flags

COMMON_WARNINGS				+= -g
COMMON_WARNINGS				+= -Wall
COMMON_WARNINGS				+= -W
COMMON_WARNINGS				+= -fPIC

CWARNS						+= $(COMMON_WARNINGS)
CXXWARNS					+= $(COMMON_WARNINGS)

# Compiler flags

CFLAGS						+= $(INCLUDES) $(COMMONFLAGS) $(CWARNS) -Os
CXXFLAGS					+= $(INCLUDES) $(COMMONFLAGS) $(CXXWARNS) -Os

# Targets

TARGETS					+= $(BUILDROOT)/libcarlifevehicle.so

# Rules

.PHONY : all
all: $(TARGETS)

carlifevehicle_objs		+= $(OBJDIR)/CTranRecvPackageProcess.so.o
carlifevehicle_objs		+= $(OBJDIR)/CCarLifeLib.so.o
carlifevehicle_objs		+= $(OBJDIR)/CCmdChannelModule.so.o
carlifevehicle_objs		+= $(OBJDIR)/CConnectionSetupModule.so.o
carlifevehicle_objs		+= $(OBJDIR)/CCtrlChannelModule.so.o
carlifevehicle_objs		+= $(OBJDIR)/CMediaChannelModule.so.o
carlifevehicle_objs		+= $(OBJDIR)/CTTSChannelModule.so.o
carlifevehicle_objs		+= $(OBJDIR)/CVideoChannelModule.so.o
carlifevehicle_objs		+= $(OBJDIR)/CVRChannelModule.so.o
carlifevehicle_objs		+= $(OBJDIR)/CConnectManager.so.o
carlifevehicle_objs		+= $(OBJDIR)/CSocketConnector.so.o
carlifevehicle_objs		+= $(OBJDIR)/CVirtualShell.so.o
carlifevehicle_objs		+= $(OBJDIR)/socket.so.o
carlifevehicle_objs		+= $(OBJDIR)/socketv6.so.o
carlifevehicle_objs		+= $(OBJDIR)/CCarLifeLog.so.o

carlifevehicle_objs		+= $(OBJDIR)/CarlifeAccelerationProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTPairInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeCallRecordsListProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeCallRecordsProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeCarGpsProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeCarHardKeyCodeProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeCarSpeedProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeConnectExceptionProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeContactsListProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeContactsProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeDeviceInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeGearInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeGyroscopeProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeMediaInfoListProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeMediaInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeMediaProgressBarProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeModuleStatusListProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeModuleStatusProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeMusicInitProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeNaviNextTurnInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeProtocolVersionMatchStatusProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeProtocolVersionProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeStatisticsInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTouchActionProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTouchEventAllDeviceProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTouchEventDeviceProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTouchEventProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTouchFlingProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTouchScrollProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTouchSinglePointProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeTTSInitProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeVehicleInfoListProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeVehicleInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeVideoEncoderInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeVideoFrameRateProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeAuthenRequestProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeAuthenResponseProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeAuthenResultProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTHfpConnectionProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTHfpIndicationProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTHfpRequestProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTHfpResponseProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTHfpStatusRequestProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTHfpStatusResponseProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTStartPairReqProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeNaviAssitantGuideInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeSubscribeMobileCarLifeInfoListProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeSubscribeMobileCarLifeInfoProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTIdentifyResultIndProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeBTStartIdentifyReqProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeErrorCodeProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeFeatureConfigListProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeFeatureConfigProto.pb.o
carlifevehicle_objs		+= $(OBJDIR)/CarlifeOilProto.pb.o

$(carlifevehicle_objs): | $(BUILDROOT)/obj

$(BUILDROOT)/obj:
	$(quiet)mkdir -p $@

$(BUILDROOT)/libcarlifevehicle.so: $(carlifevehicle_objs)
	@echo "Linking ($(os)-$(config)) $(ColorMagenta)$(notdir $@)$(ColorEnd)"
	$(quiet)$(CC) -shared -Wl,-soname,libcarlifevehicle.so -o $@ $(LINKFLAGS) $^
	@echo "$(ColorCyan)=== BUILD COMPLETE: $(notdir $@) ($(os)-$(config))$(ColorEnd)"

# General rules

$(OBJDIR)/%.o: %.c
	@echo "Compiling ($(os)-$(config)-direct) $(ColorMagenta)$(notdir $<)$(ColorEnd)"
	$(quiet)$(CC) -c $(CPPFLAGS) $(CFLAGS) -o $@ $<

$(OBJDIR)/%.o: %.cpp
	@echo "Compiling ($(os)-$(config)-direct) $(ColorMagenta)$(notdir $<)$(ColorEnd)"
	$(quiet)$(CXX) -c $(CXXFLAGS) -o $@ $<

$(OBJDIR)/%.so.o: %.c
	@echo "Compiling ($(os)-$(config)-shared) $(ColorMagenta)$(notdir $<)$(ColorEnd)"
	$(quiet)$(CC) -c -fPIC $(CPPFLAGS) $(CFLAGS) -o $@ $<

$(OBJDIR)/%.so.o: %.cpp
	@echo "Compiling ($(os)-$(config)-shared) $(ColorMagenta)$(notdir $<)$(ColorEnd)"
	$(quiet)$(CXX) -c -fPIC $(CXXFLAGS) -o $@ $<

$(OBJDIR)/%.pb.o: %.pb.cc
	@echo "Compiling ($(os)-$(config)-shared) $(ColorMagenta)$(notdir $<)$(ColorEnd)"
	$(quiet)$(CXX) -c -fPIC $(CXXFLAGS) -o $@ $<

.PHONY : clean
clean:
	-rm -rf $(BUILDROOT)