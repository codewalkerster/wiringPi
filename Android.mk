LOCAL_PATH := $(my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := odroid-wpi-pwm.sh
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(TARGET_OUT_ETC)
LOCAL_SRC_FILES := etc/$(LOCAL_MODULE)
include $(BUILD_PREBUILT)
