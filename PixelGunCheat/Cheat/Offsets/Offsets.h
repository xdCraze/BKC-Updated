#pragma once
#include <cstdint>

class Offsets
{
public:
    // Updates
    static inline uint64_t PlayerMoveCUpdate = 0x1c50d40; // Search "class "Player_move_c" -> Search "private Void Update() { }"
    static inline uint64_t PlayerMoveCFixedUpdate = 0x1ba5a00; // Search "class "Player_move_c" -> Search "private Void FixedUpdate() { }"
    static inline uint64_t WeaponSoundsUpdate = 0x6fa640; // Search "class "WeaponSounds" -> Search "private Void Update() { }"
    static inline uint64_t WeaponSoundsLateUpdate = 0x6f2410; // Search "class "WeaponSounds" -> Search "private Void LateUpdate() { }"

    // Non-obfuscated Methods
    static inline uint64_t SetNextCriticalHit = 0x6f26d0; // Search "class "WeaponSounds" -> Search "public Boolean NextHitCritical() { }"
    static inline uint64_t MakeInvisibleForSeconds = 0x1ba60a0; // Search "class "Player_move_c" -> Search "public Void MakeInvisibleForSecondsRPC(Single"
    static inline uint64_t OnPreRender = 0x43b9150; // Search "class PostProcessLayer : MonoBehaviour" -> Search "private Void OnPreRender() { }"
    static inline uint64_t TextMeshGetColor = 0x452edc0; // Search "class TextMesh : Component" -> Search "private Void get_color_Injected(Color ret) { }"
    static inline uint64_t WorldToScreenPoint = 0x4420fa0; // Search "private Void WorldToScreenPoint_Injected(Vector3 position, MonoOrStereoscopicEye eye, Vector3 ret) { }"
    static inline uint64_t TextMeshGetText = 0x452f020; // Search "class TextMesh : Component" -> First method (public String get_text() { })
    static inline uint64_t BehaviourGetEnabled = 0x44419b0; // Search "class Behaviour : Component" -> First method (public Boolean get_enabled() { })
    static inline uint64_t ComponentGetTransform = 0x44429d0; // Search "class Component" -> First method (public Transform get_transform() { })
    static inline uint64_t TransformGetRotation = 0x4457960; // Search "class Transform : Component, IEnumerable" -> Search "private Void get_rotation_Injected(Quaternion ret) { }"
    static inline uint64_t TransformGetPosition = 0x44577f0; // Search "class Transform : Component, IEnumerable" -> Search "private Void get_position_Injected(Vector3 ret) { }"
    static inline uint64_t TransformLookAt = 0x444E110; // Search "class Transform : Component, IEnumerable" -> Search "private Void Internal_LookAt_Injected(Vector3 worldPosition, Vector3 worldUp) { }"
    static inline uint64_t PhysicsRayCast = 0x44ADB10; // Search "class Physics" -> Search "public static Boolean Raycast(Ray ray, RaycastHit hitInfo, Single maxDistance) { }"
    static inline uint64_t ObjectGetInstanceID = 0x444a040; // Search "private class Object" -> First method (public Int32 GetInstanceID() { })
    static inline uint64_t OnSceneUnload = 0x4234e00; // Search "abstract class UnityDependency" -> Search "public static Void OnSceneUnloaded(SceneCompat scene) { }"
    static inline uint64_t ItemRecordGetShopId = 0x616ad0; // Search "internal String get_BundleName() { }"
    static inline uint64_t TeamKill = 0x1b8dba0; // Search "class PlayerDamageable : MonoBehaviour" -> Search "public Boolean IsEnemyTo"
    static inline uint64_t LotteryDropCount = 0xbe95c0; // Search "class GameEventItemData : ICloneable" -> Search "public Int32 get_Count() { }"
    static inline uint64_t LotteryDropId = 0xbe96c0; // ^^^ 2 Offsets above
    static inline uint64_t LotteryDropType = 0xbe9710; // ^^^ 1 Offset above
    static inline uint64_t CameraGetMain = 0x44216e0; // Search "class Camera : Behaviour" -> Search "public static Camera get_main() { }"
    static inline uint64_t CameraGetCurrent = 0x4421570; // ^^^ 1 Offset below
    static inline uint64_t CameraSetFieldOfView = 0x4421fc0; // Search "class Camera : Behaviour" -> Search "public Void set_fieldOfView(Single value) { }"
    static inline uint64_t TransformSetRotation = 0x4458190; // Search "class Transform : Component, IEnumerable" -> Search "private Void set_rotation_Injected(Quaternion value) { }"

    // Obfuscated Methods
    static inline uint64_t GetWeaponSkinSettings = 0x972b70; // Search "internal static WeaponSkinSettings" -> Should be: internal static WeaponSkinSettings(String) { }
    static inline uint64_t InfiniteGemClaim = 0x4bae10; // Search "class AlmanachWeaponSet" -> 2 Classes above -> 6 Offsets below ".ctor() { }" (internal static Boolean)
    static inline uint64_t RapidFire = 0x116a500; // Search "class BalanceController : MonoBehaviour" -> Search "ItemRarity" -> 11th Offset below (internal static Single(int32))
    static inline uint64_t PriceModifier = 0x8218b0; // Search "internal sealed class PlaneIsInside : BaseIsInside" -> Class below -> First 'internal Int32' method
    static inline uint64_t RewardMultiplier = 0xcf05c0; // Search "= "class DoubleRewardConnectScene : MonoBehaviour" -> Class above -> internal Int32 above private Void (Nullable`1)
    static inline uint64_t DoubleRewards = 0xcf2160; // ^^^ Same class -> 3 Offsets below private Void (Nullable`1)
    static inline uint64_t PremiumPass = 0x1979330; // Search "class PixelPassLoadingTipsController" -> 4 Classes above -> 9th Offset below internal Boolean (Nullable`1) (internal Int32() { })
    static inline uint64_t GetItemRecordDict = 0x827b50; // Search "class KeybordHolder : MonoBehaviour" -> Class Above -> Below ".cctor() { }" (public static Dictionary`2)
    static inline uint64_t AddWeapon = 0x6a8e30; // Search "class WeaponManager" -> Search "private Void OnDestroy() { }" -> Offset above (internal Void (string, bool, bool, nullptr))
    static inline uint64_t GetDamageMultiplier = 0x117ef90; // Search "class BalanceController : MonoBehaviour" -> Search "ItemRarity" 6x -> 3rd Offset below (internal static Single(int32))
    static inline uint64_t GetPlayerSpeed = 0x1165de0; // Search "class BalanceController : MonoBehaviour" -> First internal static Single(Int32) method
    static inline uint64_t GetAmmoInClip = 0x1163bb0; // Search "class BalanceController : MonoBehaviour" -> Search "ItemRarity" 6x -> 9th Offset below (internal static Single(int32))
    static inline uint64_t GetAmmo = 0x1178960; // Search "class BalanceController : MonoBehaviour" -> Search "ItemRarity" -> 16th Offset below (internal static int32(int32))
    static inline uint64_t PlayerGetImmortality = 0x1bb1e30; // Search "class Player_move_c" -> Search "PortalForPlayerController" x4 -> 7th Offset below (internal Boolean() { })
    static inline uint64_t GiveWear = 0x2112d70; // Search "= "class InappRememberedBonus" -> 2 Classes above -> internal static Void(String) { }
    static inline uint64_t GiveWeapon = 0x2115c70; // ^^^ 2 Offsets below (internal static Void (String, Boolean, Boolean) { })
    static inline uint64_t GivePets = 0x210f770; // ^^^ 2 Offsets below (internal static Void (String, int32) { })
    static inline uint64_t GiveGadget = 0x1fa1060; // Search "enum GadgetCategory" -> 2 Classes above -> 6 Offsets up (internal static Void (String, Int32) { })
    static inline uint64_t AddGems = 0x2118150; // Search "public String currency;" -> Class below -> 3/3 internal static Void (Int32, Boolean, Boolean, nullptr, nullptr, nullptr) { }
    static inline uint64_t AddCoins = 0x2119880; // ^^^ 1 Above
    static inline uint64_t AddSomeCurrency = 0x2119e70; // ^^^ 1 Above
    static inline uint64_t AddClanChestPoints = 0x211a570; // Search "public String currency;" -> Class below -> 5th Offset above 'private static Void .cctor() { }'
    static inline uint64_t ProgressUpdaterGetInstance = 0xa94a60; // Search "public Dictionary`2 priceData;" -> 2 Classes below -> Method is: 'internal static OBFUSCATED' Above 5 'internal static Void (Action) { }' (this ones a bit harder to find sorry)
    static inline uint64_t ProgressAddCurrency = 0xa9f590; // ^^^ Same class, second method of 'internal Void (String, Int32, nullptr, Boolean, Boolean, nullptr) { }
    static inline uint64_t GetIDListParentInstance = 0x14d3840; // Search "public KeyValuePair`2 entry;" -> Class below -> Method above .ctor() { }
    static inline uint64_t GetIDList = 0x150fbc0; // ^^^ Same class -> 12th Offset below .ctor() { }
    static inline uint64_t GadgetActivate = 0x1c45120;
    static inline uint64_t GadgetDeactivate = 0x1c20ab0; // ^^^ One offset below, goodluck trying to find
    static inline uint64_t SpoofModuleLevel = 0x15de690; // Search "internal ModuleData" -> Class below -> First internal Int32() { }
    static inline uint64_t ModulePerkDuration = 0x1f9efc0; // Search "enum GadgetCategory" -> 2 Classes below -> 5th internal Single() { }
    static inline uint64_t ThrowGadgetDamage = 0x1f9f4d0; // ^^^ 8 Offsets below (internal Single (PhotonView) { })
    static inline uint64_t GadgetDuration = 0x1f9f2a0; // ^^^ 3 Offsets below (internal Single () { })
    static inline uint64_t GadgetCooldown = 0x1f9ec20; // ^^^ 1 Offset below
    static inline uint64_t ForceItemDisplay = 0x14ba180;

    // Fields
    static inline uint64_t bulletDelay = 0x1aC; // Search "class WeaponSounds" -> Search "public Single bulletDelay;"
    static inline uint64_t playerMoveCPlayerDamageable = 0x690; // Search "class Player_move_c" -> Search "internal PlayerDamageable"
    static inline uint64_t nickLabel = 0x3d8; // Search "class Player_move_c" -> Search "public GameObject nickLabelContainer"
    static inline uint64_t weaponSoundsPlayerMoveC = 0x550; // Search "class WeaponSounds" -> Search "private Player_move_c"
    static inline uint64_t myPlayerTransform = 0x3c0; // Search "class Player_move_c" -> Search "public Transform myPlayerTransform"
    static inline uint64_t headCollider = 0x130; // Search "class Player_move_c" -> Search "public BoxCollider headCollider"
};
