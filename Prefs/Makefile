ARCHS = arm64 arm64e
TARGET := iphone:clang:13.4:11.0

include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = CoeusPrefs
$(BUNDLE_NAME)_FILES = $(wildcard *.m)
$(BUNDLE_NAME)_LIBRARIES += activator colorpicker
$(BUNDLE_NAME)_FRAMEWORKS = UIKit
$(BUNDLE_NAME)_PRIVATE_FRAMEWORKS = Preferences
$(BUNDLE_NAME)_EXTRA_FRAMEWORKS = Cephei CepheiPrefs
$(BUNDLE_NAME)_INSTALL_PATH = /Library/PreferenceBundles/

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/CoeusPreferences.plist$(ECHO_END)