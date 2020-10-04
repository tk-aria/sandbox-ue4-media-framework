#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Props"), TEXT("SM_Lamp_Wall"), TEXT("SM_Lamp_Wall"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SpotLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Props"), TEXT("SM_Lamp_Ceiling"), TEXT("SM_Lamp_Ceiling"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Steam_Lit"), TEXT("P_Steam_Lit"), TEXT("/Script/Engine"), TEXT("ParticleSystem"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Steam01_Cue"), TEXT("Steam01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ParticleSystemComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AudioComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Sparks"), TEXT("P_Sparks"), TEXT("/Script/Engine"), TEXT("ParticleSystem"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Fire_Sparks01_Cue"), TEXT("Fire_Sparks01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Smoke"), TEXT("P_Smoke"), TEXT("/Script/Engine"), TEXT("ParticleSystem"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Smoke01_Cue"), TEXT("Smoke01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Fire"), TEXT("P_Fire"), TEXT("/Script/Engine"), TEXT("ParticleSystem"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Fire01_Cue"), TEXT("Fire01_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Media"), TEXT("MyPlayer_Video"), TEXT("MyPlayer_Video"), TEXT("/Script/MediaAssets"), TEXT("MediaTexture"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("UserWidget"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Image"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("SM_SkySphere"), TEXT("SM_SkySphere"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("M_Sky_Panning_Clouds2"), TEXT("M_Sky_Panning_Clouds2"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Horizon_Color"), TEXT("C_Sky_Horizon_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Zenith_Color"), TEXT("C_Sky_Zenith_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Cloud_Color"), TEXT("C_Sky_Cloud_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLight"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Light"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponentBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveLinearColor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("Skybox"), TEXT("Skybox"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Skybox_Master"), TEXT("M_LightStage_Skybox_Master"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("SM_Arrows"), TEXT("SM_Arrows"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Arrows"), TEXT("M_LightStage_Arrows"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("SunlightColorLUT"), TEXT("SunlightColorLUT"), TEXT("/Script/Engine"), TEXT("CurveLinearColor"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("FogBrightnessLUT"), TEXT("FogBrightnessLUT"), TEXT("/Script/Engine"), TEXT("CurveFloat"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/HDRI"), TEXT("HDRI_Epic_Courtyard_Daylight"), TEXT("HDRI_Epic_Courtyard_Daylight"), TEXT("/Script/Engine"), TEXT("TextureCube"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Skybox_Black"), TEXT("M_LightStage_Skybox_Black"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Blueprints/Assets"), TEXT("M_LightStage_Skybox_HDRI"), TEXT("M_LightStage_Skybox_HDRI"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ExponentialHeightFogComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SkyLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AtmosphericFogComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HitResult"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInterface"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMaterialLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstance"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Texture"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveFloat"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ActorComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Particles"), TEXT("P_Explosion"), TEXT("P_Explosion"), TEXT("/Script/Engine"), TEXT("ParticleSystem"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/StarterContent/Audio"), TEXT("Explosion_Cue"), TEXT("Explosion_Cue"), TEXT("/Script/Engine"), TEXT("SoundCue"), TEXT("")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 55));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
