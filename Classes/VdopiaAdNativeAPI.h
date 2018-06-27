#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

#include <jni.h>
#include "platform/android/jni/JniHelper.h"
#include "cocos2d.h"
#include "AppDelegate.h"

#endif

/* implement these functions with sdk api of different platforms */
#ifdef __cplusplus
extern "C" {
#endif

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//set plugin type here is cpp
void Java_SetPluginType() ;

////   Interstitial Ad methods
void prefetchInterstitialAd(const char *appKey);
void loadInterstitialAd(const char *appKey);
void showInterstitialAd();


//   Interstitial Ad listener methods
void adLoadedInterstitial();
void adFailedInterstitial();
void adDismissedInterstitial();
void adClickedInterstitial();
void adShownInterstitial();

//   Rewarded Ad methods
void prefetchRewardedAd(const char *appKey);
void loadRewardedAd(const char *appKey);
void showRewardedAd(const char *secretkey, const char *userId, const char *rewardname,
                    const char *amount);

//   Rewarded Ad listener methods
void adLoadedRewarded();
void adFailedRewarded();
void adDismissedRewarded();
void adCompletedRewarded();
void adShownErrorRewarded();
void adShownRewarded();

void setAdRequestUserParams(const char *age, const char *birthdate, const char *gender,
                            const char *maritalStatus, const char *ethnicity, const char *dmaCode,
                            const char *postal, const char *currpostal, 
                            const char *latitude, const char *longitude);

void setAdRequestAppParams(const char *appBundle, const char *appDomain, const char *appName,
                           const char *appStoreUrl, const char *appCategory, const char *publisherDomain);

#endif
#ifdef __cplusplus
}
#endif


