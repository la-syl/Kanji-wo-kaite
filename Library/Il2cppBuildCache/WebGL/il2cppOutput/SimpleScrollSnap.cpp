#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.EventSystems.IBeginDragHandler>
struct Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1;
// System.Action`1<UnityEngine.EventSystems.IDragHandler>
struct Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D;
// System.Action`1<UnityEngine.EventSystems.IEndDragHandler>
struct Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0;
// System.Action`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.CanvasGroup>
struct Dictionary_2_t4ACEC426165F8675D35F119657D5ACBCAC53A038;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.UI.Graphic>
struct Dictionary_2_tC78D97918884C435A2F1FE09F526D293895AD845;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.RectTransform>
struct Dictionary_2_tF1B100BAA7AA3C61BC31E195FFD828531FF0A79F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_tECEEA56321275CFF8DECB929786CE364F743B07D;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.CanvasGroup>
struct TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.UI.Graphic>
struct TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<System.Object>
struct TransitionEffectBase_1_tA5495EB6748946693878A48872192398346C223B;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.RectTransform>
struct TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>
struct UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694;
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Single>
struct UnityEvent_2_tDD3ECC090CCD9EA3AFA04E9A168C9B1CF7097C8E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// DanielLochner.Assets.SimpleScrollSnap.Fade
struct Fade_tA6AA05B89AC9D2307C16DDB82251E9B6F75430F0;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// DanielLochner.Assets.Margins
struct Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NestedScrollRect
struct NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// DanielLochner.Assets.SimpleScrollSnap.RecolourBlue
struct RecolourBlue_tAF2F822A6486B62EF0124CEFD1EC07ECEC830269;
// DanielLochner.Assets.SimpleScrollSnap.RecolourGreen
struct RecolourGreen_t9B2E5E0D60041B0999726A77E135C08AC76FC76F;
// DanielLochner.Assets.SimpleScrollSnap.RecolourRed
struct RecolourRed_tE73B1431675E6BEAE61D01126C676FC45647D8BE;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// DanielLochner.Assets.SimpleScrollSnap.RotateX
struct RotateX_t4930218BFFCA48EE2A28318181B7E5F72B30D590;
// DanielLochner.Assets.SimpleScrollSnap.RotateY
struct RotateY_t8103D24DF5F2BBF87C6F1BF50A244F305855924A;
// DanielLochner.Assets.SimpleScrollSnap.RotateZ
struct RotateZ_t8319C993685E896D0930840D952A546B4C76C634;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// DanielLochner.Assets.SimpleScrollSnap.Scale
struct Scale_t9C4DFBC31F440E9F3D8CDBA60CA718617BFB72B0;
// DanielLochner.Assets.SimpleScrollSnap.ScaleX
struct ScaleX_t90FD01D2D5A1951122DDFC87302DADEE5AFB5CD6;
// DanielLochner.Assets.SimpleScrollSnap.ScaleY
struct ScaleY_tC67C959F8D79C6B7D8A448B289779C652558296A;
// DanielLochner.Assets.SimpleScrollSnap.ScaleZ
struct ScaleZ_t0BC5B1F834A939EDA8B803C278777E4944A7CDB1;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap
struct SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DanielLochner.Assets.SimpleScrollSnap.TranslateZ
struct TranslateZ_t22F9BC427D52DA03ACAEAA1196684B1B1395E5D1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// NestedScrollRect/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD;
// NestedScrollRect/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D;
// NestedScrollRect/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB;
// NestedScrollRect/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E;
// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0
struct U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral204F19AE4DAE1232C3425CBB1CDD81D3BC74A2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6;
IL2CPP_EXTERN_C String_t* _stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058;
IL2CPP_EXTERN_C String_t* _stringLiteral3BA32DD97AC34607D5300A2A6A2FBAF0E7FA4432;
IL2CPP_EXTERN_C String_t* _stringLiteral43657ED7B0503D60FF88BF678A9460427BBA807E;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAD7856BCE41FCDF1BF95ED0F7570B9C075A4CA;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB0945819C5326140A0BC104F36B4FA157BE230;
IL2CPP_EXTERN_C String_t* _stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m217C1CD6D6D22313EABEFB37EFC0AE1F2420690F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m241CB11D617066C0DFB6D1E207B5739E3DF42AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m379DFF140072810D510430AA632E5A0674422715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE179B305F1005B3D7DE31902C79E6CB199F7408F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_m2977BE77C6B13F9EB2FF76FC7DE0B24108BB6C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m55C92A8E7F68A234A2CD98627CDAD19FF502D12E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_m3E86EF9F39F7245C98FFC1D4AB1E870599DAE48B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_m23BACA35F48C30B2F69A879A83BDA0ACB835F80C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mA7C84FECB1E22FAE306947250EDD2D77FD67BDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m3607B633627D0A0168DC4A2E1BE6608B1F865CE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleScrollSnap_GoToNextPanel_m579457C7130CCC02C3719E471700559890D09147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleScrollSnap_GoToPreviousPanel_m27C0C8E6EF873664B4A89FD4887BE5D94FD17563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleScrollSnap_Start_m0012BA36A4228832634C55D7D81302F1483333AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEffectBase_1__ctor_m2C46F0CA18E218A13C10A65A19C8C387CD6E2804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD92C87E3B3E707759309B32E39AA6A7801D57616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_m929E6567D6D0A898C3CA0EB06A5127E7DD72C46D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_m5ED3E70C6469D1C8435FF0FB574A98A2E02A9E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m858E600CB2002B9A67F5DDD2A36BC37596348475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m1EC5067F27D48CDC5615162D709C7EC9E905FDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventUtility_AddListenerOnce_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16CC198B5DE963D526B10ECF704C70789E92D927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m39D61B692E7260E4FAB22A67E15961F0593DBB08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m151E9574F9A4E7DC0EDB30507168BD79321F5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72DCC46EF94405F8B390CD7D5C193A32AF85AE38 
{
public:

public:
};


// System.Object


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// DanielLochner.Assets.Margins
struct Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3  : public RuntimeObject
{
public:
	// System.Single DanielLochner.Assets.Margins::Left
	float ___Left_0;
	// System.Single DanielLochner.Assets.Margins::Right
	float ___Right_1;
	// System.Single DanielLochner.Assets.Margins::Top
	float ___Top_2;
	// System.Single DanielLochner.Assets.Margins::Bottom
	float ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3, ___Left_0)); }
	inline float get_Left_0() const { return ___Left_0; }
	inline float* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(float value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3, ___Right_1)); }
	inline float get_Right_1() const { return ___Right_1; }
	inline float* get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(float value)
	{
		___Right_1 = value;
	}

	inline static int32_t get_offset_of_Top_2() { return static_cast<int32_t>(offsetof(Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3, ___Top_2)); }
	inline float get_Top_2() const { return ___Top_2; }
	inline float* get_address_of_Top_2() { return &___Top_2; }
	inline void set_Top_2(float value)
	{
		___Top_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3, ___Bottom_3)); }
	inline float get_Bottom_3() const { return ___Bottom_3; }
	inline float* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(float value)
	{
		___Bottom_3 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// NestedScrollRect/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass2_0::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_0;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD, ___eventData_0)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_0() const { return ___eventData_0; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_0), (void*)value);
	}
};


// NestedScrollRect/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass3_0::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_0;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D, ___eventData_0)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_0() const { return ___eventData_0; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_0), (void*)value);
	}
};


// NestedScrollRect/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass4_0::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_0;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB, ___eventData_0)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_0() const { return ___eventData_0; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_0), (void*)value);
	}
};


// NestedScrollRect/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass5_0::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_0;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94, ___eventData_0)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_0() const { return ___eventData_0; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_0), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0
struct U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A  : public RuntimeObject
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::panelNumber
	int32_t ___panelNumber_0;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::<>4__this
	SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_panelNumber_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A, ___panelNumber_0)); }
	inline int32_t get_panelNumber_0() const { return ___panelNumber_0; }
	inline int32_t* get_address_of_panelNumber_0() { return &___panelNumber_0; }
	inline void set_panelNumber_0(int32_t value)
	{
		___panelNumber_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A, ___U3CU3E4__this_1)); }
	inline SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>
struct UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// DanielLochner.Assets.MinMax
struct MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F 
{
public:
	// System.Single DanielLochner.Assets.MinMax::min
	float ___min_0;
	// System.Single DanielLochner.Assets.MinMax::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// DanielLochner.Assets.SimpleScrollSnap.Direction
struct Direction_t5309EBC77D529873FCF3D92D9E28AB9084F568DB 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t5309EBC77D529873FCF3D92D9E28AB9084F568DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// DanielLochner.Assets.SimpleScrollSnap.MovementAxis
struct MovementAxis_tCDC76312A487058F0A52300C1B7D955D4AFE10B6 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.MovementAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementAxis_tCDC76312A487058F0A52300C1B7D955D4AFE10B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DanielLochner.Assets.SimpleScrollSnap.MovementType
struct MovementType_t584990011B0143C91D042C273E59989B7CDFBE0B 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_t584990011B0143C91D042C273E59989B7CDFBE0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// DanielLochner.Assets.SimpleScrollSnap.SizeControl
struct SizeControl_tFA2D9C5966C201EF2D2D85A6B33216C54E67587B 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SizeControl::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SizeControl_tFA2D9C5966C201EF2D2D85A6B33216C54E67587B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SnapTarget
struct SnapTarget_tF4A29A606A1DC6A9748E8E4A925DA3FD6CB626D2 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SnapTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnapTarget_tF4A29A606A1DC6A9748E8E4A925DA3FD6CB626D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.Action`1<UnityEngine.EventSystems.IBeginDragHandler>
struct Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.EventSystems.IDragHandler>
struct Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.EventSystems.IEndDragHandler>
struct Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.CanvasGroup>
struct TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxDisplacement
	MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  ___minMaxDisplacement_4;
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxValue
	MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  ___minMaxValue_5;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::function
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___function_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,T> DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::cachedComponents
	Dictionary_2_t4ACEC426165F8675D35F119657D5ACBCAC53A038 * ___cachedComponents_7;

public:
	inline static int32_t get_offset_of_minMaxDisplacement_4() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375, ___minMaxDisplacement_4)); }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  get_minMaxDisplacement_4() const { return ___minMaxDisplacement_4; }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F * get_address_of_minMaxDisplacement_4() { return &___minMaxDisplacement_4; }
	inline void set_minMaxDisplacement_4(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  value)
	{
		___minMaxDisplacement_4 = value;
	}

	inline static int32_t get_offset_of_minMaxValue_5() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375, ___minMaxValue_5)); }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  get_minMaxValue_5() const { return ___minMaxValue_5; }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F * get_address_of_minMaxValue_5() { return &___minMaxValue_5; }
	inline void set_minMaxValue_5(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  value)
	{
		___minMaxValue_5 = value;
	}

	inline static int32_t get_offset_of_function_6() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375, ___function_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_function_6() const { return ___function_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_function_6() { return &___function_6; }
	inline void set_function_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___function_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___function_6), (void*)value);
	}

	inline static int32_t get_offset_of_cachedComponents_7() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375, ___cachedComponents_7)); }
	inline Dictionary_2_t4ACEC426165F8675D35F119657D5ACBCAC53A038 * get_cachedComponents_7() const { return ___cachedComponents_7; }
	inline Dictionary_2_t4ACEC426165F8675D35F119657D5ACBCAC53A038 ** get_address_of_cachedComponents_7() { return &___cachedComponents_7; }
	inline void set_cachedComponents_7(Dictionary_2_t4ACEC426165F8675D35F119657D5ACBCAC53A038 * value)
	{
		___cachedComponents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedComponents_7), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.UI.Graphic>
struct TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxDisplacement
	MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  ___minMaxDisplacement_4;
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxValue
	MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  ___minMaxValue_5;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::function
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___function_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,T> DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::cachedComponents
	Dictionary_2_tC78D97918884C435A2F1FE09F526D293895AD845 * ___cachedComponents_7;

public:
	inline static int32_t get_offset_of_minMaxDisplacement_4() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D, ___minMaxDisplacement_4)); }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  get_minMaxDisplacement_4() const { return ___minMaxDisplacement_4; }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F * get_address_of_minMaxDisplacement_4() { return &___minMaxDisplacement_4; }
	inline void set_minMaxDisplacement_4(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  value)
	{
		___minMaxDisplacement_4 = value;
	}

	inline static int32_t get_offset_of_minMaxValue_5() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D, ___minMaxValue_5)); }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  get_minMaxValue_5() const { return ___minMaxValue_5; }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F * get_address_of_minMaxValue_5() { return &___minMaxValue_5; }
	inline void set_minMaxValue_5(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  value)
	{
		___minMaxValue_5 = value;
	}

	inline static int32_t get_offset_of_function_6() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D, ___function_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_function_6() const { return ___function_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_function_6() { return &___function_6; }
	inline void set_function_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___function_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___function_6), (void*)value);
	}

	inline static int32_t get_offset_of_cachedComponents_7() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D, ___cachedComponents_7)); }
	inline Dictionary_2_tC78D97918884C435A2F1FE09F526D293895AD845 * get_cachedComponents_7() const { return ___cachedComponents_7; }
	inline Dictionary_2_tC78D97918884C435A2F1FE09F526D293895AD845 ** get_address_of_cachedComponents_7() { return &___cachedComponents_7; }
	inline void set_cachedComponents_7(Dictionary_2_tC78D97918884C435A2F1FE09F526D293895AD845 * value)
	{
		___cachedComponents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedComponents_7), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.RectTransform>
struct TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxDisplacement
	MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  ___minMaxDisplacement_4;
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxValue
	MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  ___minMaxValue_5;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::function
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___function_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,T> DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::cachedComponents
	Dictionary_2_tF1B100BAA7AA3C61BC31E195FFD828531FF0A79F * ___cachedComponents_7;

public:
	inline static int32_t get_offset_of_minMaxDisplacement_4() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94, ___minMaxDisplacement_4)); }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  get_minMaxDisplacement_4() const { return ___minMaxDisplacement_4; }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F * get_address_of_minMaxDisplacement_4() { return &___minMaxDisplacement_4; }
	inline void set_minMaxDisplacement_4(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  value)
	{
		___minMaxDisplacement_4 = value;
	}

	inline static int32_t get_offset_of_minMaxValue_5() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94, ___minMaxValue_5)); }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  get_minMaxValue_5() const { return ___minMaxValue_5; }
	inline MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F * get_address_of_minMaxValue_5() { return &___minMaxValue_5; }
	inline void set_minMaxValue_5(MinMax_tF93EBBBDF11400F135CA83EE43BC1CF50C6D967F  value)
	{
		___minMaxValue_5 = value;
	}

	inline static int32_t get_offset_of_function_6() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94, ___function_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_function_6() const { return ___function_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_function_6() { return &___function_6; }
	inline void set_function_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___function_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___function_6), (void*)value);
	}

	inline static int32_t get_offset_of_cachedComponents_7() { return static_cast<int32_t>(offsetof(TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94, ___cachedComponents_7)); }
	inline Dictionary_2_tF1B100BAA7AA3C61BC31E195FFD828531FF0A79F * get_cachedComponents_7() const { return ___cachedComponents_7; }
	inline Dictionary_2_tF1B100BAA7AA3C61BC31E195FFD828531FF0A79F ** get_address_of_cachedComponents_7() { return &___cachedComponents_7; }
	inline void set_cachedComponents_7(Dictionary_2_tF1B100BAA7AA3C61BC31E195FFD828531FF0A79F * value)
	{
		___cachedComponents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedComponents_7), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap
struct SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DanielLochner.Assets.SimpleScrollSnap.MovementType DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::movementType
	int32_t ___movementType_4;
	// DanielLochner.Assets.SimpleScrollSnap.MovementAxis DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::movementAxis
	int32_t ___movementAxis_5;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useAutomaticLayout
	bool ___useAutomaticLayout_6;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::automaticLayoutSpacing
	float ___automaticLayoutSpacing_7;
	// DanielLochner.Assets.SimpleScrollSnap.SizeControl DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::sizeControl
	int32_t ___sizeControl_8;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_9;
	// DanielLochner.Assets.Margins DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::automaticLayoutMargins
	Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * ___automaticLayoutMargins_10;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useInfiniteScrolling
	bool ___useInfiniteScrolling_11;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::infiniteScrollingSpacing
	float ___infiniteScrollingSpacing_12;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useOcclusionCulling
	bool ___useOcclusionCulling_13;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::startingPanel
	int32_t ___startingPanel_14;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useSwipeGestures
	bool ___useSwipeGestures_15;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::minimumSwipeSpeed
	float ___minimumSwipeSpeed_16;
	// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::previousButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___previousButton_17;
	// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::nextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___nextButton_18;
	// UnityEngine.UI.ToggleGroup DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::pagination
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___pagination_19;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useToggleNavigation
	bool ___useToggleNavigation_20;
	// DanielLochner.Assets.SimpleScrollSnap.SnapTarget DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::snapTarget
	int32_t ___snapTarget_21;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::snapSpeed
	float ___snapSpeed_22;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::thresholdSpeedToSnap
	float ___thresholdSpeedToSnap_23;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useHardSnapping
	bool ___useHardSnapping_24;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useUnscaledTime
	bool ___useUnscaledTime_25;
	// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onTransitionEffects
	UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * ___onTransitionEffects_26;
	// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelSelecting
	UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * ___onPanelSelecting_27;
	// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelSelected
	UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * ___onPanelSelected_28;
	// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelCentering
	UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * ___onPanelCentering_29;
	// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelCentered
	UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * ___onPanelCentered_30;
	// UnityEngine.UI.ScrollRect DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::scrollRect
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___scrollRect_31;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::contentSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___contentSize_32;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::prevAnchoredPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___prevAnchoredPosition_33;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___velocity_34;
	// DanielLochner.Assets.SimpleScrollSnap.Direction DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::releaseDirection
	int32_t ___releaseDirection_35;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::releaseSpeed
	float ___releaseSpeed_36;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::isDragging
	bool ___isDragging_37;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::isPressing
	bool ___isPressing_38;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::isSelected
	bool ___isSelected_39;
	// UnityEngine.RectTransform[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<Panels>k__BackingField
	RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* ___U3CPanelsU3Ek__BackingField_40;
	// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<Toggles>k__BackingField
	ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* ___U3CTogglesU3Ek__BackingField_41;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<SelectedPanel>k__BackingField
	int32_t ___U3CSelectedPanelU3Ek__BackingField_42;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<CenteredPanel>k__BackingField
	int32_t ___U3CCenteredPanelU3Ek__BackingField_43;

public:
	inline static int32_t get_offset_of_movementType_4() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___movementType_4)); }
	inline int32_t get_movementType_4() const { return ___movementType_4; }
	inline int32_t* get_address_of_movementType_4() { return &___movementType_4; }
	inline void set_movementType_4(int32_t value)
	{
		___movementType_4 = value;
	}

	inline static int32_t get_offset_of_movementAxis_5() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___movementAxis_5)); }
	inline int32_t get_movementAxis_5() const { return ___movementAxis_5; }
	inline int32_t* get_address_of_movementAxis_5() { return &___movementAxis_5; }
	inline void set_movementAxis_5(int32_t value)
	{
		___movementAxis_5 = value;
	}

	inline static int32_t get_offset_of_useAutomaticLayout_6() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___useAutomaticLayout_6)); }
	inline bool get_useAutomaticLayout_6() const { return ___useAutomaticLayout_6; }
	inline bool* get_address_of_useAutomaticLayout_6() { return &___useAutomaticLayout_6; }
	inline void set_useAutomaticLayout_6(bool value)
	{
		___useAutomaticLayout_6 = value;
	}

	inline static int32_t get_offset_of_automaticLayoutSpacing_7() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___automaticLayoutSpacing_7)); }
	inline float get_automaticLayoutSpacing_7() const { return ___automaticLayoutSpacing_7; }
	inline float* get_address_of_automaticLayoutSpacing_7() { return &___automaticLayoutSpacing_7; }
	inline void set_automaticLayoutSpacing_7(float value)
	{
		___automaticLayoutSpacing_7 = value;
	}

	inline static int32_t get_offset_of_sizeControl_8() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___sizeControl_8)); }
	inline int32_t get_sizeControl_8() const { return ___sizeControl_8; }
	inline int32_t* get_address_of_sizeControl_8() { return &___sizeControl_8; }
	inline void set_sizeControl_8(int32_t value)
	{
		___sizeControl_8 = value;
	}

	inline static int32_t get_offset_of_size_9() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___size_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_9() const { return ___size_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_9() { return &___size_9; }
	inline void set_size_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_9 = value;
	}

	inline static int32_t get_offset_of_automaticLayoutMargins_10() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___automaticLayoutMargins_10)); }
	inline Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * get_automaticLayoutMargins_10() const { return ___automaticLayoutMargins_10; }
	inline Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 ** get_address_of_automaticLayoutMargins_10() { return &___automaticLayoutMargins_10; }
	inline void set_automaticLayoutMargins_10(Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * value)
	{
		___automaticLayoutMargins_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___automaticLayoutMargins_10), (void*)value);
	}

	inline static int32_t get_offset_of_useInfiniteScrolling_11() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___useInfiniteScrolling_11)); }
	inline bool get_useInfiniteScrolling_11() const { return ___useInfiniteScrolling_11; }
	inline bool* get_address_of_useInfiniteScrolling_11() { return &___useInfiniteScrolling_11; }
	inline void set_useInfiniteScrolling_11(bool value)
	{
		___useInfiniteScrolling_11 = value;
	}

	inline static int32_t get_offset_of_infiniteScrollingSpacing_12() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___infiniteScrollingSpacing_12)); }
	inline float get_infiniteScrollingSpacing_12() const { return ___infiniteScrollingSpacing_12; }
	inline float* get_address_of_infiniteScrollingSpacing_12() { return &___infiniteScrollingSpacing_12; }
	inline void set_infiniteScrollingSpacing_12(float value)
	{
		___infiniteScrollingSpacing_12 = value;
	}

	inline static int32_t get_offset_of_useOcclusionCulling_13() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___useOcclusionCulling_13)); }
	inline bool get_useOcclusionCulling_13() const { return ___useOcclusionCulling_13; }
	inline bool* get_address_of_useOcclusionCulling_13() { return &___useOcclusionCulling_13; }
	inline void set_useOcclusionCulling_13(bool value)
	{
		___useOcclusionCulling_13 = value;
	}

	inline static int32_t get_offset_of_startingPanel_14() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___startingPanel_14)); }
	inline int32_t get_startingPanel_14() const { return ___startingPanel_14; }
	inline int32_t* get_address_of_startingPanel_14() { return &___startingPanel_14; }
	inline void set_startingPanel_14(int32_t value)
	{
		___startingPanel_14 = value;
	}

	inline static int32_t get_offset_of_useSwipeGestures_15() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___useSwipeGestures_15)); }
	inline bool get_useSwipeGestures_15() const { return ___useSwipeGestures_15; }
	inline bool* get_address_of_useSwipeGestures_15() { return &___useSwipeGestures_15; }
	inline void set_useSwipeGestures_15(bool value)
	{
		___useSwipeGestures_15 = value;
	}

	inline static int32_t get_offset_of_minimumSwipeSpeed_16() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___minimumSwipeSpeed_16)); }
	inline float get_minimumSwipeSpeed_16() const { return ___minimumSwipeSpeed_16; }
	inline float* get_address_of_minimumSwipeSpeed_16() { return &___minimumSwipeSpeed_16; }
	inline void set_minimumSwipeSpeed_16(float value)
	{
		___minimumSwipeSpeed_16 = value;
	}

	inline static int32_t get_offset_of_previousButton_17() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___previousButton_17)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_previousButton_17() const { return ___previousButton_17; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_previousButton_17() { return &___previousButton_17; }
	inline void set_previousButton_17(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___previousButton_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousButton_17), (void*)value);
	}

	inline static int32_t get_offset_of_nextButton_18() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___nextButton_18)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_nextButton_18() const { return ___nextButton_18; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_nextButton_18() { return &___nextButton_18; }
	inline void set_nextButton_18(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___nextButton_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextButton_18), (void*)value);
	}

	inline static int32_t get_offset_of_pagination_19() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___pagination_19)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_pagination_19() const { return ___pagination_19; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_pagination_19() { return &___pagination_19; }
	inline void set_pagination_19(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___pagination_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pagination_19), (void*)value);
	}

	inline static int32_t get_offset_of_useToggleNavigation_20() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___useToggleNavigation_20)); }
	inline bool get_useToggleNavigation_20() const { return ___useToggleNavigation_20; }
	inline bool* get_address_of_useToggleNavigation_20() { return &___useToggleNavigation_20; }
	inline void set_useToggleNavigation_20(bool value)
	{
		___useToggleNavigation_20 = value;
	}

	inline static int32_t get_offset_of_snapTarget_21() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___snapTarget_21)); }
	inline int32_t get_snapTarget_21() const { return ___snapTarget_21; }
	inline int32_t* get_address_of_snapTarget_21() { return &___snapTarget_21; }
	inline void set_snapTarget_21(int32_t value)
	{
		___snapTarget_21 = value;
	}

	inline static int32_t get_offset_of_snapSpeed_22() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___snapSpeed_22)); }
	inline float get_snapSpeed_22() const { return ___snapSpeed_22; }
	inline float* get_address_of_snapSpeed_22() { return &___snapSpeed_22; }
	inline void set_snapSpeed_22(float value)
	{
		___snapSpeed_22 = value;
	}

	inline static int32_t get_offset_of_thresholdSpeedToSnap_23() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___thresholdSpeedToSnap_23)); }
	inline float get_thresholdSpeedToSnap_23() const { return ___thresholdSpeedToSnap_23; }
	inline float* get_address_of_thresholdSpeedToSnap_23() { return &___thresholdSpeedToSnap_23; }
	inline void set_thresholdSpeedToSnap_23(float value)
	{
		___thresholdSpeedToSnap_23 = value;
	}

	inline static int32_t get_offset_of_useHardSnapping_24() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___useHardSnapping_24)); }
	inline bool get_useHardSnapping_24() const { return ___useHardSnapping_24; }
	inline bool* get_address_of_useHardSnapping_24() { return &___useHardSnapping_24; }
	inline void set_useHardSnapping_24(bool value)
	{
		___useHardSnapping_24 = value;
	}

	inline static int32_t get_offset_of_useUnscaledTime_25() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___useUnscaledTime_25)); }
	inline bool get_useUnscaledTime_25() const { return ___useUnscaledTime_25; }
	inline bool* get_address_of_useUnscaledTime_25() { return &___useUnscaledTime_25; }
	inline void set_useUnscaledTime_25(bool value)
	{
		___useUnscaledTime_25 = value;
	}

	inline static int32_t get_offset_of_onTransitionEffects_26() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___onTransitionEffects_26)); }
	inline UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * get_onTransitionEffects_26() const { return ___onTransitionEffects_26; }
	inline UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 ** get_address_of_onTransitionEffects_26() { return &___onTransitionEffects_26; }
	inline void set_onTransitionEffects_26(UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * value)
	{
		___onTransitionEffects_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTransitionEffects_26), (void*)value);
	}

	inline static int32_t get_offset_of_onPanelSelecting_27() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___onPanelSelecting_27)); }
	inline UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * get_onPanelSelecting_27() const { return ___onPanelSelecting_27; }
	inline UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF ** get_address_of_onPanelSelecting_27() { return &___onPanelSelecting_27; }
	inline void set_onPanelSelecting_27(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * value)
	{
		___onPanelSelecting_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelSelecting_27), (void*)value);
	}

	inline static int32_t get_offset_of_onPanelSelected_28() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___onPanelSelected_28)); }
	inline UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * get_onPanelSelected_28() const { return ___onPanelSelected_28; }
	inline UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF ** get_address_of_onPanelSelected_28() { return &___onPanelSelected_28; }
	inline void set_onPanelSelected_28(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * value)
	{
		___onPanelSelected_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelSelected_28), (void*)value);
	}

	inline static int32_t get_offset_of_onPanelCentering_29() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___onPanelCentering_29)); }
	inline UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * get_onPanelCentering_29() const { return ___onPanelCentering_29; }
	inline UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 ** get_address_of_onPanelCentering_29() { return &___onPanelCentering_29; }
	inline void set_onPanelCentering_29(UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * value)
	{
		___onPanelCentering_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelCentering_29), (void*)value);
	}

	inline static int32_t get_offset_of_onPanelCentered_30() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___onPanelCentered_30)); }
	inline UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * get_onPanelCentered_30() const { return ___onPanelCentered_30; }
	inline UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 ** get_address_of_onPanelCentered_30() { return &___onPanelCentered_30; }
	inline void set_onPanelCentered_30(UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * value)
	{
		___onPanelCentered_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelCentered_30), (void*)value);
	}

	inline static int32_t get_offset_of_scrollRect_31() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___scrollRect_31)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_scrollRect_31() const { return ___scrollRect_31; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_scrollRect_31() { return &___scrollRect_31; }
	inline void set_scrollRect_31(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___scrollRect_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollRect_31), (void*)value);
	}

	inline static int32_t get_offset_of_contentSize_32() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___contentSize_32)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_contentSize_32() const { return ___contentSize_32; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_contentSize_32() { return &___contentSize_32; }
	inline void set_contentSize_32(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___contentSize_32 = value;
	}

	inline static int32_t get_offset_of_prevAnchoredPosition_33() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___prevAnchoredPosition_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_prevAnchoredPosition_33() const { return ___prevAnchoredPosition_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_prevAnchoredPosition_33() { return &___prevAnchoredPosition_33; }
	inline void set_prevAnchoredPosition_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___prevAnchoredPosition_33 = value;
	}

	inline static int32_t get_offset_of_velocity_34() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___velocity_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_velocity_34() const { return ___velocity_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_velocity_34() { return &___velocity_34; }
	inline void set_velocity_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___velocity_34 = value;
	}

	inline static int32_t get_offset_of_releaseDirection_35() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___releaseDirection_35)); }
	inline int32_t get_releaseDirection_35() const { return ___releaseDirection_35; }
	inline int32_t* get_address_of_releaseDirection_35() { return &___releaseDirection_35; }
	inline void set_releaseDirection_35(int32_t value)
	{
		___releaseDirection_35 = value;
	}

	inline static int32_t get_offset_of_releaseSpeed_36() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___releaseSpeed_36)); }
	inline float get_releaseSpeed_36() const { return ___releaseSpeed_36; }
	inline float* get_address_of_releaseSpeed_36() { return &___releaseSpeed_36; }
	inline void set_releaseSpeed_36(float value)
	{
		___releaseSpeed_36 = value;
	}

	inline static int32_t get_offset_of_isDragging_37() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___isDragging_37)); }
	inline bool get_isDragging_37() const { return ___isDragging_37; }
	inline bool* get_address_of_isDragging_37() { return &___isDragging_37; }
	inline void set_isDragging_37(bool value)
	{
		___isDragging_37 = value;
	}

	inline static int32_t get_offset_of_isPressing_38() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___isPressing_38)); }
	inline bool get_isPressing_38() const { return ___isPressing_38; }
	inline bool* get_address_of_isPressing_38() { return &___isPressing_38; }
	inline void set_isPressing_38(bool value)
	{
		___isPressing_38 = value;
	}

	inline static int32_t get_offset_of_isSelected_39() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___isSelected_39)); }
	inline bool get_isSelected_39() const { return ___isSelected_39; }
	inline bool* get_address_of_isSelected_39() { return &___isSelected_39; }
	inline void set_isSelected_39(bool value)
	{
		___isSelected_39 = value;
	}

	inline static int32_t get_offset_of_U3CPanelsU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___U3CPanelsU3Ek__BackingField_40)); }
	inline RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* get_U3CPanelsU3Ek__BackingField_40() const { return ___U3CPanelsU3Ek__BackingField_40; }
	inline RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5** get_address_of_U3CPanelsU3Ek__BackingField_40() { return &___U3CPanelsU3Ek__BackingField_40; }
	inline void set_U3CPanelsU3Ek__BackingField_40(RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* value)
	{
		___U3CPanelsU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPanelsU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTogglesU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___U3CTogglesU3Ek__BackingField_41)); }
	inline ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* get_U3CTogglesU3Ek__BackingField_41() const { return ___U3CTogglesU3Ek__BackingField_41; }
	inline ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF** get_address_of_U3CTogglesU3Ek__BackingField_41() { return &___U3CTogglesU3Ek__BackingField_41; }
	inline void set_U3CTogglesU3Ek__BackingField_41(ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* value)
	{
		___U3CTogglesU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTogglesU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSelectedPanelU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___U3CSelectedPanelU3Ek__BackingField_42)); }
	inline int32_t get_U3CSelectedPanelU3Ek__BackingField_42() const { return ___U3CSelectedPanelU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CSelectedPanelU3Ek__BackingField_42() { return &___U3CSelectedPanelU3Ek__BackingField_42; }
	inline void set_U3CSelectedPanelU3Ek__BackingField_42(int32_t value)
	{
		___U3CSelectedPanelU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CCenteredPanelU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA, ___U3CCenteredPanelU3Ek__BackingField_43)); }
	inline int32_t get_U3CCenteredPanelU3Ek__BackingField_43() const { return ___U3CCenteredPanelU3Ek__BackingField_43; }
	inline int32_t* get_address_of_U3CCenteredPanelU3Ek__BackingField_43() { return &___U3CCenteredPanelU3Ek__BackingField_43; }
	inline void set_U3CCenteredPanelU3Ek__BackingField_43(int32_t value)
	{
		___U3CCenteredPanelU3Ek__BackingField_43 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.Fade
struct Fade_tA6AA05B89AC9D2307C16DDB82251E9B6F75430F0  : public TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.RecolourBlue
struct RecolourBlue_tAF2F822A6486B62EF0124CEFD1EC07ECEC830269  : public TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.RecolourGreen
struct RecolourGreen_t9B2E5E0D60041B0999726A77E135C08AC76FC76F  : public TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.RecolourRed
struct RecolourRed_tE73B1431675E6BEAE61D01126C676FC45647D8BE  : public TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.RotateX
struct RotateX_t4930218BFFCA48EE2A28318181B7E5F72B30D590  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.RotateY
struct RotateY_t8103D24DF5F2BBF87C6F1BF50A244F305855924A  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.RotateZ
struct RotateZ_t8319C993685E896D0930840D952A546B4C76C634  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.Scale
struct Scale_t9C4DFBC31F440E9F3D8CDBA60CA718617BFB72B0  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.ScaleX
struct ScaleX_t90FD01D2D5A1951122DDFC87302DADEE5AFB5CD6  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.ScaleY
struct ScaleY_tC67C959F8D79C6B7D8A448B289779C652558296A  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// DanielLochner.Assets.SimpleScrollSnap.ScaleZ
struct ScaleZ_t0BC5B1F834A939EDA8B803C278777E4944A7CDB1  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_40;

public:
	inline static int32_t get_offset_of_m_Content_4() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Content_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Content_4() const { return ___m_Content_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Content_4() { return &___m_Content_4; }
	inline void set_m_Content_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Content_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Content_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Horizontal_5() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Horizontal_5)); }
	inline bool get_m_Horizontal_5() const { return ___m_Horizontal_5; }
	inline bool* get_address_of_m_Horizontal_5() { return &___m_Horizontal_5; }
	inline void set_m_Horizontal_5(bool value)
	{
		___m_Horizontal_5 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_6() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Vertical_6)); }
	inline bool get_m_Vertical_6() const { return ___m_Vertical_6; }
	inline bool* get_address_of_m_Vertical_6() { return &___m_Vertical_6; }
	inline void set_m_Vertical_6(bool value)
	{
		___m_Vertical_6 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_7() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_MovementType_7)); }
	inline int32_t get_m_MovementType_7() const { return ___m_MovementType_7; }
	inline int32_t* get_address_of_m_MovementType_7() { return &___m_MovementType_7; }
	inline void set_m_MovementType_7(int32_t value)
	{
		___m_MovementType_7 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_8() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Elasticity_8)); }
	inline float get_m_Elasticity_8() const { return ___m_Elasticity_8; }
	inline float* get_address_of_m_Elasticity_8() { return &___m_Elasticity_8; }
	inline void set_m_Elasticity_8(float value)
	{
		___m_Elasticity_8 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_9() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Inertia_9)); }
	inline bool get_m_Inertia_9() const { return ___m_Inertia_9; }
	inline bool* get_address_of_m_Inertia_9() { return &___m_Inertia_9; }
	inline void set_m_Inertia_9(bool value)
	{
		___m_Inertia_9 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_10() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_DecelerationRate_10)); }
	inline float get_m_DecelerationRate_10() const { return ___m_DecelerationRate_10; }
	inline float* get_address_of_m_DecelerationRate_10() { return &___m_DecelerationRate_10; }
	inline void set_m_DecelerationRate_10(float value)
	{
		___m_DecelerationRate_10 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_11() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ScrollSensitivity_11)); }
	inline float get_m_ScrollSensitivity_11() const { return ___m_ScrollSensitivity_11; }
	inline float* get_address_of_m_ScrollSensitivity_11() { return &___m_ScrollSensitivity_11; }
	inline void set_m_ScrollSensitivity_11(float value)
	{
		___m_ScrollSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_12() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Viewport_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Viewport_12() const { return ___m_Viewport_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Viewport_12() { return &___m_Viewport_12; }
	inline void set_m_Viewport_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Viewport_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Viewport_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_13() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbar_13)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_HorizontalScrollbar_13() const { return ___m_HorizontalScrollbar_13; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_HorizontalScrollbar_13() { return &___m_HorizontalScrollbar_13; }
	inline void set_m_HorizontalScrollbar_13(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_HorizontalScrollbar_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbar_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_14() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbar_14)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_VerticalScrollbar_14() const { return ___m_VerticalScrollbar_14; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_VerticalScrollbar_14() { return &___m_VerticalScrollbar_14; }
	inline void set_m_VerticalScrollbar_14(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_VerticalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_15() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarVisibility_15)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_15() const { return ___m_HorizontalScrollbarVisibility_15; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_15() { return &___m_HorizontalScrollbarVisibility_15; }
	inline void set_m_HorizontalScrollbarVisibility_15(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_16() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarVisibility_16)); }
	inline int32_t get_m_VerticalScrollbarVisibility_16() const { return ___m_VerticalScrollbarVisibility_16; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_16() { return &___m_VerticalScrollbarVisibility_16; }
	inline void set_m_VerticalScrollbarVisibility_16(int32_t value)
	{
		___m_VerticalScrollbarVisibility_16 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_17() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarSpacing_17)); }
	inline float get_m_HorizontalScrollbarSpacing_17() const { return ___m_HorizontalScrollbarSpacing_17; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_17() { return &___m_HorizontalScrollbarSpacing_17; }
	inline void set_m_HorizontalScrollbarSpacing_17(float value)
	{
		___m_HorizontalScrollbarSpacing_17 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_18() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarSpacing_18)); }
	inline float get_m_VerticalScrollbarSpacing_18() const { return ___m_VerticalScrollbarSpacing_18; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_18() { return &___m_VerticalScrollbarSpacing_18; }
	inline void set_m_VerticalScrollbarSpacing_18(float value)
	{
		___m_VerticalScrollbarSpacing_18 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_19() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_OnValueChanged_19)); }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * get_m_OnValueChanged_19() const { return ___m_OnValueChanged_19; }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E ** get_address_of_m_OnValueChanged_19() { return &___m_OnValueChanged_19; }
	inline void set_m_OnValueChanged_19(ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * value)
	{
		___m_OnValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_20() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PointerStartLocalCursor_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PointerStartLocalCursor_20() const { return ___m_PointerStartLocalCursor_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PointerStartLocalCursor_20() { return &___m_PointerStartLocalCursor_20; }
	inline void set_m_PointerStartLocalCursor_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PointerStartLocalCursor_20 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_21() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentStartPosition_21)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ContentStartPosition_21() const { return ___m_ContentStartPosition_21; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ContentStartPosition_21() { return &___m_ContentStartPosition_21; }
	inline void set_m_ContentStartPosition_21(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ContentStartPosition_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_22() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewRect_22)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ViewRect_22() const { return ___m_ViewRect_22; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ViewRect_22() { return &___m_ViewRect_22; }
	inline void set_m_ViewRect_22(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ViewRect_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ViewRect_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_23() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentBounds_23)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ContentBounds_23() const { return ___m_ContentBounds_23; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ContentBounds_23() { return &___m_ContentBounds_23; }
	inline void set_m_ContentBounds_23(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ContentBounds_23 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_24() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewBounds_24)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ViewBounds_24() const { return ___m_ViewBounds_24; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ViewBounds_24() { return &___m_ViewBounds_24; }
	inline void set_m_ViewBounds_24(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ViewBounds_24 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_25() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Velocity_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Velocity_25() const { return ___m_Velocity_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Velocity_25() { return &___m_Velocity_25; }
	inline void set_m_Velocity_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Velocity_25 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_26() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Dragging_26)); }
	inline bool get_m_Dragging_26() const { return ___m_Dragging_26; }
	inline bool* get_address_of_m_Dragging_26() { return &___m_Dragging_26; }
	inline void set_m_Dragging_26(bool value)
	{
		___m_Dragging_26 = value;
	}

	inline static int32_t get_offset_of_m_Scrolling_27() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Scrolling_27)); }
	inline bool get_m_Scrolling_27() const { return ___m_Scrolling_27; }
	inline bool* get_address_of_m_Scrolling_27() { return &___m_Scrolling_27; }
	inline void set_m_Scrolling_27(bool value)
	{
		___m_Scrolling_27 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_28() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevPosition_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PrevPosition_28() const { return ___m_PrevPosition_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PrevPosition_28() { return &___m_PrevPosition_28; }
	inline void set_m_PrevPosition_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PrevPosition_28 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_29() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevContentBounds_29)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevContentBounds_29() const { return ___m_PrevContentBounds_29; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevContentBounds_29() { return &___m_PrevContentBounds_29; }
	inline void set_m_PrevContentBounds_29(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevContentBounds_29 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_30() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevViewBounds_30)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevViewBounds_30() const { return ___m_PrevViewBounds_30; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevViewBounds_30() { return &___m_PrevViewBounds_30; }
	inline void set_m_PrevViewBounds_30(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevViewBounds_30 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_31() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HasRebuiltLayout_31)); }
	inline bool get_m_HasRebuiltLayout_31() const { return ___m_HasRebuiltLayout_31; }
	inline bool* get_address_of_m_HasRebuiltLayout_31() { return &___m_HasRebuiltLayout_31; }
	inline void set_m_HasRebuiltLayout_31(bool value)
	{
		___m_HasRebuiltLayout_31 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_32() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderExpand_32)); }
	inline bool get_m_HSliderExpand_32() const { return ___m_HSliderExpand_32; }
	inline bool* get_address_of_m_HSliderExpand_32() { return &___m_HSliderExpand_32; }
	inline void set_m_HSliderExpand_32(bool value)
	{
		___m_HSliderExpand_32 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_33() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderExpand_33)); }
	inline bool get_m_VSliderExpand_33() const { return ___m_VSliderExpand_33; }
	inline bool* get_address_of_m_VSliderExpand_33() { return &___m_VSliderExpand_33; }
	inline void set_m_VSliderExpand_33(bool value)
	{
		___m_VSliderExpand_33 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_34() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderHeight_34)); }
	inline float get_m_HSliderHeight_34() const { return ___m_HSliderHeight_34; }
	inline float* get_address_of_m_HSliderHeight_34() { return &___m_HSliderHeight_34; }
	inline void set_m_HSliderHeight_34(float value)
	{
		___m_HSliderHeight_34 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_35() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderWidth_35)); }
	inline float get_m_VSliderWidth_35() const { return ___m_VSliderWidth_35; }
	inline float* get_address_of_m_VSliderWidth_35() { return &___m_VSliderWidth_35; }
	inline void set_m_VSliderWidth_35(float value)
	{
		___m_VSliderWidth_35 = value;
	}

	inline static int32_t get_offset_of_m_Rect_36() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Rect_36)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_36() const { return ___m_Rect_36; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_36() { return &___m_Rect_36; }
	inline void set_m_Rect_36(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_37() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarRect_37)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HorizontalScrollbarRect_37() const { return ___m_HorizontalScrollbarRect_37; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HorizontalScrollbarRect_37() { return &___m_HorizontalScrollbarRect_37; }
	inline void set_m_HorizontalScrollbarRect_37(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HorizontalScrollbarRect_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbarRect_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_38() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarRect_38)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_VerticalScrollbarRect_38() const { return ___m_VerticalScrollbarRect_38; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_VerticalScrollbarRect_38() { return &___m_VerticalScrollbarRect_38; }
	inline void set_m_VerticalScrollbarRect_38(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_VerticalScrollbarRect_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarRect_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_39() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Tracker_39)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_39() const { return ___m_Tracker_39; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_39() { return &___m_Tracker_39; }
	inline void set_m_Tracker_39(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_39 = value;
	}

	inline static int32_t get_offset_of_m_Corners_40() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Corners_40)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_40() const { return ___m_Corners_40; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_40() { return &___m_Corners_40; }
	inline void set_m_Corners_40(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_40), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_tECEEA56321275CFF8DECB929786CE364F743B07D * ___m_Toggles_5;

public:
	inline static int32_t get_offset_of_m_AllowSwitchOff_4() { return static_cast<int32_t>(offsetof(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95, ___m_AllowSwitchOff_4)); }
	inline bool get_m_AllowSwitchOff_4() const { return ___m_AllowSwitchOff_4; }
	inline bool* get_address_of_m_AllowSwitchOff_4() { return &___m_AllowSwitchOff_4; }
	inline void set_m_AllowSwitchOff_4(bool value)
	{
		___m_AllowSwitchOff_4 = value;
	}

	inline static int32_t get_offset_of_m_Toggles_5() { return static_cast<int32_t>(offsetof(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95, ___m_Toggles_5)); }
	inline List_1_tECEEA56321275CFF8DECB929786CE364F743B07D * get_m_Toggles_5() const { return ___m_Toggles_5; }
	inline List_1_tECEEA56321275CFF8DECB929786CE364F743B07D ** get_address_of_m_Toggles_5() { return &___m_Toggles_5; }
	inline void set_m_Toggles_5(List_1_tECEEA56321275CFF8DECB929786CE364F743B07D * value)
	{
		___m_Toggles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Toggles_5), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.TranslateZ
struct TranslateZ_t22F9BC427D52DA03ACAEAA1196684B1B1395E5D1  : public TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94
{
public:

public:
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// NestedScrollRect
struct NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33  : public ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA
{
public:
	// System.Boolean NestedScrollRect::routeToParent
	bool ___routeToParent_41;

public:
	inline static int32_t get_offset_of_routeToParent_41() { return static_cast<int32_t>(offsetof(NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33, ___routeToParent_41)); }
	inline bool get_routeToParent_41() const { return ___routeToParent_41; }
	inline bool* get_address_of_routeToParent_41() { return &___routeToParent_41; }
	inline void set_routeToParent_41(bool value)
	{
		___routeToParent_41 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * m_Items[1];

public:
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * m_Items[1];

public:
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffectBase_1__ctor_m5F43EA3C038AEB0E58CBC2A7B5AA2BD96294B454_gshared (TransitionEffectBase_1_tA5495EB6748946693878A48872192398346C223B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NestedScrollRect::DoForParents<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_DoForParents_TisRuntimeObject_mF2F471D212933B70A23BECC795D650D8315BF119_gshared (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce<System.Boolean>(UnityEngine.Events.UnityEvent`1<!!0>,UnityEngine.Events.UnityAction`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventUtility_AddListenerOnce_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16CC198B5DE963D526B10ECF704C70789E92D927_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * ___unityEvent0, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Single>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m376DB22812C1CEFFA851F4FAD15FB9B5A662EF16_gshared (UnityEvent_2_tDD3ECC090CCD9EA3AFA04E9A168C9B1CF7097C8E * __this, RuntimeObject * ___arg00, float ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87_gshared (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m4C680B678002B8E000A2D5062B9C135ADEDBEAB1_gshared (UnityEvent_2_tDD3ECC090CCD9EA3AFA04E9A168C9B1CF7097C8E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67_gshared (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.CanvasGroup>::.ctor()
inline void TransitionEffectBase_1__ctor_m2C46F0CA18E218A13C10A65A19C8C387CD6E2804 (TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375 * __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEffectBase_1_tFFF21D806AB709D062F8E0014F142A4D5DEF2375 *, const RuntimeMethod*))TransitionEffectBase_1__ctor_m5F43EA3C038AEB0E58CBC2A7B5AA2BD96294B454_gshared)(__this, method);
}
// System.Void NestedScrollRect/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mA9245CA93DE640746FD550905D4671B20FBE1492 (U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m217C1CD6D6D22313EABEFB37EFC0AE1F2420690F (Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IInitializePotentialDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m3607B633627D0A0168DC4A2E1BE6608B1F865CE9 (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 *, Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56 *, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mF2F471D212933B70A23BECC795D650D8315BF119_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnInitializePotentialDrag_m442FF00867FECD77D57B3ADD27ABB4736C4A783F (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void NestedScrollRect/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mCB3A9E4C9139A8270169C13A09373304BF4BEB3E (U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.EventSystems.IDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m379DFF140072810D510430AA632E5A0674422715 (Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_m23BACA35F48C30B2F69A879A83BDA0ACB835F80C (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D * ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 *, Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D *, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mF2F471D212933B70A23BECC795D650D8315BF119_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnDrag_mAE4C9A8E16CE9E40F1F50F6CC9DBAC5107327C24 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void NestedScrollRect/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m6E9CB49224E2E0E4FD0D661FF61EDAAE000643D0 (U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_m3C85C37B4136F69E47ACFAF287D05FC4104E5C8A_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_mC44745C3E8AC6BF41C3C2D3FA0AEDED3DE96B4EA_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.EventSystems.IBeginDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m241CB11D617066C0DFB6D1E207B5739E3DF42AAB (Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IBeginDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_m3E86EF9F39F7245C98FFC1D4AB1E870599DAE48B (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 *, Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1 *, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mF2F471D212933B70A23BECC795D650D8315BF119_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnBeginDrag_mFD8547604ADE7E19C1CB247BE3C3D30EDBF6F170 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void NestedScrollRect/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mBA379345F78CCADF142579334D1588009A7AD3AC (U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.EventSystems.IEndDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE179B305F1005B3D7DE31902C79E6CB199F7408F (Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IEndDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mA7C84FECB1E22FAE306947250EDD2D77FD67BDDB (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 *, Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0 *, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mF2F471D212933B70A23BECC795D650D8315BF119_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnEndDrag_m655F48C5CD01CFC9802144038A635B6F663FE828 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect__ctor_mB4B056D158F001158736D43FF95A79C4749F81EB (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.UI.Graphic>::.ctor()
inline void TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E (TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D * __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEffectBase_1_tC1CB88E923D8DEB34B48A540AD29E79647EB280D *, const RuntimeMethod*))TransitionEffectBase_1__ctor_m5F43EA3C038AEB0E58CBC2A7B5AA2BD96294B454_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.RectTransform>::.ctor()
inline void TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD (TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94 * __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEffectBase_1_t79B5562DEC2FD5FDA4DA5403A70FEB5929A07C94 *, const RuntimeMethod*))TransitionEffectBase_1__ctor_m5F43EA3C038AEB0E58CBC2A7B5AA2BD96294B454_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.UI.ScrollRect DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ScrollRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ScrollRect_get_content_m80081CD9D9D066BB138099E6495390B37071C3B0_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ScrollRect_get_viewport_m5F19B84F9A457DB423884801E0D58F53FE371382_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * Component_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_m2977BE77C6B13F9EB2FF76FC7DE0B24108BB6C4D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_NumberOfPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_m6CBDADD5F61163917B37C922FA6F42170D68E1D9_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ValidConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_ValidConfig_mC80991631A62982B73F38D14D37262951250AC0A (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Setup_m3E3510726881461F1A4B94B8B9FF4386775B1D5E (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleOcclusionCulling_m46BFA0EDB073FF36255E0E7F991C8EC5E69FFA01 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___forceUpdate0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSelectingAndSnapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSelectingAndSnapping_m3FBE8197988C1D59804E4137B1FA2BDF86F380DE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleInfiniteScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleInfiniteScrolling_m3F3FB55F7F07DF5BCC4F49679380E3CAA72AB57F (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___forceUpdate0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleTransitionEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleTransitionEffects_m598DD41E6E3742F3ED4A79E18781429273364C7C (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSwipeGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSwipeGestures_m632A347079CB47AFF043DF297E16BAB3865A2337 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GetVelocity_mC10F4052E03C80A0E14D1E51630EEFE3A5ED3CD8 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Events.UnityEventBase::GetPersistentEventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityEventBase_GetPersistentEventCount_mE56E380D74081F0CB5AAAE2628A67719873B97A9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetNearestPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_GetNearestPanel_m9F071790BD0284CC585151DB78668D291320DD9D (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
inline void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530 (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_inertia_m9CE7BE08CEB308DC8B9335436B901D557B4E6718_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_horizontal_m45564FC7DD17DE132CCC1A843C6D83A9635C3BB4_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_vertical_m25BA9647871AD3CADF2A26CB938BE5418A13C22E_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Viewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Panels(UnityEngine.RectTransform[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Panels_m4891D7CE39044D5E50FD80BFD3E3AEB8B573883D_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* ___value0, const RuntimeMethod* method);
// UnityEngine.RectTransform[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Panels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_movementType_m63E3C04ECBDA708AF2341564DB987227D32075CC_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_CenteredPanel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_CenteredPanel_m0319A63D6715A64CD0E9A29B926A7DA3107D59AF_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SelectedPanel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SelectedPanel_mF0404B61F0DA045CB5AF0C835F0AE32E4ADB9EC0_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce(UnityEngine.Events.UnityEvent,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventUtility_AddListenerOnce_mC3C0E006DDC60841DF8E57970D76F314FD1F4A17 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___unityEvent0, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Toggle>()
inline ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* Component_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m55C92A8E7F68A234A2CD98627CDAD19FF502D12E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Toggles(UnityEngine.UI.Toggle[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Toggles_mC8E601AC938E9B8D241BEEF882657539D48B483B_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Toggles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* SimpleScrollSnap_get_Toggles_m77F892973EB51C696EAC13D98C5926DE4BB08A43_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::SetIsOnWithoutNotify(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_SetIsOnWithoutNotify_mD07469424A970A7894F38F2AE3A84CC465AE7952 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass150_0__ctor_m62FBC782260757259149BDAEE82A4B059623C6A3 (U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce<System.Boolean>(UnityEngine.Events.UnityEvent`1<!!0>,UnityEngine.Events.UnityAction`1<!!0>)
inline void UnityEventUtility_AddListenerOnce_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16CC198B5DE963D526B10ECF704C70789E92D927 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * ___unityEvent0, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))UnityEventUtility_AddListenerOnce_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16CC198B5DE963D526B10ECF704C70789E92D927_gshared)(___unityEvent0, ___call1, method);
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SnapToPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SnapToPanel_m5C044044F290314DF7F83CAC59320C3E49741E59 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ScrollRect_get_velocity_mF5519EB702F5A1BCBDA6EE50CE92EEFA3398BDC6_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SelectPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SelectPanel_m2ACE747E8995712B44568CB606D430FE714D4F19 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetDisplacementFromCenter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m39D61B692E7260E4FAB22A67E15961F0593DBB08 (UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arg00, float ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, float, const RuntimeMethod*))UnityEvent_2_Invoke_m376DB22812C1CEFFA851F4FAD15FB9B5A662EF16_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___panelNumber0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToNextPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToNextPanel_m579457C7130CCC02C3719E471700559890D09147 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPreviousPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPreviousPanel_m27C0C8E6EF873664B4A89FD4887BE5D94FD17563 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_CenteredPanel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SelectedPanel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SelectedPanel_m0D82A2F00F925D099F54AAAD26BBDF0AF5E89B94_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87 (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 *, int32_t, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Add(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Add_mAF31142ECC103BDAF9F8DFCCCFCE6AD7B9FE5ABC (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel0, int32_t ___index1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Remove_mF3A79F3EAA5BEE5AF3685E784F67560809810A7A (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mBFD6E1F7B1716EB3113CDEA310FA42D8968E16AF (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mBB0DD9B2E091868E491062EA18ED08B93C82EE11 (Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * __this, float ___m0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>::.ctor()
inline void UnityEvent_2__ctor_m151E9574F9A4E7DC0EDB30507168BD79321F5F13 (UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 *, const RuntimeMethod*))UnityEvent_2__ctor_m4C680B678002B8E000A2D5062B9C135ADEDBEAB1_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, const RuntimeMethod*))UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67 (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 *, const RuntimeMethod*))UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.Fade::OnTransition(UnityEngine.CanvasGroup,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade_OnTransition_m751D40C3FFC0C3061A87E4E06DD01E8B8D69C1B0 (Fade_tA6AA05B89AC9D2307C16DDB82251E9B6F75430F0 * __this, CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup0, float ___alpha1, const RuntimeMethod* method)
{
	{
		// canvasGroup.alpha = alpha;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = ___canvasGroup0;
		float L_1 = ___alpha1;
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.Fade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade__ctor_m26D4BF9A2E0F7204A0AECB365A25B7CC6D5A705E (Fade_tA6AA05B89AC9D2307C16DDB82251E9B6F75430F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m2C46F0CA18E218A13C10A65A19C8C387CD6E2804_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m2C46F0CA18E218A13C10A65A19C8C387CD6E2804(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m2C46F0CA18E218A13C10A65A19C8C387CD6E2804_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NestedScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnInitializePotentialDrag_m48322D66BA954BF9967DC56784DD9942ADFEF0E4 (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m217C1CD6D6D22313EABEFB37EFC0AE1F2420690F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m3607B633627D0A0168DC4A2E1BE6608B1F865CE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_m929E6567D6D0A898C3CA0EB06A5127E7DD72C46D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * L_0 = (U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mA9245CA93DE640746FD550905D4671B20FBE1492(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * L_1 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		L_1->set_eventData_0(L_2);
		// DoForParents<IInitializePotentialDragHandler>((parent) => { parent.OnInitializePotentialDrag(eventData); });
		U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * L_3 = V_0;
		Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56 * L_4 = (Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56 *)il2cpp_codegen_object_new(Action_1_t7E3385F308D75445DB85FDFC0578516B504C5A56_il2cpp_TypeInfo_var);
		Action_1__ctor_m217C1CD6D6D22313EABEFB37EFC0AE1F2420690F(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_m929E6567D6D0A898C3CA0EB06A5127E7DD72C46D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m217C1CD6D6D22313EABEFB37EFC0AE1F2420690F_RuntimeMethod_var);
		NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m3607B633627D0A0168DC4A2E1BE6608B1F865CE9(__this, L_4, /*hidden argument*/NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m3607B633627D0A0168DC4A2E1BE6608B1F865CE9_RuntimeMethod_var);
		// base.OnInitializePotentialDrag(eventData);
		U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * L_5 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = L_5->get_eventData_0();
		ScrollRect_OnInitializePotentialDrag_m442FF00867FECD77D57B3ADD27ABB4736C4A783F(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NestedScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnDrag_m30D97E06CD288C69F75E0C9F062439E9F86E576C (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m379DFF140072810D510430AA632E5A0674422715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_m23BACA35F48C30B2F69A879A83BDA0ACB835F80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_m5ED3E70C6469D1C8435FF0FB574A98A2E02A9E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * L_0 = (U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mCB3A9E4C9139A8270169C13A09373304BF4BEB3E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * L_1 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		L_1->set_eventData_0(L_2);
		// if (routeToParent)
		bool L_3 = __this->get_routeToParent_41();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// DoForParents<IDragHandler>((parent) => { parent.OnDrag(eventData); });
		U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * L_4 = V_0;
		Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D * L_5 = (Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D *)il2cpp_codegen_object_new(Action_1_t4B59FF0F3995F47F8F4806173020AFD90FC71D9D_il2cpp_TypeInfo_var);
		Action_1__ctor_m379DFF140072810D510430AA632E5A0674422715(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_m5ED3E70C6469D1C8435FF0FB574A98A2E02A9E4C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m379DFF140072810D510430AA632E5A0674422715_RuntimeMethod_var);
		NestedScrollRect_DoForParents_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_m23BACA35F48C30B2F69A879A83BDA0ACB835F80C(__this, L_5, /*hidden argument*/NestedScrollRect_DoForParents_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_m23BACA35F48C30B2F69A879A83BDA0ACB835F80C_RuntimeMethod_var);
		return;
	}

IL_0028:
	{
		// base.OnDrag(eventData);
		U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * L_6 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = L_6->get_eventData_0();
		ScrollRect_OnDrag_mAE4C9A8E16CE9E40F1F50F6CC9DBAC5107327C24(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NestedScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnBeginDrag_mF1F57BE5564C4B597322CACBAB0164476D5508D7 (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m241CB11D617066C0DFB6D1E207B5739E3DF42AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_m3E86EF9F39F7245C98FFC1D4AB1E870599DAE48B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m858E600CB2002B9A67F5DDD2A36BC37596348475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_0 = (U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m6E9CB49224E2E0E4FD0D661FF61EDAAE000643D0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_1 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		L_1->set_eventData_0(L_2);
		// if (!horizontal && Math.Abs(eventData.delta.x) > Math.Abs(eventData.delta.y))
		bool L_3;
		L_3 = ScrollRect_get_horizontal_m3C85C37B4136F69E47ACFAF287D05FC4104E5C8A_inline(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_4 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = L_4->get_eventData_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = fabsf(L_7);
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_9 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_10 = L_9->get_eventData_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_1();
		float L_13;
		L_13 = fabsf(L_12);
		if ((!(((float)L_8) > ((float)L_13))))
		{
			goto IL_004a;
		}
	}
	{
		// routeToParent = true;
		__this->set_routeToParent_41((bool)1);
		goto IL_008e;
	}

IL_004a:
	{
		// else if (!vertical && Math.Abs(eventData.delta.x) < Math.Abs(eventData.delta.y))
		bool L_14;
		L_14 = ScrollRect_get_vertical_mC44745C3E8AC6BF41C3C2D3FA0AEDED3DE96B4EA_inline(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0087;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_15 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_16 = L_15->get_eventData_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(L_18);
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_20 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_21 = L_20->get_eventData_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_1();
		float L_24;
		L_24 = fabsf(L_23);
		if ((!(((float)L_19) < ((float)L_24))))
		{
			goto IL_0087;
		}
	}
	{
		// routeToParent = true;
		__this->set_routeToParent_41((bool)1);
		goto IL_008e;
	}

IL_0087:
	{
		// routeToParent = false;
		__this->set_routeToParent_41((bool)0);
	}

IL_008e:
	{
		// if (routeToParent)
		bool L_25 = __this->get_routeToParent_41();
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		// DoForParents<IBeginDragHandler>((parent) => { parent.OnBeginDrag(eventData); });
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_26 = V_0;
		Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1 * L_27 = (Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1 *)il2cpp_codegen_object_new(Action_1_t75EF3F94745C76D979AF53A67648B031CC79FAE1_il2cpp_TypeInfo_var);
		Action_1__ctor_m241CB11D617066C0DFB6D1E207B5739E3DF42AAB(L_27, L_26, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m858E600CB2002B9A67F5DDD2A36BC37596348475_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m241CB11D617066C0DFB6D1E207B5739E3DF42AAB_RuntimeMethod_var);
		NestedScrollRect_DoForParents_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_m3E86EF9F39F7245C98FFC1D4AB1E870599DAE48B(__this, L_27, /*hidden argument*/NestedScrollRect_DoForParents_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_m3E86EF9F39F7245C98FFC1D4AB1E870599DAE48B_RuntimeMethod_var);
		return;
	}

IL_00a9:
	{
		// base.OnBeginDrag(eventData);
		U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * L_28 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_29 = L_28->get_eventData_0();
		ScrollRect_OnBeginDrag_mFD8547604ADE7E19C1CB247BE3C3D30EDBF6F170(__this, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NestedScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnEndDrag_m0159CDA40CB4BA5DB133112CC860D46AFB6DEC49 (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE179B305F1005B3D7DE31902C79E6CB199F7408F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mA7C84FECB1E22FAE306947250EDD2D77FD67BDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m1EC5067F27D48CDC5615162D709C7EC9E905FDA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * L_0 = (U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mBA379345F78CCADF142579334D1588009A7AD3AC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * L_1 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		L_1->set_eventData_0(L_2);
		// if (routeToParent)
		bool L_3 = __this->get_routeToParent_41();
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// DoForParents<IEndDragHandler>((parent) => { parent.OnEndDrag(eventData); });
		U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * L_4 = V_0;
		Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0 * L_5 = (Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0 *)il2cpp_codegen_object_new(Action_1_t3928F7EA8AF3E91F7EB685321F2671DF4FDB23A0_il2cpp_TypeInfo_var);
		Action_1__ctor_mE179B305F1005B3D7DE31902C79E6CB199F7408F(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m1EC5067F27D48CDC5615162D709C7EC9E905FDA8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE179B305F1005B3D7DE31902C79E6CB199F7408F_RuntimeMethod_var);
		NestedScrollRect_DoForParents_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mA7C84FECB1E22FAE306947250EDD2D77FD67BDDB(__this, L_5, /*hidden argument*/NestedScrollRect_DoForParents_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mA7C84FECB1E22FAE306947250EDD2D77FD67BDDB_RuntimeMethod_var);
		goto IL_0035;
	}

IL_0029:
	{
		// base.OnEndDrag(eventData);
		U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * L_6 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = L_6->get_eventData_0();
		ScrollRect_OnEndDrag_m655F48C5CD01CFC9802144038A635B6F663FE828(__this, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// routeToParent = false;
		__this->set_routeToParent_41((bool)0);
		// }
		return;
	}
}
// System.Void NestedScrollRect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect__ctor_mC8AE9351C6DF8C1A4A5263CA1E67AF4F6ABB3F8D (NestedScrollRect_t8D417F949766C85F4E73C93711E2195E640C3B33 * __this, const RuntimeMethod* method)
{
	{
		ScrollRect__ctor_mB4B056D158F001158736D43FF95A79C4749F81EB(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourBlue::OnTransition(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourBlue_OnTransition_m52A6573E23679D4692CF3B1E7A2D7498A99C6491 (RecolourBlue_tAF2F822A6486B62EF0124CEFD1EC07ECEC830269 * __this, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic0, float ___blue1, const RuntimeMethod* method)
{
	{
		// graphic.color = new Color(graphic.color.r, graphic.color.g, blue, graphic.color.a);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = ___graphic0;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_1 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.get_r_0();
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_4 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.get_g_1();
		float L_7 = ___blue1;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_8 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), L_3, L_6, L_7, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_11);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourBlue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourBlue__ctor_mCC8B1A1E0DB85C75F464695063A16A40A3AEE20C (RecolourBlue_tAF2F822A6486B62EF0124CEFD1EC07ECEC830269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourGreen::OnTransition(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourGreen_OnTransition_m8C047181FBE3EC68DB0BEC31C01181B8B8640E1C (RecolourGreen_t9B2E5E0D60041B0999726A77E135C08AC76FC76F * __this, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic0, float ___green1, const RuntimeMethod* method)
{
	{
		// graphic.color = new Color(graphic.color.r, green, graphic.color.b, graphic.color.a);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = ___graphic0;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_1 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.get_r_0();
		float L_4 = ___green1;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_5 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.get_b_2();
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_8 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), L_3, L_4, L_7, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_11);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourGreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourGreen__ctor_m3F9A58F2E4294DC20C6DE086F47620AA600E4A68 (RecolourGreen_t9B2E5E0D60041B0999726A77E135C08AC76FC76F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourRed::OnTransition(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourRed_OnTransition_m2C3D2CB5593BF550390149409930B914FAE8E8CE (RecolourRed_tE73B1431675E6BEAE61D01126C676FC45647D8BE * __this, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic0, float ___red1, const RuntimeMethod* method)
{
	{
		// graphic.color = new Color(red, graphic.color.g, graphic.color.b, graphic.color.a);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = ___graphic0;
		float L_1 = ___red1;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_2 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		float L_4 = L_3.get_g_1();
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_5 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.get_b_2();
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_8 = ___graphic0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), L_1, L_4, L_7, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_11);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourRed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourRed__ctor_m15209D21A88F82EBAC7548C808E1B47C15C73AB1 (RecolourRed_tE73B1431675E6BEAE61D01126C676FC45647D8BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m5480FE2731F978F15D6C1EBE75DF848F098B573E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateX::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateX_OnTransition_m1D51343EF141AFBEEA0D6F7F88C2F2E0F635C0AA (RotateX_t4930218BFFCA48EE2A28318181B7E5F72B30D590 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___angle1, const RuntimeMethod* method)
{
	{
		// rectTransform.localRotation = Quaternion.Euler(new Vector3(angle, rectTransform.localEulerAngles.y, rectTransform.localEulerAngles.z));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		float L_1 = ___angle1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_8, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateX__ctor_mA0A45BB404B3C8D72E53DCB509B15F2F86ED11C3 (RotateX_t4930218BFFCA48EE2A28318181B7E5F72B30D590 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateY::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateY_OnTransition_m949ECB028CA28451F70D8989D2728B78AFEF4895 (RotateY_t8103D24DF5F2BBF87C6F1BF50A244F305855924A * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___angle1, const RuntimeMethod* method)
{
	{
		// rectTransform.localRotation = Quaternion.Euler(new Vector3(rectTransform.localEulerAngles.x, angle, rectTransform.localEulerAngles.z));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = ___angle1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_4, L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_8, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateY__ctor_m3ED0B69BDAEA134A68BD92D45F3CC53541E2DC14 (RotateY_t8103D24DF5F2BBF87C6F1BF50A244F305855924A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateZ::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateZ_OnTransition_m29C802DC6F7FE3ED70404D4E0C3B2D5C5D4C7A19 (RotateZ_t8319C993685E896D0930840D952A546B4C76C634 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___angle1, const RuntimeMethod* method)
{
	{
		// rectTransform.localRotation = Quaternion.Euler(new Vector3(rectTransform.localEulerAngles.x, rectTransform.localEulerAngles.y, angle));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = ___angle1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_8, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateZ__ctor_m9C8AC4C5BFCE2EB543D027AACBEE1C43E6761133 (RotateZ_t8319C993685E896D0930840D952A546B4C76C634 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.Scale::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale_OnTransition_mAA0EE79881FEA8BB741B6A27F94DA12DECA84B0C (Scale_t9C4DFBC31F440E9F3D8CDBA60CA718617BFB72B0 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___scale1, const RuntimeMethod* method)
{
	{
		// rectTransform.localScale = Vector3.one * scale;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_2 = ___scale1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.Scale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale__ctor_m2F98759D8BDB76B5BE749EF954F5160DAA193C2B (Scale_t9C4DFBC31F440E9F3D8CDBA60CA718617BFB72B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleX::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleX_OnTransition_mF6513A14E3F4B8198B55E07276DA75430147BEA4 (ScaleX_t90FD01D2D5A1951122DDFC87302DADEE5AFB5CD6 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___scale1, const RuntimeMethod* method)
{
	{
		// rectTransform.localScale = new Vector3(scale, rectTransform.localScale.y, rectTransform.localScale.z);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		float L_1 = ___scale1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleX__ctor_m47221C28044FD0D50610763EBA32C52BAC8143DD (ScaleX_t90FD01D2D5A1951122DDFC87302DADEE5AFB5CD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleY::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleY_OnTransition_m04DE78B038191816E60DD7B6F9B4280E127169FA (ScaleY_tC67C959F8D79C6B7D8A448B289779C652558296A * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___scale1, const RuntimeMethod* method)
{
	{
		// rectTransform.localScale = new Vector3(rectTransform.localScale.x, scale, rectTransform.localScale.z);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = ___scale1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_4, L_7, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleY__ctor_m58A30D331328AE049E4889D9D466B7C15C778AFC (ScaleY_tC67C959F8D79C6B7D8A448B289779C652558296A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleZ::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleZ_OnTransition_m8929250FBC180153267D77AE4718B2EB40CB7071 (ScaleZ_t0BC5B1F834A939EDA8B803C278777E4944A7CDB1 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___scale1, const RuntimeMethod* method)
{
	{
		// rectTransform.localScale = new Vector3(rectTransform.localScale.x, rectTransform.localScale.y, scale);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = ___scale1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleZ__ctor_mB3F19D419849B04DC604D8AD8EE3BFDB6DF6B630 (ScaleZ_t0BC5B1F834A939EDA8B803C278777E4944A7CDB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DanielLochner.Assets.SimpleScrollSnap.MovementType DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_MovementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_MovementType_m29D77026DF993B5C645362FA54A4A093FA2D5CDB (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => movementType;
		int32_t L_0 = __this->get_movementType_4();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_MovementType(DanielLochner.Assets.SimpleScrollSnap.MovementType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_MovementType_m14F7C1467C1BA97A124E874F213088DFF2CDE676 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => movementType = value;
		int32_t L_0 = ___value0;
		__this->set_movementType_4(L_0);
		return;
	}
}
// DanielLochner.Assets.SimpleScrollSnap.MovementAxis DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_MovementAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_MovementAxis_m0CBF6D199AD4AA3EA3D14133DC168CB273EB408B (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => movementAxis;
		int32_t L_0 = __this->get_movementAxis_5();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_MovementAxis(DanielLochner.Assets.SimpleScrollSnap.MovementAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_MovementAxis_m1A6587ED7EB577F48F32A0FE526AFB49B169CABA (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => movementAxis = value;
		int32_t L_0 = ___value0;
		__this->set_movementAxis_5(L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseAutomaticLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseAutomaticLayout_m03CF9DD9888883A71661B42696C0EABFD9937193 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => useAutomaticLayout;
		bool L_0 = __this->get_useAutomaticLayout_6();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseAutomaticLayout(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseAutomaticLayout_mBB61BE9A43C47BBBA6AEC0DAC25314DBB584DFA0 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useAutomaticLayout = value;
		bool L_0 = ___value0;
		__this->set_useAutomaticLayout_6(L_0);
		return;
	}
}
// DanielLochner.Assets.SimpleScrollSnap.SizeControl DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SizeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SizeControl_mFBF421A8460C42EAC90F6E0461F3749303F46C29 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => sizeControl;
		int32_t L_0 = __this->get_sizeControl_8();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SizeControl(DanielLochner.Assets.SimpleScrollSnap.SizeControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SizeControl_mB793A399A38D596C49F67674B2728EDABE697271 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => sizeControl = value;
		int32_t L_0 = ___value0;
		__this->set_sizeControl_8(L_0);
		return;
	}
}
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleScrollSnap_get_Size_m212FD8249DC777A1B47ECD5A43C939A8AFDD30B9 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_size_9();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Size_m079587E2223DC4F03EEB53E4E73A2146C5A8EC01 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set => size = value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_size_9(L_0);
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_AutomaticLayoutSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_AutomaticLayoutSpacing_m8B8E25264C373E27B7C3ECF56D6B8AAA562D8C92 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => automaticLayoutSpacing;
		float L_0 = __this->get_automaticLayoutSpacing_7();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_AutomaticLayoutSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_AutomaticLayoutSpacing_m6AF817364C6F093B282C5434C83C0D47422A846D (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => automaticLayoutSpacing = value;
		float L_0 = ___value0;
		__this->set_automaticLayoutSpacing_7(L_0);
		return;
	}
}
// DanielLochner.Assets.Margins DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_AutomaticLayoutMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * SimpleScrollSnap_get_AutomaticLayoutMargins_m4596C2CC6ED61FC9E16E93CEBF7E7AA49C77F90A (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => automaticLayoutMargins;
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_0 = __this->get_automaticLayoutMargins_10();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_AutomaticLayoutMargins(DanielLochner.Assets.Margins)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_AutomaticLayoutMargins_mA83B44BA563BBE325E85B14DAD78506686CAE959 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * ___value0, const RuntimeMethod* method)
{
	{
		// set => automaticLayoutMargins = value;
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_0 = ___value0;
		__this->set_automaticLayoutMargins_10(L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseInfiniteScrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseInfiniteScrolling_m32D82E86E426E463F7DFDA31EFB2464BCE2AA541 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => useInfiniteScrolling;
		bool L_0 = __this->get_useInfiniteScrolling_11();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseInfiniteScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseInfiniteScrolling_m174EB13D5BC96D6981F34A1028CF5F8DE67777E1 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useInfiniteScrolling = value;
		bool L_0 = ___value0;
		__this->set_useInfiniteScrolling_11(L_0);
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_InfiniteScrollingSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_InfiniteScrollingSpacing_mA374B0DD296CC27B45C9FEB8522E6BEA86D5E2FE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => infiniteScrollingSpacing;
		float L_0 = __this->get_infiniteScrollingSpacing_12();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_InfiniteScrollingSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_InfiniteScrollingSpacing_m99BE547B50B82E0D6104BA921BF04B2626D80DFB (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => infiniteScrollingSpacing = value;
		float L_0 = ___value0;
		__this->set_infiniteScrollingSpacing_12(L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseOcclusionCulling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseOcclusionCulling_mB7467FD9D37174B0445C9694597BA81EF6704C76 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => useOcclusionCulling;
		bool L_0 = __this->get_useOcclusionCulling_13();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseOcclusionCulling_mDE42E6A7E5046BD86DB95B796A2969E234EE0913 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useOcclusionCulling = value;
		bool L_0 = ___value0;
		__this->set_useOcclusionCulling_13(L_0);
		return;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_StartingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_StartingPanel_m2386E34C97716FF19541E05259B15D1CA34BB570 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => startingPanel;
		int32_t L_0 = __this->get_startingPanel_14();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_StartingPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_StartingPanel_m9728438E889B14120A51189EB5F3BAB26BADA125 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => startingPanel = value;
		int32_t L_0 = ___value0;
		__this->set_startingPanel_14(L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseSwipeGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseSwipeGestures_m0DBA8E3E4761534B5A7FFFD53317BE303A3F08CE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => useSwipeGestures;
		bool L_0 = __this->get_useSwipeGestures_15();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseSwipeGestures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseSwipeGestures_mE59CD4C706B18DAAF1ECD3BC80EFAAA5DEAA1AE6 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useSwipeGestures = value;
		bool L_0 = ___value0;
		__this->set_useSwipeGestures_15(L_0);
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_MinimumSwipeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_MinimumSwipeSpeed_m967C368E16215B4C47A141D90DB5F0ABF5A74C96 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => minimumSwipeSpeed;
		float L_0 = __this->get_minimumSwipeSpeed_16();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_MinimumSwipeSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_MinimumSwipeSpeed_m03446D1B01759E04C1B76D50C7A651BFB47401E9 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minimumSwipeSpeed = value;
		float L_0 = ___value0;
		__this->set_minimumSwipeSpeed_16(L_0);
		return;
	}
}
// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_PreviousButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * SimpleScrollSnap_get_PreviousButton_m9D8E5CEDF61AD42EC923B4FFDDB0430C3403004B (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => previousButton;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_previousButton_17();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_PreviousButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_PreviousButton_mA5670263431B73A52376B0816BBEB85096C194D3 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___value0, const RuntimeMethod* method)
{
	{
		// set => previousButton = value;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = ___value0;
		__this->set_previousButton_17(L_0);
		return;
	}
}
// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_NextButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * SimpleScrollSnap_get_NextButton_m11A1B5DD106927F4B280BCCEC075E0A7BAAC2151 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => nextButton;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_nextButton_18();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_NextButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_NextButton_m0BC3FB1B6AFC41CF6566479AF82009ADFD87F743 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___value0, const RuntimeMethod* method)
{
	{
		// set => nextButton = value;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = ___value0;
		__this->set_nextButton_18(L_0);
		return;
	}
}
// UnityEngine.UI.ToggleGroup DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Pagination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * SimpleScrollSnap_get_Pagination_m53D21F68016B91611550AAC4ED48E72E8364D7AF (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => pagination;
		ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * L_0 = __this->get_pagination_19();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Pagination(UnityEngine.UI.ToggleGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Pagination_mED2B0B45E0128B6C0D42AB91F17712C560A70A8E (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___value0, const RuntimeMethod* method)
{
	{
		// set => pagination = value;
		ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * L_0 = ___value0;
		__this->set_pagination_19(L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ToggleNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_ToggleNavigation_mF2775BCFC119B864843605182BD01D86EE1C7E86 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => useToggleNavigation;
		bool L_0 = __this->get_useToggleNavigation_20();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_ToggleNavigation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_ToggleNavigation_m5B5A6A1821437BEF4238A817B0939A8B63B75471 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useToggleNavigation = value;
		bool L_0 = ___value0;
		__this->set_useToggleNavigation_20(L_0);
		return;
	}
}
// DanielLochner.Assets.SimpleScrollSnap.SnapTarget DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SnapTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SnapTarget_mB6D0DF9DF5693862D2EEFE3D714AE058A75EE9D6 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => snapTarget;
		int32_t L_0 = __this->get_snapTarget_21();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SnapTarget(DanielLochner.Assets.SimpleScrollSnap.SnapTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SnapTarget_mCBCDE4DF991272FDEE086076FECCDBF5F17D6919 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => snapTarget = value;
		int32_t L_0 = ___value0;
		__this->set_snapTarget_21(L_0);
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SnapSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_SnapSpeed_mE352D85772E0FD4C4F83290CA73DFE3FECD444F2 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => snapSpeed;
		float L_0 = __this->get_snapSpeed_22();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SnapSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SnapSpeed_mD296C1D5E856CD2F3491BBC37EC90FEBE316A888 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => snapSpeed = value;
		float L_0 = ___value0;
		__this->set_snapSpeed_22(L_0);
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ThresholdSpeedToSnap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_ThresholdSpeedToSnap_m858B6EDB524BB1218F86DBA4B13AC5B688D87E12 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => thresholdSpeedToSnap;
		float L_0 = __this->get_thresholdSpeedToSnap_23();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_ThresholdSpeedToSnap(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_ThresholdSpeedToSnap_m3C4D57BAB76C5F5CF5A41F717DB87226AF82B960 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => thresholdSpeedToSnap = value;
		float L_0 = ___value0;
		__this->set_thresholdSpeedToSnap_23(L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseHardSnapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseHardSnapping_m3D1034AA3BB5E8B2F54036385D17C16B8E751CAB (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => useHardSnapping;
		bool L_0 = __this->get_useHardSnapping_24();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseHardSnapping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseHardSnapping_mF3F9318E51694D29545206EE317C34968B27AAFB (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useHardSnapping = value;
		bool L_0 = ___value0;
		__this->set_useHardSnapping_24(L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseUnscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseUnscaledTime_mE9E8CE50E8DAF97C8F9CDAC35F7787DA095D3A9E (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => useUnscaledTime;
		bool L_0 = __this->get_useUnscaledTime_25();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseUnscaledTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseUnscaledTime_m191AC3BAF6BFD04CC8DC7BFFA3F210F7BBBF0238 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useUnscaledTime = value;
		bool L_0 = ___value0;
		__this->set_useUnscaledTime_25(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnTransitionEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * SimpleScrollSnap_get_OnTransitionEffects_m45B22CAE047659EE0E505E42E610FB52A356C38D (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => onTransitionEffects;
		UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * L_0 = __this->get_onTransitionEffects_26();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelSelecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * SimpleScrollSnap_get_OnPanelSelecting_mADAA30BABF6F749EFD207A52A3D6C5AEFE949E13 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => onPanelSelecting;
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_0 = __this->get_onPanelSelecting_27();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * SimpleScrollSnap_get_OnPanelSelected_m92D2AFCA6D0D0AF203DE3E2CD16BF74343C56BA8 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => onPanelSelected;
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_0 = __this->get_onPanelSelected_28();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelCentering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * SimpleScrollSnap_get_OnPanelCentering_mDF063777107D58E211277C015A82AC54179B2AC4 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => onPanelCentering;
		UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * L_0 = __this->get_onPanelCentering_29();
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelCentered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * SimpleScrollSnap_get_OnPanelCentered_m3F3F1A9CBA2B4BEC72342B55A205B38A75834A42 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => onPanelCentered;
		UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * L_0 = __this->get_onPanelCentered_30();
		return L_0;
	}
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => ScrollRect.content;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0;
		L_0 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = ScrollRect_get_content_m80081CD9D9D066BB138099E6495390B37071C3B0_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Viewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => ScrollRect.viewport;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0;
		L_0 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = ScrollRect_get_viewport_m5F19B84F9A457DB423884801E0D58F53FE371382_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * SimpleScrollSnap_get_RectTransform_m4E917B75126A8F1BFF8495887EFDD169A75B8D36 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => transform as RectTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		return ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.UI.ScrollRect DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ScrollRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_m2977BE77C6B13F9EB2FF76FC7DE0B24108BB6C4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scrollRect == null)
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_scrollRect_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// scrollRect = GetComponent<ScrollRect>();
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_2;
		L_2 = Component_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_m2977BE77C6B13F9EB2FF76FC7DE0B24108BB6C4D(__this, /*hidden argument*/Component_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_m2977BE77C6B13F9EB2FF76FC7DE0B24108BB6C4D_RuntimeMethod_var);
		__this->set_scrollRect_31(L_2);
	}

IL_001a:
	{
		// return scrollRect;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_3 = __this->get_scrollRect_31();
		return L_3;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_NumberOfPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => Content.childCount;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ValidConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_ValidConfig_mC80991631A62982B73F38D14D37262951250AC0A (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43657ED7B0503D60FF88BF678A9460427BBA807E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// bool valid = true;
		V_0 = (bool)1;
		// if (pagination != null)
		ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * L_0 = __this->get_pagination_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		// int numberOfToggles = pagination.transform.childCount;
		ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * L_2 = __this->get_pagination_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (numberOfToggles != NumberOfPanels)
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0075;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> The number of Toggles should be equivalent to the number of Panels. There are currently " + numberOfToggles + " Toggles and " + NumberOfPanels + " Panels. If you are adding Panels dynamically during runtime, please update your pagination to reflect the number of Panels you will have before adding.", gameObject);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		ArrayElementTypeCheck (L_11, _stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		int32_t L_13;
		L_13 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		V_2 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_12;
		ArrayElementTypeCheck (L_15, _stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_16, L_17, /*hidden argument*/NULL);
		// valid = false;
		V_0 = (bool)0;
	}

IL_0075:
	{
		// if (snapSpeed < 0)
		float L_18 = __this->get_snapSpeed_22();
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> Snapping speed cannot be negative.", gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(_stringLiteral43657ED7B0503D60FF88BF678A9460427BBA807E, L_19, /*hidden argument*/NULL);
		// valid = false;
		V_0 = (bool)0;
	}

IL_0094:
	{
		// return valid;
		bool L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => velocity;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_velocity_34();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Velocity_mFDAFBCFA440EB58216959E4145CB40A62AA9AC5D (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ScrollRect.velocity = velocity = value;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0;
		L_0 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___value0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = L_1;
		V_0 = L_2;
		__this->set_velocity_34(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		ScrollRect_set_velocity_m6CBDADD5F61163917B37C922FA6F42170D68E1D9_inline(L_0, L_3, /*hidden argument*/NULL);
		// isSelected = false;
		__this->set_isSelected_39((bool)0);
		// }
		return;
	}
}
// UnityEngine.RectTransform[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Panels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_0 = __this->get_U3CPanelsU3Ek__BackingField_40();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Panels(UnityEngine.RectTransform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Panels_m4891D7CE39044D5E50FD80BFD3E3AEB8B573883D (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_0 = ___value0;
		__this->set_U3CPanelsU3Ek__BackingField_40(L_0);
		return;
	}
}
// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Toggles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* SimpleScrollSnap_get_Toggles_m77F892973EB51C696EAC13D98C5926DE4BB08A43 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_0 = __this->get_U3CTogglesU3Ek__BackingField_41();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Toggles(UnityEngine.UI.Toggle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Toggles_mC8E601AC938E9B8D241BEEF882657539D48B483B (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_0 = ___value0;
		__this->set_U3CTogglesU3Ek__BackingField_41(L_0);
		return;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SelectedPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SelectedPanel_m0D82A2F00F925D099F54AAAD26BBDF0AF5E89B94 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		int32_t L_0 = __this->get_U3CSelectedPanelU3Ek__BackingField_42();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SelectedPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SelectedPanel_mF0404B61F0DA045CB5AF0C835F0AE32E4ADB9EC0 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->set_U3CSelectedPanelU3Ek__BackingField_42(L_0);
		return;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_CenteredPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		int32_t L_0 = __this->get_U3CCenteredPanelU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_CenteredPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_CenteredPanel_m0319A63D6715A64CD0E9A29B926A7DA3107D59AF (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->set_U3CCenteredPanelU3Ek__BackingField_43(L_0);
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Start_m0012BA36A4228832634C55D7D81302F1483333AC (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// if (ValidConfig)
		bool L_0;
		L_0 = SimpleScrollSnap_get_ValidConfig_mC80991631A62982B73F38D14D37262951250AC0A(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Setup();
		SimpleScrollSnap_Setup_m3E3510726881461F1A4B94B8B9FF4386775B1D5E(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// throw new Exception("Invalid configuration.");
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FAD7856BCE41FCDF1BF95ED0F7570B9C075A4CA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleScrollSnap_Start_m0012BA36A4228832634C55D7D81302F1483333AC_RuntimeMethod_var)));
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Update_m71E5FE410F21471B727E009E81929E239B0EFCEE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// if (NumberOfPanels == 0) return;
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (NumberOfPanels == 0) return;
		return;
	}

IL_0009:
	{
		// HandleOcclusionCulling();
		SimpleScrollSnap_HandleOcclusionCulling_m46BFA0EDB073FF36255E0E7F991C8EC5E69FFA01(__this, (bool)0, /*hidden argument*/NULL);
		// HandleSelectingAndSnapping();
		SimpleScrollSnap_HandleSelectingAndSnapping_m3FBE8197988C1D59804E4137B1FA2BDF86F380DE(__this, /*hidden argument*/NULL);
		// HandleInfiniteScrolling();
		SimpleScrollSnap_HandleInfiniteScrolling_m3F3FB55F7F07DF5BCC4F49679380E3CAA72AB57F(__this, (bool)0, /*hidden argument*/NULL);
		// HandleTransitionEffects();
		SimpleScrollSnap_HandleTransitionEffects_m598DD41E6E3742F3ED4A79E18781429273364C7C(__this, /*hidden argument*/NULL);
		// HandleSwipeGestures();
		SimpleScrollSnap_HandleSwipeGestures_m632A347079CB47AFF043DF297E16BAB3865A2337(__this, /*hidden argument*/NULL);
		// GetVelocity();
		SimpleScrollSnap_GetVelocity_mC10F4052E03C80A0E14D1E51630EEFE3A5ED3CD8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnPointerDown_mED3630675078526FB2FFE51145CAC096E2213E11 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// isPressing = true;
		__this->set_isPressing_38((bool)1);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnPointerUp_mE03CB1BA38FC3A50850826E51951BC65B8664414 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// isPressing = false;
		__this->set_isPressing_38((bool)0);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnDrag_mAC7B4A89E61A22786EF98BDA8C657C82F34D1F15 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDragging && onPanelSelecting.GetPersistentEventCount() > 0)
		bool L_0 = __this->get_isDragging_37();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_1 = __this->get_onPanelSelecting_27();
		int32_t L_2;
		L_2 = UnityEventBase_GetPersistentEventCount_mE56E380D74081F0CB5AAAE2628A67719873B97A9(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// onPanelSelecting.Invoke(GetNearestPanel());
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_3 = __this->get_onPanelSelecting_27();
		int32_t L_4;
		L_4 = SimpleScrollSnap_GetNearestPanel_m9F071790BD0284CC585151DB78668D291320DD9D(__this, /*hidden argument*/NULL);
		UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530(L_3, L_4, /*hidden argument*/UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnBeginDrag_m349AB316D3CA0CA45EA159ADD8671E15D6A603D0 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if (useHardSnapping)
		bool L_0 = __this->get_useHardSnapping_24();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// ScrollRect.inertia = true;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_1;
		L_1 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		ScrollRect_set_inertia_m9CE7BE08CEB308DC8B9335436B901D557B4E6718_inline(L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// isSelected = false;
		__this->set_isSelected_39((bool)0);
		// isDragging = true;
		__this->set_isDragging_37((bool)1);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnEndDrag_m59EF76B551EF4DC83A5A0B2430C08588F06B61C1 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * G_B5_0 = NULL;
	SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * G_B6_1 = NULL;
	SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * G_B9_0 = NULL;
	SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * G_B10_1 = NULL;
	{
		// isDragging = false;
		__this->set_isDragging_37((bool)0);
		// switch (movementAxis)
		int32_t L_0 = __this->get_movementAxis_5();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0051;
	}

IL_0017:
	{
		// releaseDirection = (Velocity.x > 0) ? Direction.Right : Direction.Left;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841_inline(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		G_B4_0 = __this;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			G_B5_0 = __this;
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 2;
		G_B6_1 = G_B4_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 3;
		G_B6_1 = G_B5_0;
	}

IL_002e:
	{
		G_B6_1->set_releaseDirection_35(G_B6_0);
		// break;
		goto IL_0051;
	}

IL_0035:
	{
		// releaseDirection = (Velocity.y > 0) ? Direction.Up : Direction.Down;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841_inline(__this, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		G_B8_0 = __this;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			G_B9_0 = __this;
			goto IL_004b;
		}
	}
	{
		G_B10_0 = 1;
		G_B10_1 = G_B8_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_004c:
	{
		G_B10_1->set_releaseDirection_35(G_B10_0);
	}

IL_0051:
	{
		// releaseSpeed = Velocity.magnitude;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841_inline(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8;
		L_8 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		__this->set_releaseSpeed_36(L_8);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Setup_m3E3510726881461F1A4B94B8B9FF4386775B1D5E (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m55C92A8E7F68A234A2CD98627CDAD19FF502D12E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleScrollSnap_GoToNextPanel_m579457C7130CCC02C3719E471700559890D09147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleScrollSnap_GoToPreviousPanel_m27C0C8E6EF873664B4A89FD4887BE5D94FD17563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD92C87E3B3E707759309B32E39AA6A7801D57616_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventUtility_AddListenerOnce_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16CC198B5DE963D526B10ECF704C70789E92D927_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * V_16 = NULL;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B4_0 = NULL;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B5_1 = NULL;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B7_0 = NULL;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B8_1 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B15_0 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B14_0 = NULL;
	float G_B16_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B16_1 = NULL;
	float G_B18_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B18_1 = NULL;
	float G_B17_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B17_1 = NULL;
	float G_B19_0 = 0.0f;
	float G_B19_1 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B19_2 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B21_0 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B20_0 = NULL;
	float G_B22_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B22_1 = NULL;
	float G_B24_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B24_1 = NULL;
	float G_B23_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B23_1 = NULL;
	float G_B25_0 = 0.0f;
	float G_B25_1 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B25_2 = NULL;
	float G_B28_0 = 0.0f;
	float G_B31_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B38_0 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B37_0 = NULL;
	float G_B39_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B39_1 = NULL;
	float G_B41_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B41_1 = NULL;
	float G_B40_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B40_1 = NULL;
	float G_B42_0 = 0.0f;
	float G_B42_1 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B42_2 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B44_0 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B43_0 = NULL;
	float G_B45_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B45_1 = NULL;
	float G_B47_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B47_1 = NULL;
	float G_B46_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B46_1 = NULL;
	float G_B48_0 = 0.0f;
	float G_B48_1 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B48_2 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B50_0 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B49_0 = NULL;
	float G_B51_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B51_1 = NULL;
	float G_B53_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B53_1 = NULL;
	float G_B52_0 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B52_1 = NULL;
	float G_B54_0 = 0.0f;
	float G_B54_1 = 0.0f;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B54_2 = NULL;
	float G_B57_0 = 0.0f;
	float G_B60_0 = 0.0f;
	float G_B70_0 = 0.0f;
	float G_B74_0 = 0.0f;
	{
		// if (NumberOfPanels == 0) return;
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (NumberOfPanels == 0) return;
		return;
	}

IL_0009:
	{
		// ScrollRect.horizontal = (movementType == MovementType.Free) || (movementAxis == MovementAxis.Horizontal);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_1;
		L_1 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_movementType_4();
		G_B3_0 = L_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B4_0 = L_1;
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->get_movementAxis_5();
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0024:
	{
		ScrollRect_set_horizontal_m45564FC7DD17DE132CCC1A843C6D83A9635C3BB4_inline(G_B5_1, (bool)G_B5_0, /*hidden argument*/NULL);
		// ScrollRect.vertical =   (movementType == MovementType.Free) || (movementAxis == MovementAxis.Vertical);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_4;
		L_4 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_movementType_4();
		G_B6_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B7_0 = L_4;
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->get_movementAxis_5();
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0044:
	{
		ScrollRect_set_vertical_m25BA9647871AD3CADF2A26CB938BE5418A13C22E_inline(G_B8_1, (bool)G_B8_0, /*hidden argument*/NULL);
		// if (sizeControl == SizeControl.Fit)
		int32_t L_7 = __this->get_sizeControl_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// size = Viewport.rect.size;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8;
		L_8 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		L_9 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		__this->set_size_9(L_10);
	}

IL_006b:
	{
		// Panels = new RectTransform[NumberOfPanels];
		int32_t L_11;
		L_11 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_12 = (RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5*)(RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5*)SZArrayNew(RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5_il2cpp_TypeInfo_var, (uint32_t)L_11);
		SimpleScrollSnap_set_Panels_m4891D7CE39044D5E50FD80BFD3E3AEB8B573883D_inline(__this, L_12, /*hidden argument*/NULL);
		// for (int i = 0; i < NumberOfPanels; i++)
		V_4 = 0;
		goto IL_02b2;
	}

IL_0084:
	{
		// Panels[i] = Content.GetChild(i) as RectTransform;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_13;
		L_13 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15;
		L_15 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_15, L_16, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_13, ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_17, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_17, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)));
		// if (movementType == MovementType.Fixed && useAutomaticLayout)
		int32_t L_18 = __this->get_movementType_4();
		if (L_18)
		{
			goto IL_02ac;
		}
	}
	{
		bool L_19 = __this->get_useAutomaticLayout_6();
		if (!L_19)
		{
			goto IL_02ac;
		}
	}
	{
		// Panels[i].anchorMin = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_20;
		L_20 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = __this->get_movementAxis_5();
		G_B14_0 = L_23;
		if (!L_24)
		{
			G_B15_0 = L_23;
			goto IL_00cd;
		}
	}
	{
		G_B16_0 = (0.5f);
		G_B16_1 = G_B14_0;
		goto IL_00d2;
	}

IL_00cd:
	{
		G_B16_0 = (0.0f);
		G_B16_1 = G_B15_0;
	}

IL_00d2:
	{
		int32_t L_25 = __this->get_movementAxis_5();
		G_B17_0 = G_B16_0;
		G_B17_1 = G_B16_1;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			G_B18_0 = G_B16_0;
			G_B18_1 = G_B16_1;
			goto IL_00e2;
		}
	}
	{
		G_B19_0 = (0.5f);
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_00e7;
	}

IL_00e2:
	{
		G_B19_0 = (0.0f);
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_00e7:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), G_B19_1, G_B19_0, /*hidden argument*/NULL);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(G_B19_2, L_26, /*hidden argument*/NULL);
		// Panels[i].anchorMax = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_27;
		L_27 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_28 = V_4;
		int32_t L_29 = L_28;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = __this->get_movementAxis_5();
		G_B20_0 = L_30;
		if (!L_31)
		{
			G_B21_0 = L_30;
			goto IL_0109;
		}
	}
	{
		G_B22_0 = (0.5f);
		G_B22_1 = G_B20_0;
		goto IL_010e;
	}

IL_0109:
	{
		G_B22_0 = (0.0f);
		G_B22_1 = G_B21_0;
	}

IL_010e:
	{
		int32_t L_32 = __this->get_movementAxis_5();
		G_B23_0 = G_B22_0;
		G_B23_1 = G_B22_1;
		if ((((int32_t)L_32) == ((int32_t)1)))
		{
			G_B24_0 = G_B22_0;
			G_B24_1 = G_B22_1;
			goto IL_011e;
		}
	}
	{
		G_B25_0 = (0.5f);
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_0123;
	}

IL_011e:
	{
		G_B25_0 = (0.0f);
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_0123:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_33), G_B25_1, G_B25_0, /*hidden argument*/NULL);
		RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D(G_B25_2, L_33, /*hidden argument*/NULL);
		// float x = (automaticLayoutMargins.Right + automaticLayoutMargins.Left)   / 2f - automaticLayoutMargins.Left;
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_34 = __this->get_automaticLayoutMargins_10();
		float L_35 = L_34->get_Right_1();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_36 = __this->get_automaticLayoutMargins_10();
		float L_37 = L_36->get_Left_0();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_38 = __this->get_automaticLayoutMargins_10();
		float L_39 = L_38->get_Left_0();
		V_5 = ((float)il2cpp_codegen_subtract((float)((float)((float)((float)il2cpp_codegen_add((float)L_35, (float)L_37))/(float)(2.0f))), (float)L_39));
		// float y = (automaticLayoutMargins.Top   + automaticLayoutMargins.Bottom) / 2f - automaticLayoutMargins.Bottom;
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_40 = __this->get_automaticLayoutMargins_10();
		float L_41 = L_40->get_Top_2();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_42 = __this->get_automaticLayoutMargins_10();
		float L_43 = L_42->get_Bottom_3();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_44 = __this->get_automaticLayoutMargins_10();
		float L_45 = L_44->get_Bottom_3();
		V_6 = ((float)il2cpp_codegen_subtract((float)((float)((float)((float)il2cpp_codegen_add((float)L_41, (float)L_43))/(float)(2.0f))), (float)L_45));
		// Vector2 marginOffset = new Vector2(x / size.x, y / size.y);
		float L_46 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_47 = __this->get_address_of_size_9();
		float L_48 = L_47->get_x_0();
		float L_49 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_50 = __this->get_address_of_size_9();
		float L_51 = L_50->get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_7), ((float)((float)L_46/(float)L_48)), ((float)((float)L_49/(float)L_51)), /*hidden argument*/NULL);
		// Panels[i].pivot = new Vector2(0.5f, 0.5f) + marginOffset;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_52;
		L_52 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_53 = V_4;
		int32_t L_54 = L_53;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_56), (0.5f), (0.5f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
		L_58 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_56, L_57, /*hidden argument*/NULL);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_55, L_58, /*hidden argument*/NULL);
		// Panels[i].sizeDelta = size - new Vector2(automaticLayoutMargins.Left + automaticLayoutMargins.Right, automaticLayoutMargins.Top + automaticLayoutMargins.Bottom);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_59;
		L_59 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_60 = V_4;
		int32_t L_61 = L_60;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_62 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63 = __this->get_size_9();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_64 = __this->get_automaticLayoutMargins_10();
		float L_65 = L_64->get_Left_0();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_66 = __this->get_automaticLayoutMargins_10();
		float L_67 = L_66->get_Right_1();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_68 = __this->get_automaticLayoutMargins_10();
		float L_69 = L_68->get_Top_2();
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_70 = __this->get_automaticLayoutMargins_10();
		float L_71 = L_70->get_Bottom_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_72), ((float)il2cpp_codegen_add((float)L_65, (float)L_67)), ((float)il2cpp_codegen_add((float)L_69, (float)L_71)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73;
		L_73 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_63, L_72, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_62, L_73, /*hidden argument*/NULL);
		// float panelPosX = (movementAxis == MovementAxis.Horizontal) ? i * (automaticLayoutSpacing + 1f) * size.x + (size.x / 2f) : 0f;
		int32_t L_74 = __this->get_movementAxis_5();
		if (!L_74)
		{
			goto IL_0225;
		}
	}
	{
		G_B28_0 = (0.0f);
		goto IL_0253;
	}

IL_0225:
	{
		int32_t L_75 = V_4;
		float L_76 = __this->get_automaticLayoutSpacing_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_77 = __this->get_address_of_size_9();
		float L_78 = L_77->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_79 = __this->get_address_of_size_9();
		float L_80 = L_79->get_x_0();
		G_B28_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_75)), (float)((float)il2cpp_codegen_add((float)L_76, (float)(1.0f))))), (float)L_78)), (float)((float)((float)L_80/(float)(2.0f)))));
	}

IL_0253:
	{
		V_8 = G_B28_0;
		// float panelPosY = (movementAxis == MovementAxis.Vertical)   ? i * (automaticLayoutSpacing + 1f) * size.y + (size.y / 2f) : 0f;
		int32_t L_81 = __this->get_movementAxis_5();
		if ((((int32_t)L_81) == ((int32_t)1)))
		{
			goto IL_0265;
		}
	}
	{
		G_B31_0 = (0.0f);
		goto IL_0293;
	}

IL_0265:
	{
		int32_t L_82 = V_4;
		float L_83 = __this->get_automaticLayoutSpacing_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_84 = __this->get_address_of_size_9();
		float L_85 = L_84->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_86 = __this->get_address_of_size_9();
		float L_87 = L_86->get_y_1();
		G_B31_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_82)), (float)((float)il2cpp_codegen_add((float)L_83, (float)(1.0f))))), (float)L_85)), (float)((float)((float)L_87/(float)(2.0f)))));
	}

IL_0293:
	{
		V_9 = G_B31_0;
		// Panels[i].anchoredPosition = new Vector2(panelPosX, panelPosY);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_88;
		L_88 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_89 = V_4;
		int32_t L_90 = L_89;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_91 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		float L_92 = V_8;
		float L_93 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_94), L_92, L_93, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_91, L_94, /*hidden argument*/NULL);
	}

IL_02ac:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_95 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_02b2:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0084;
		}
	}
	{
		// if (movementType == MovementType.Fixed)
		int32_t L_98 = __this->get_movementType_4();
		if (L_98)
		{
			goto IL_04a7;
		}
	}
	{
		// if (useAutomaticLayout)
		bool L_99 = __this->get_useAutomaticLayout_6();
		if (!L_99)
		{
			goto IL_044c;
		}
	}
	{
		// Content.anchorMin = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_100;
		L_100 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		int32_t L_101 = __this->get_movementAxis_5();
		G_B37_0 = L_100;
		if (!L_101)
		{
			G_B38_0 = L_100;
			goto IL_02ea;
		}
	}
	{
		G_B39_0 = (0.5f);
		G_B39_1 = G_B37_0;
		goto IL_02ef;
	}

IL_02ea:
	{
		G_B39_0 = (0.0f);
		G_B39_1 = G_B38_0;
	}

IL_02ef:
	{
		int32_t L_102 = __this->get_movementAxis_5();
		G_B40_0 = G_B39_0;
		G_B40_1 = G_B39_1;
		if ((((int32_t)L_102) == ((int32_t)1)))
		{
			G_B41_0 = G_B39_0;
			G_B41_1 = G_B39_1;
			goto IL_02ff;
		}
	}
	{
		G_B42_0 = (0.5f);
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		goto IL_0304;
	}

IL_02ff:
	{
		G_B42_0 = (0.0f);
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
	}

IL_0304:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_103), G_B42_1, G_B42_0, /*hidden argument*/NULL);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(G_B42_2, L_103, /*hidden argument*/NULL);
		// Content.anchorMax = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_104;
		L_104 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		int32_t L_105 = __this->get_movementAxis_5();
		G_B43_0 = L_104;
		if (!L_105)
		{
			G_B44_0 = L_104;
			goto IL_0323;
		}
	}
	{
		G_B45_0 = (0.5f);
		G_B45_1 = G_B43_0;
		goto IL_0328;
	}

IL_0323:
	{
		G_B45_0 = (0.0f);
		G_B45_1 = G_B44_0;
	}

IL_0328:
	{
		int32_t L_106 = __this->get_movementAxis_5();
		G_B46_0 = G_B45_0;
		G_B46_1 = G_B45_1;
		if ((((int32_t)L_106) == ((int32_t)1)))
		{
			G_B47_0 = G_B45_0;
			G_B47_1 = G_B45_1;
			goto IL_0338;
		}
	}
	{
		G_B48_0 = (0.5f);
		G_B48_1 = G_B46_0;
		G_B48_2 = G_B46_1;
		goto IL_033d;
	}

IL_0338:
	{
		G_B48_0 = (0.0f);
		G_B48_1 = G_B47_0;
		G_B48_2 = G_B47_1;
	}

IL_033d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_107), G_B48_1, G_B48_0, /*hidden argument*/NULL);
		RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D(G_B48_2, L_107, /*hidden argument*/NULL);
		// Content.pivot = new Vector2(movementAxis == MovementAxis.Horizontal     ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_108;
		L_108 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		int32_t L_109 = __this->get_movementAxis_5();
		G_B49_0 = L_108;
		if (!L_109)
		{
			G_B50_0 = L_108;
			goto IL_035c;
		}
	}
	{
		G_B51_0 = (0.5f);
		G_B51_1 = G_B49_0;
		goto IL_0361;
	}

IL_035c:
	{
		G_B51_0 = (0.0f);
		G_B51_1 = G_B50_0;
	}

IL_0361:
	{
		int32_t L_110 = __this->get_movementAxis_5();
		G_B52_0 = G_B51_0;
		G_B52_1 = G_B51_1;
		if ((((int32_t)L_110) == ((int32_t)1)))
		{
			G_B53_0 = G_B51_0;
			G_B53_1 = G_B51_1;
			goto IL_0371;
		}
	}
	{
		G_B54_0 = (0.5f);
		G_B54_1 = G_B52_0;
		G_B54_2 = G_B52_1;
		goto IL_0376;
	}

IL_0371:
	{
		G_B54_0 = (0.0f);
		G_B54_1 = G_B53_0;
		G_B54_2 = G_B53_1;
	}

IL_0376:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_111), G_B54_1, G_B54_0, /*hidden argument*/NULL);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(G_B54_2, L_111, /*hidden argument*/NULL);
		// Vector2 min = Panels[0].anchoredPosition;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_112;
		L_112 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_113 = 0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_114 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_115;
		L_115 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_114, /*hidden argument*/NULL);
		// Vector2 max = Panels[NumberOfPanels - 1].anchoredPosition;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_116;
		L_116 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_117;
		L_117 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		int32_t L_118 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)1));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_119 = (L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_120;
		L_120 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_119, /*hidden argument*/NULL);
		// float contentWidth  = (movementAxis == MovementAxis.Horizontal) ? (NumberOfPanels * (automaticLayoutSpacing + 1f) * size.x) - (size.x * automaticLayoutSpacing) : size.x;
		int32_t L_121 = __this->get_movementAxis_5();
		if (!L_121)
		{
			goto IL_03b8;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_122 = __this->get_address_of_size_9();
		float L_123 = L_122->get_x_0();
		G_B57_0 = L_123;
		goto IL_03eb;
	}

IL_03b8:
	{
		int32_t L_124;
		L_124 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		float L_125 = __this->get_automaticLayoutSpacing_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_126 = __this->get_address_of_size_9();
		float L_127 = L_126->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_128 = __this->get_address_of_size_9();
		float L_129 = L_128->get_x_0();
		float L_130 = __this->get_automaticLayoutSpacing_7();
		G_B57_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_124)), (float)((float)il2cpp_codegen_add((float)L_125, (float)(1.0f))))), (float)L_127)), (float)((float)il2cpp_codegen_multiply((float)L_129, (float)L_130))));
	}

IL_03eb:
	{
		V_10 = G_B57_0;
		// float contentHeight = (movementAxis == MovementAxis.Vertical)   ? (NumberOfPanels * (automaticLayoutSpacing + 1f) * size.y) - (size.y * automaticLayoutSpacing) : size.y;
		int32_t L_131 = __this->get_movementAxis_5();
		if ((((int32_t)L_131) == ((int32_t)1)))
		{
			goto IL_0403;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_132 = __this->get_address_of_size_9();
		float L_133 = L_132->get_y_1();
		G_B60_0 = L_133;
		goto IL_0436;
	}

IL_0403:
	{
		int32_t L_134;
		L_134 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		float L_135 = __this->get_automaticLayoutSpacing_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_136 = __this->get_address_of_size_9();
		float L_137 = L_136->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_138 = __this->get_address_of_size_9();
		float L_139 = L_138->get_y_1();
		float L_140 = __this->get_automaticLayoutSpacing_7();
		G_B60_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_134)), (float)((float)il2cpp_codegen_add((float)L_135, (float)(1.0f))))), (float)L_137)), (float)((float)il2cpp_codegen_multiply((float)L_139, (float)L_140))));
	}

IL_0436:
	{
		V_11 = G_B60_0;
		// Content.sizeDelta = new Vector2(contentWidth, contentHeight);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_141;
		L_141 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		float L_142 = V_10;
		float L_143 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_144;
		memset((&L_144), 0, sizeof(L_144));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_144), L_142, L_143, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_141, L_144, /*hidden argument*/NULL);
	}

IL_044c:
	{
		// if (useInfiniteScrolling)
		bool L_145 = __this->get_useInfiniteScrolling_11();
		if (!L_145)
		{
			goto IL_0496;
		}
	}
	{
		// ScrollRect.movementType = ScrollRect.MovementType.Unrestricted;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_146;
		L_146 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		ScrollRect_set_movementType_m63E3C04ECBDA708AF2341564DB987227D32075CC_inline(L_146, 0, /*hidden argument*/NULL);
		// contentSize = Content.rect.size + (size * infiniteScrollingSpacing);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_147;
		L_147 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_148;
		L_148 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_147, /*hidden argument*/NULL);
		V_3 = L_148;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_149;
		L_149 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_150 = __this->get_size_9();
		float L_151 = __this->get_infiniteScrollingSpacing_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_152;
		L_152 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_150, L_151, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_153;
		L_153 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_149, L_152, /*hidden argument*/NULL);
		__this->set_contentSize_32(L_153);
		// HandleInfiniteScrolling(true);
		SimpleScrollSnap_HandleInfiniteScrolling_m3F3FB55F7F07DF5BCC4F49679380E3CAA72AB57F(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0496:
	{
		// if (useOcclusionCulling)
		bool L_154 = __this->get_useOcclusionCulling_13();
		if (!L_154)
		{
			goto IL_04c4;
		}
	}
	{
		// HandleOcclusionCulling(true);
		SimpleScrollSnap_HandleOcclusionCulling_m46BFA0EDB073FF36255E0E7F991C8EC5E69FFA01(__this, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_04c4;
	}

IL_04a7:
	{
		// useAutomaticLayout = useInfiniteScrolling = useOcclusionCulling = false;
		int32_t L_155 = 0;
		V_12 = (bool)L_155;
		__this->set_useOcclusionCulling_13((bool)L_155);
		bool L_156 = V_12;
		bool L_157 = L_156;
		V_12 = L_157;
		__this->set_useInfiniteScrolling_11(L_157);
		bool L_158 = V_12;
		__this->set_useAutomaticLayout_6(L_158);
	}

IL_04c4:
	{
		// float xOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Horizontal) ? Viewport.rect.width  / 2f : 0f;
		int32_t L_159 = __this->get_movementType_4();
		if ((((int32_t)L_159) == ((int32_t)1)))
		{
			goto IL_04dc;
		}
	}
	{
		int32_t L_160 = __this->get_movementAxis_5();
		if (!L_160)
		{
			goto IL_04dc;
		}
	}
	{
		G_B70_0 = (0.0f);
		goto IL_04f5;
	}

IL_04dc:
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_161;
		L_161 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_162;
		L_162 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_161, /*hidden argument*/NULL);
		V_3 = L_162;
		float L_163;
		L_163 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		G_B70_0 = ((float)((float)L_163/(float)(2.0f)));
	}

IL_04f5:
	{
		V_0 = G_B70_0;
		// float yOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Vertical)   ? Viewport.rect.height / 2f : 0f;
		int32_t L_164 = __this->get_movementType_4();
		if ((((int32_t)L_164) == ((int32_t)1)))
		{
			goto IL_050f;
		}
	}
	{
		int32_t L_165 = __this->get_movementAxis_5();
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_050f;
		}
	}
	{
		G_B74_0 = (0.0f);
		goto IL_0528;
	}

IL_050f:
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_166;
		L_166 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_167;
		L_167 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_166, /*hidden argument*/NULL);
		V_3 = L_167;
		float L_168;
		L_168 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		G_B74_0 = ((float)((float)L_168/(float)(2.0f)));
	}

IL_0528:
	{
		V_1 = G_B74_0;
		// Vector2 offset = new Vector2(xOffset, yOffset);
		float L_169 = V_0;
		float L_170 = V_1;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), L_169, L_170, /*hidden argument*/NULL);
		// prevAnchoredPosition = Content.anchoredPosition = -Panels[startingPanel].anchoredPosition + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_171;
		L_171 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_172;
		L_172 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_173 = __this->get_startingPanel_14();
		int32_t L_174 = L_173;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_175 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_176;
		L_176 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_175, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_177;
		L_177 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_176, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_178 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_179;
		L_179 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_177, L_178, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_180 = L_179;
		V_13 = L_180;
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_171, L_180, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_181 = V_13;
		__this->set_prevAnchoredPosition_33(L_181);
		// SelectedPanel = CenteredPanel = startingPanel;
		int32_t L_182 = __this->get_startingPanel_14();
		int32_t L_183 = L_182;
		V_14 = L_183;
		SimpleScrollSnap_set_CenteredPanel_m0319A63D6715A64CD0E9A29B926A7DA3107D59AF_inline(__this, L_183, /*hidden argument*/NULL);
		int32_t L_184 = V_14;
		SimpleScrollSnap_set_SelectedPanel_mF0404B61F0DA045CB5AF0C835F0AE32E4ADB9EC0_inline(__this, L_184, /*hidden argument*/NULL);
		// if (previousButton != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_185 = __this->get_previousButton_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_186;
		L_186 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_185, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_186)
		{
			goto IL_05a6;
		}
	}
	{
		// previousButton.onClick.AddListenerOnce(GoToPreviousPanel);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_187 = __this->get_previousButton_17();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_188;
		L_188 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_187, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_189 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_189, __this, (intptr_t)((intptr_t)SimpleScrollSnap_GoToPreviousPanel_m27C0C8E6EF873664B4A89FD4887BE5D94FD17563_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEventUtility_AddListenerOnce_mC3C0E006DDC60841DF8E57970D76F314FD1F4A17(L_188, L_189, /*hidden argument*/NULL);
	}

IL_05a6:
	{
		// if (nextButton != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_190 = __this->get_nextButton_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_191;
		L_191 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_190, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_191)
		{
			goto IL_05d0;
		}
	}
	{
		// nextButton.onClick.AddListenerOnce(GoToNextPanel);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_192 = __this->get_nextButton_18();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_193;
		L_193 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_192, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_194 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_194, __this, (intptr_t)((intptr_t)SimpleScrollSnap_GoToNextPanel_m579457C7130CCC02C3719E471700559890D09147_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEventUtility_AddListenerOnce_mC3C0E006DDC60841DF8E57970D76F314FD1F4A17(L_193, L_194, /*hidden argument*/NULL);
	}

IL_05d0:
	{
		// if (pagination != null && NumberOfPanels != 0)
		ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * L_195 = __this->get_pagination_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_196;
		L_196 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_195, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_196)
		{
			goto IL_0659;
		}
	}
	{
		int32_t L_197;
		L_197 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if (!L_197)
		{
			goto IL_0659;
		}
	}
	{
		// Toggles = pagination.GetComponentsInChildren<Toggle>();
		ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * L_198 = __this->get_pagination_19();
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_199;
		L_199 = Component_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m55C92A8E7F68A234A2CD98627CDAD19FF502D12E(L_198, /*hidden argument*/Component_GetComponentsInChildren_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m55C92A8E7F68A234A2CD98627CDAD19FF502D12E_RuntimeMethod_var);
		SimpleScrollSnap_set_Toggles_mC8E601AC938E9B8D241BEEF882657539D48B483B_inline(__this, L_199, /*hidden argument*/NULL);
		// Toggles[startingPanel].SetIsOnWithoutNotify(true);
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_200;
		L_200 = SimpleScrollSnap_get_Toggles_m77F892973EB51C696EAC13D98C5926DE4BB08A43_inline(__this, /*hidden argument*/NULL);
		int32_t L_201 = __this->get_startingPanel_14();
		int32_t L_202 = L_201;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_203 = (L_200)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_202));
		Toggle_SetIsOnWithoutNotify_mD07469424A970A7894F38F2AE3A84CC465AE7952(L_203, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < Toggles.Length; i++)
		V_15 = 0;
		goto IL_064d;
	}

IL_060f:
	{
		U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * L_204 = (U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass150_0__ctor_m62FBC782260757259149BDAEE82A4B059623C6A3(L_204, /*hidden argument*/NULL);
		V_16 = L_204;
		U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * L_205 = V_16;
		L_205->set_U3CU3E4__this_1(__this);
		// int panelNumber = i;
		U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * L_206 = V_16;
		int32_t L_207 = V_15;
		L_206->set_panelNumber_0(L_207);
		// Toggles[i].onValueChanged.AddListenerOnce(delegate (bool isOn)
		// {
		//     if (isOn && useToggleNavigation)
		//     {
		//         GoToPanel(panelNumber);
		//     }
		// });
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_208;
		L_208 = SimpleScrollSnap_get_Toggles_m77F892973EB51C696EAC13D98C5926DE4BB08A43_inline(__this, /*hidden argument*/NULL);
		int32_t L_209 = V_15;
		int32_t L_210 = L_209;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_211 = (L_208)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * L_212 = L_211->get_onValueChanged_23();
		U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * L_213 = V_16;
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_214 = (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)il2cpp_codegen_object_new(UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD(L_214, L_213, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD92C87E3B3E707759309B32E39AA6A7801D57616_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var);
		UnityEventUtility_AddListenerOnce_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16CC198B5DE963D526B10ECF704C70789E92D927(L_212, L_214, /*hidden argument*/UnityEventUtility_AddListenerOnce_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16CC198B5DE963D526B10ECF704C70789E92D927_RuntimeMethod_var);
		// for (int i = 0; i < Toggles.Length; i++)
		int32_t L_215 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)1));
	}

IL_064d:
	{
		// for (int i = 0; i < Toggles.Length; i++)
		int32_t L_216 = V_15;
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_217;
		L_217 = SimpleScrollSnap_get_Toggles_m77F892973EB51C696EAC13D98C5926DE4BB08A43_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_216) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_217)->max_length))))))
		{
			goto IL_060f;
		}
	}

IL_0659:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSelectingAndSnapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSelectingAndSnapping_m3FBE8197988C1D59804E4137B1FA2BDF86F380DE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isSelected)
		bool L_0 = __this->get_isSelected_39();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (!((isDragging || isPressing) && useSwipeGestures))
		bool L_1 = __this->get_isDragging_37();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_isPressing_38();
		if (!L_2)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		bool L_3 = __this->get_useSwipeGestures_15();
		if (L_3)
		{
			goto IL_005d;
		}
	}

IL_0020:
	{
		// SnapToPanel();
		SimpleScrollSnap_SnapToPanel_m5C044044F290314DF7F83CAC59320C3E49741E59(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// else if (!isDragging && (ScrollRect.velocity.magnitude <= thresholdSpeedToSnap || thresholdSpeedToSnap == -1f))
		bool L_4 = __this->get_isDragging_37();
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_5;
		L_5 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = ScrollRect_get_velocity_mF5519EB702F5A1BCBDA6EE50CE92EEFA3398BDC6_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		float L_8 = __this->get_thresholdSpeedToSnap_23();
		if ((((float)L_7) <= ((float)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		float L_9 = __this->get_thresholdSpeedToSnap_23();
		if ((!(((float)L_9) == ((float)(-1.0f)))))
		{
			goto IL_005d;
		}
	}

IL_0057:
	{
		// SelectPanel();
		SimpleScrollSnap_SelectPanel_m2ACE747E8995712B44568CB606D430FE714D4F19(__this, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleOcclusionCulling_m46BFA0EDB073FF36255E0E7F991C8EC5E69FFA01 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___forceUpdate0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (useOcclusionCulling && (Velocity.magnitude > 0f || forceUpdate))
		bool L_0 = __this->get_useOcclusionCulling_13();
		if (!L_0)
		{
			goto IL_00ed;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		bool L_3 = ___forceUpdate0;
		if (!((int32_t)((int32_t)((((float)L_2) > ((float)(0.0f)))? 1 : 0)|(int32_t)L_3)))
		{
			goto IL_00ed;
		}
	}
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_1 = 0;
		goto IL_00e1;
	}

IL_002e:
	{
		// switch (movementAxis)
		int32_t L_4 = __this->get_movementAxis_5();
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00dd;
	}

IL_0041:
	{
		// Panels[i].gameObject.SetActive(Mathf.Abs(GetDisplacementFromCenter(i).x) <= Viewport.rect.width  / 2f + size.x);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_7;
		L_7 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_0();
		float L_15;
		L_15 = fabsf(L_14);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_16;
		L_16 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17;
		L_17 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18;
		L_18 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_size_9();
		float L_20 = L_19->get_x_0();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)((((int32_t)((!(((float)L_15) <= ((float)((float)il2cpp_codegen_add((float)((float)((float)L_18/(float)(2.0f))), (float)L_20)))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// break;
		goto IL_00dd;
	}

IL_0090:
	{
		// Panels[i].gameObject.SetActive(Mathf.Abs(GetDisplacementFromCenter(i).y) <= Viewport.rect.height / 2f + size.y);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_21;
		L_21 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_1();
		float L_29;
		L_29 = fabsf(L_28);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30;
		L_30 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31;
		L_31 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		float L_32;
		L_32 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_size_9();
		float L_34 = L_33->get_y_1();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)((((int32_t)((!(((float)L_29) <= ((float)((float)il2cpp_codegen_add((float)((float)((float)L_32/(float)(2.0f))), (float)L_34)))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_002e;
		}
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleInfiniteScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleInfiniteScrolling_m3F3FB55F7F07DF5BCC4F49679380E3CAA72AB57F (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, bool ___forceUpdate0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (useInfiniteScrolling && (Velocity.magnitude > 0 || forceUpdate))
		bool L_0 = __this->get_useInfiniteScrolling_11();
		if (!L_0)
		{
			goto IL_01a8;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		bool L_3 = ___forceUpdate0;
		if (!((int32_t)((int32_t)((((float)L_2) > ((float)(0.0f)))? 1 : 0)|(int32_t)L_3)))
		{
			goto IL_01a8;
		}
	}
	{
		// switch (movementAxis)
		int32_t L_4 = __this->get_movementAxis_5();
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_00ec;
		}
	}
	{
		return;
	}

IL_0039:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_2 = 0;
		goto IL_00df;
	}

IL_0040:
	{
		// Vector2 offset = new Vector2(contentSize.x, 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_contentSize_32();
		float L_8 = L_7->get_x_0();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), L_8, (0.0f), /*hidden argument*/NULL);
		// if (GetDisplacementFromCenter(i).x > Content.rect.width /  2f)
		int32_t L_9 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12;
		L_12 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		L_13 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		float L_14;
		L_14 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_11) > ((float)((float)((float)L_14/(float)(2.0f)))))))
		{
			goto IL_009a;
		}
	}
	{
		// Panels[i].anchoredPosition -= offset;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_15;
		L_15 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_19 = L_18;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_20, L_21, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_19, L_22, /*hidden argument*/NULL);
		// }
		goto IL_00db;
	}

IL_009a:
	{
		// if (GetDisplacementFromCenter(i).x < Content.rect.width / -2f)
		int32_t L_23 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_26;
		L_26 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_27;
		L_27 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		float L_28;
		L_28 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_25) < ((float)((float)((float)L_28/(float)(-2.0f)))))))
		{
			goto IL_00db;
		}
	}
	{
		// Panels[i].anchoredPosition += offset;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_29;
		L_29 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_30 = V_2;
		int32_t L_31 = L_30;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = L_32;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_34, L_35, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_33, L_36, /*hidden argument*/NULL);
	}

IL_00db:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00df:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_38 = V_2;
		int32_t L_39;
		L_39 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0040;
		}
	}
	{
		// break;
		return;
	}

IL_00ec:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_5 = 0;
		goto IL_019b;
	}

IL_00f4:
	{
		// Vector2 offset = new Vector2(0, contentSize.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_contentSize_32();
		float L_41 = L_40->get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_6), (0.0f), L_41, /*hidden argument*/NULL);
		// if (GetDisplacementFromCenter(i).y > Content.rect.height /  2f)
		int32_t L_42 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_y_1();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_45;
		L_45 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_46;
		L_46 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_45, /*hidden argument*/NULL);
		V_4 = L_46;
		float L_47;
		L_47 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_44) > ((float)((float)((float)L_47/(float)(2.0f)))))))
		{
			goto IL_0151;
		}
	}
	{
		// Panels[i].anchoredPosition -= offset;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_48;
		L_48 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_49 = V_5;
		int32_t L_50 = L_49;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_52 = L_51;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		L_53 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_52, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		L_55 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_53, L_54, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_52, L_55, /*hidden argument*/NULL);
		// }
		goto IL_0195;
	}

IL_0151:
	{
		// if (GetDisplacementFromCenter(i).y < Content.rect.height / -2f)
		int32_t L_56 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57;
		L_57 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_y_1();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_59;
		L_59 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_60;
		L_60 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_59, /*hidden argument*/NULL);
		V_4 = L_60;
		float L_61;
		L_61 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_58) < ((float)((float)((float)L_61/(float)(-2.0f)))))))
		{
			goto IL_0195;
		}
	}
	{
		// Panels[i].anchoredPosition += offset;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_62;
		L_62 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_66 = L_65;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		L_67 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_66, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69;
		L_69 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_67, L_68, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_66, L_69, /*hidden argument*/NULL);
	}

IL_0195:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_70 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_019b:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_71 = V_5;
		int32_t L_72;
		L_72 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00f4;
		}
	}

IL_01a8:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSwipeGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSwipeGestures_m632A347079CB47AFF043DF297E16BAB3865A2337 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B3_0 = NULL;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B4_1 = NULL;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B6_0 = NULL;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * G_B7_1 = NULL;
	{
		// if (useSwipeGestures)
		bool L_0 = __this->get_useSwipeGestures_15();
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// ScrollRect.horizontal = (movementType == MovementType.Free) || (movementAxis == MovementAxis.Horizontal);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_1;
		L_1 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_movementType_4();
		G_B2_0 = L_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B3_0 = L_1;
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = __this->get_movementAxis_5();
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		ScrollRect_set_horizontal_m45564FC7DD17DE132CCC1A843C6D83A9635C3BB4_inline(G_B4_1, (bool)G_B4_0, /*hidden argument*/NULL);
		// ScrollRect.vertical   = (movementType == MovementType.Free) || (movementAxis == MovementAxis.Vertical);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_4;
		L_4 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_movementType_4();
		G_B5_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B6_0 = L_4;
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = __this->get_movementAxis_5();
		G_B7_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		G_B7_1 = G_B5_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0043:
	{
		ScrollRect_set_vertical_m25BA9647871AD3CADF2A26CB938BE5418A13C22E_inline(G_B7_1, (bool)G_B7_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0049:
	{
		// ScrollRect.horizontal = ScrollRect.vertical = !isDragging;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_7;
		L_7 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_8;
		L_8 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		bool L_9 = __this->get_isDragging_37();
		int32_t L_10 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		V_0 = (bool)L_10;
		ScrollRect_set_vertical_m25BA9647871AD3CADF2A26CB938BE5418A13C22E_inline(L_8, (bool)L_10, /*hidden argument*/NULL);
		bool L_11 = V_0;
		ScrollRect_set_horizontal_m45564FC7DD17DE132CCC1A843C6D83A9635C3BB4_inline(L_7, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleTransitionEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleTransitionEffects_m598DD41E6E3742F3ED4A79E18781429273364C7C (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m39D61B692E7260E4FAB22A67E15961F0593DBB08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// if (onTransitionEffects.GetPersistentEventCount() == 0) return;
		UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * L_0 = __this->get_onTransitionEffects_26();
		int32_t L_1;
		L_1 = UnityEventBase_GetPersistentEventCount_mE56E380D74081F0CB5AAAE2628A67719873B97A9(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (onTransitionEffects.GetPersistentEventCount() == 0) return;
		return;
	}

IL_000e:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_0 = 0;
		goto IL_0060;
	}

IL_0012:
	{
		// Vector2 displacement = GetDisplacementFromCenter(i);
		int32_t L_2 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// float d = (movementType == MovementType.Free) ? displacement.magnitude : ((movementAxis == MovementAxis.Horizontal) ? displacement.x : displacement.y);
		int32_t L_4 = __this->get_movementType_4();
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = __this->get_movementAxis_5();
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_1;
		float L_7 = L_6.get_y_1();
		G_B8_0 = L_7;
		goto IL_0042;
	}

IL_0033:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_1;
		float L_9 = L_8.get_x_0();
		G_B8_0 = L_9;
		goto IL_0042;
	}

IL_003b:
	{
		float L_10;
		L_10 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		G_B8_0 = L_10;
	}

IL_0042:
	{
		V_2 = G_B8_0;
		// onTransitionEffects.Invoke(Panels[i].gameObject, d);
		UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * L_11 = __this->get_onTransitionEffects_26();
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_12;
		L_12 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		float L_17 = V_2;
		UnityEvent_2_Invoke_m39D61B692E7260E4FAB22A67E15961F0593DBB08(L_11, L_16, L_17, /*hidden argument*/UnityEvent_2_Invoke_m39D61B692E7260E4FAB22A67E15961F0593DBB08_RuntimeMethod_var);
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SelectPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SelectPanel_m2ACE747E8995712B44568CB606D430FE714D4F19 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int nearestPanel = GetNearestPanel();
		int32_t L_0;
		L_0 = SimpleScrollSnap_GetNearestPanel_m9F071790BD0284CC585151DB78668D291320DD9D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector2 displacementFromCenter = GetDisplacementFromCenter(nearestPanel);
		int32_t L_1 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (snapTarget == SnapTarget.Nearest || releaseSpeed <= minimumSwipeSpeed)
		int32_t L_3 = __this->get_snapTarget_21();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		float L_4 = __this->get_releaseSpeed_36();
		float L_5 = __this->get_minimumSwipeSpeed_16();
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_002d;
		}
	}

IL_0025:
	{
		// GoToPanel(nearestPanel);
		int32_t L_6 = V_0;
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// if (snapTarget == SnapTarget.Previous)
		int32_t L_7 = __this->get_snapTarget_21();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_00a3;
		}
	}
	{
		// if ((releaseDirection == Direction.Right && displacementFromCenter.x < 0f) || (releaseDirection == Direction.Up   && displacementFromCenter.y < 0f))
		int32_t L_8 = __this->get_releaseDirection_35();
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_004c;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_1;
		float L_10 = L_9.get_x_0();
		if ((((float)L_10) < ((float)(0.0f))))
		{
			goto IL_0061;
		}
	}

IL_004c:
	{
		int32_t L_11 = __this->get_releaseDirection_35();
		if (L_11)
		{
			goto IL_0068;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_1;
		float L_13 = L_12.get_y_1();
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}

IL_0061:
	{
		// GoToNextPanel();
		SimpleScrollSnap_GoToNextPanel_m579457C7130CCC02C3719E471700559890D09147(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0068:
	{
		// if ((releaseDirection == Direction.Left  && displacementFromCenter.x > 0f) || (releaseDirection == Direction.Down && displacementFromCenter.y > 0f))
		int32_t L_14 = __this->get_releaseDirection_35();
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		float L_16 = L_15.get_x_0();
		if ((((float)L_16) > ((float)(0.0f))))
		{
			goto IL_0094;
		}
	}

IL_007e:
	{
		int32_t L_17 = __this->get_releaseDirection_35();
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_1;
		float L_19 = L_18.get_y_1();
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}

IL_0094:
	{
		// GoToPreviousPanel();
		SimpleScrollSnap_GoToPreviousPanel_m27C0C8E6EF873664B4A89FD4887BE5D94FD17563(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009b:
	{
		// GoToPanel(nearestPanel);
		int32_t L_20 = V_0;
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a3:
	{
		// if (snapTarget == SnapTarget.Next)
		int32_t L_21 = __this->get_snapTarget_21();
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_0118;
		}
	}
	{
		// if ((releaseDirection == Direction.Right && displacementFromCenter.x > 0f) || (releaseDirection == Direction.Up   && displacementFromCenter.y > 0f))
		int32_t L_22 = __this->get_releaseDirection_35();
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_00c2;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_1;
		float L_24 = L_23.get_x_0();
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_00d7;
		}
	}

IL_00c2:
	{
		int32_t L_25 = __this->get_releaseDirection_35();
		if (L_25)
		{
			goto IL_00de;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_1;
		float L_27 = L_26.get_y_1();
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_00de;
		}
	}

IL_00d7:
	{
		// GoToPreviousPanel();
		SimpleScrollSnap_GoToPreviousPanel_m27C0C8E6EF873664B4A89FD4887BE5D94FD17563(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00de:
	{
		// if ((releaseDirection == Direction.Left  && displacementFromCenter.x < 0f) || (releaseDirection == Direction.Down && displacementFromCenter.y < 0f))
		int32_t L_28 = __this->get_releaseDirection_35();
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_00f4;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_1;
		float L_30 = L_29.get_x_0();
		if ((((float)L_30) < ((float)(0.0f))))
		{
			goto IL_010a;
		}
	}

IL_00f4:
	{
		int32_t L_31 = __this->get_releaseDirection_35();
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_1;
		float L_33 = L_32.get_y_1();
		if ((!(((float)L_33) < ((float)(0.0f)))))
		{
			goto IL_0111;
		}
	}

IL_010a:
	{
		// GoToNextPanel();
		SimpleScrollSnap_GoToNextPanel_m579457C7130CCC02C3719E471700559890D09147(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0111:
	{
		// GoToPanel(nearestPanel);
		int32_t L_34 = V_0;
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, L_34, /*hidden argument*/NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SnapToPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SnapToPanel_m5C044044F290314DF7F83CAC59320C3E49741E59 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B10_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B11_2;
	memset((&G_B11_2), 0, sizeof(G_B11_2));
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B11_3 = NULL;
	{
		// float xOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Horizontal) ? Viewport.rect.width  / 2f : 0f;
		int32_t L_0 = __this->get_movementType_4();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_movementAxis_5();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		G_B4_0 = (0.0f);
		goto IL_0032;
	}

IL_0018:
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		L_3 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		float L_4;
		L_4 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		G_B4_0 = ((float)((float)L_4/(float)(2.0f)));
	}

IL_0032:
	{
		V_0 = G_B4_0;
		// float yOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Vertical)   ? Viewport.rect.height / 2f : 0f;
		int32_t L_5 = __this->get_movementType_4();
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6 = __this->get_movementAxis_5();
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_0066;
	}

IL_004c:
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9;
		L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		G_B8_0 = ((float)((float)L_9/(float)(2.0f)));
	}

IL_0066:
	{
		V_1 = G_B8_0;
		// Vector2 offset = new Vector2(xOffset, yOffset);
		float L_10 = V_0;
		float L_11 = V_1;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), L_10, L_11, /*hidden argument*/NULL);
		// Vector2 targetPosition = -Panels[CenteredPanel].anchoredPosition + offset;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_12;
		L_12 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		// Content.anchoredPosition = Vector2.Lerp(Content.anchoredPosition, targetPosition, (useUnscaledTime ? Time.unscaledDeltaTime : Time.deltaTime) * snapSpeed);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_20;
		L_20 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21;
		L_21 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_21, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_3;
		bool L_24 = __this->get_useUnscaledTime_25();
		G_B9_0 = L_23;
		G_B9_1 = L_22;
		G_B9_2 = L_20;
		if (L_24)
		{
			G_B10_0 = L_23;
			G_B10_1 = L_22;
			G_B10_2 = L_20;
			goto IL_00af;
		}
	}
	{
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B11_0 = L_25;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_00b4;
	}

IL_00af:
	{
		float L_26;
		L_26 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		G_B11_0 = L_26;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_00b4:
	{
		float L_27 = __this->get_snapSpeed_22();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(G_B11_2, G_B11_1, ((float)il2cpp_codegen_multiply((float)G_B11_0, (float)L_27)), /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(G_B11_3, L_28, /*hidden argument*/NULL);
		// if (SelectedPanel != CenteredPanel)
		int32_t L_29;
		L_29 = SimpleScrollSnap_get_SelectedPanel_m0D82A2F00F925D099F54AAAD26BBDF0AF5E89B94_inline(__this, /*hidden argument*/NULL);
		int32_t L_30;
		L_30 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_0128;
		}
	}
	{
		// if (GetDisplacementFromCenter(CenteredPanel).magnitude < (Viewport.rect.width / 10f))
		int32_t L_31;
		L_31 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		float L_33;
		L_33 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_34;
		L_34 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_35;
		L_35 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		float L_36;
		L_36 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_33) < ((float)((float)((float)L_36/(float)(10.0f)))))))
		{
			goto IL_013f;
		}
	}
	{
		// onPanelCentered.Invoke(CenteredPanel, SelectedPanel);
		UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * L_37 = __this->get_onPanelCentered_30();
		int32_t L_38;
		L_38 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		int32_t L_39;
		L_39 = SimpleScrollSnap_get_SelectedPanel_m0D82A2F00F925D099F54AAAD26BBDF0AF5E89B94_inline(__this, /*hidden argument*/NULL);
		UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87(L_37, L_38, L_39, /*hidden argument*/UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87_RuntimeMethod_var);
		// SelectedPanel = CenteredPanel;
		int32_t L_40;
		L_40 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		SimpleScrollSnap_set_SelectedPanel_mF0404B61F0DA045CB5AF0C835F0AE32E4ADB9EC0_inline(__this, L_40, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0128:
	{
		// onPanelCentering.Invoke(CenteredPanel, SelectedPanel);
		UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * L_41 = __this->get_onPanelCentering_29();
		int32_t L_42;
		L_42 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		int32_t L_43;
		L_43 = SimpleScrollSnap_get_SelectedPanel_m0D82A2F00F925D099F54AAAD26BBDF0AF5E89B94_inline(__this, /*hidden argument*/NULL);
		UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87(L_41, L_42, L_43, /*hidden argument*/UnityEvent_2_Invoke_m34DB41D1C86A81DD95B86A50D91F8F7564942F87_RuntimeMethod_var);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___panelNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CenteredPanel = panelNumber;
		int32_t L_0 = ___panelNumber0;
		SimpleScrollSnap_set_CenteredPanel_m0319A63D6715A64CD0E9A29B926A7DA3107D59AF_inline(__this, L_0, /*hidden argument*/NULL);
		// isSelected = true;
		__this->set_isSelected_39((bool)1);
		// onPanelSelected.Invoke(SelectedPanel);
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_1 = __this->get_onPanelSelected_28();
		int32_t L_2;
		L_2 = SimpleScrollSnap_get_SelectedPanel_m0D82A2F00F925D099F54AAAD26BBDF0AF5E89B94_inline(__this, /*hidden argument*/NULL);
		UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var);
		// if (pagination != null)
		ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * L_3 = __this->get_pagination_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// Toggles[panelNumber].isOn = true;
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_5;
		L_5 = SimpleScrollSnap_get_Toggles_m77F892973EB51C696EAC13D98C5926DE4BB08A43_inline(__this, /*hidden argument*/NULL);
		int32_t L_6 = ___panelNumber0;
		int32_t L_7 = L_6;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// if (useHardSnapping)
		bool L_9 = __this->get_useHardSnapping_24();
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		// ScrollRect.inertia = false;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_10;
		L_10 = SimpleScrollSnap_get_ScrollRect_m0AB36A84F19A4C5F0299F5E5E3C1F5B746BF32DE(__this, /*hidden argument*/NULL);
		ScrollRect_set_inertia_m9CE7BE08CEB308DC8B9335436B901D557B4E6718_inline(L_10, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPreviousPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPreviousPanel_m27C0C8E6EF873664B4A89FD4887BE5D94FD17563 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int nearestPanel = GetNearestPanel();
		int32_t L_0;
		L_0 = SimpleScrollSnap_GetNearestPanel_m9F071790BD0284CC585151DB78668D291320DD9D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (nearestPanel != 0)
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// GoToPanel(nearestPanel - 1);
		int32_t L_2 = V_0;
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0014:
	{
		// if (useInfiniteScrolling)
		bool L_3 = __this->get_useInfiniteScrolling_11();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// GoToPanel(NumberOfPanels - 1);
		int32_t L_4;
		L_4 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_002b:
	{
		// GoToPanel(nearestPanel);
		int32_t L_5 = V_0;
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToNextPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToNextPanel_m579457C7130CCC02C3719E471700559890D09147 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int nearestPanel = GetNearestPanel();
		int32_t L_0;
		L_0 = SimpleScrollSnap_GetNearestPanel_m9F071790BD0284CC585151DB78668D291320DD9D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (nearestPanel != (NumberOfPanels - 1))
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_001c;
		}
	}
	{
		// GoToPanel(nearestPanel + 1);
		int32_t L_3 = V_0;
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// if (useInfiniteScrolling)
		bool L_4 = __this->get_useInfiniteScrolling_11();
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// GoToPanel(0);
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002c:
	{
		// GoToPanel(nearestPanel);
		int32_t L_5 = V_0;
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::AddToFront(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_AddToFront_m63B8719B78A2842DC869F8A67F055850EA653DEE (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel0, const RuntimeMethod* method)
{
	{
		// Add(panel, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___panel0;
		SimpleScrollSnap_Add_mAF31142ECC103BDAF9F8DFCCCFCE6AD7B9FE5ABC(__this, L_0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::AddToBack(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_AddToBack_mB55CD67182C4B8ECC1D8B33C9B0E72FB41F937E0 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel0, const RuntimeMethod* method)
{
	{
		// Add(panel, NumberOfPanels);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___panel0;
		int32_t L_1;
		L_1 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		SimpleScrollSnap_Add_mAF31142ECC103BDAF9F8DFCCCFCE6AD7B9FE5ABC(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Add(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Add_mAF31142ECC103BDAF9F8DFCCCFCE6AD7B9FE5ABC (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB0945819C5326140A0BC104F36B4FA157BE230);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (NumberOfPanels != 0 && (index < 0 || index > NumberOfPanels))
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = ___index1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___index1;
		int32_t L_3;
		L_3 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}

IL_0015:
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> Index must be an integer from 0 to " + NumberOfPanels + ".", gameObject);
		int32_t L_4;
		L_4 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010, L_5, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_6, L_7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003e:
	{
		// else if (!useAutomaticLayout)
		bool L_8 = __this->get_useAutomaticLayout_6();
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> \"Automatic Layout\" must be enabled for content to be dynamically added during runtime.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral8EB0945819C5326140A0BC104F36B4FA157BE230, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0051:
	{
		// panel = Instantiate(panel, Content, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___panel0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10;
		L_10 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7(L_9, L_10, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		___panel0 = L_11;
		// panel.transform.SetSiblingIndex(index);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = ___panel0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___index1;
		Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC(L_13, L_14, /*hidden argument*/NULL);
		// if (ValidConfig)
		bool L_15;
		L_15 = SimpleScrollSnap_get_ValidConfig_mC80991631A62982B73F38D14D37262951250AC0A(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009f;
		}
	}
	{
		// if (CenteredPanel <= index)
		int32_t L_16;
		L_16 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		int32_t L_17 = ___index1;
		if ((((int32_t)L_16) > ((int32_t)L_17)))
		{
			goto IL_008b;
		}
	}
	{
		// startingPanel = CenteredPanel;
		int32_t L_18;
		L_18 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		__this->set_startingPanel_14(L_18);
		// }
		goto IL_0099;
	}

IL_008b:
	{
		// startingPanel = CenteredPanel + 1;
		int32_t L_19;
		L_19 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		__this->set_startingPanel_14(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
	}

IL_0099:
	{
		// Setup();
		SimpleScrollSnap_Setup_m3E3510726881461F1A4B94B8B9FF4386775B1D5E(__this, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::RemoveFromFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_RemoveFromFront_m3BFB93640F13690440FB66DD693D11D0758D287D (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// Remove(0);
		SimpleScrollSnap_Remove_mF3A79F3EAA5BEE5AF3685E784F67560809810A7A(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::RemoveFromBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_RemoveFromBack_m80E131C15F48832E1AA187AE5D4121A0D699A47E (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// if (NumberOfPanels > 0)
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// Remove(NumberOfPanels - 1);
		int32_t L_1;
		L_1 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		SimpleScrollSnap_Remove_mF3A79F3EAA5BEE5AF3685E784F67560809810A7A(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0018:
	{
		// Remove(0);
		SimpleScrollSnap_Remove_mF3A79F3EAA5BEE5AF3685E784F67560809810A7A(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Remove_mF3A79F3EAA5BEE5AF3685E784F67560809810A7A (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204F19AE4DAE1232C3425CBB1CDD81D3BC74A2FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BA32DD97AC34607D5300A2A6A2FBAF0E7FA4432);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (NumberOfPanels == 0)
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> There are no panels to remove.", gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(_stringLiteral3BA32DD97AC34607D5300A2A6A2FBAF0E7FA4432, L_1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// else if (index < 0 || index > (NumberOfPanels - 1))
		int32_t L_2 = ___index0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))))
		{
			goto IL_0053;
		}
	}

IL_0028:
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> Index must be an integer from 0 to " + (NumberOfPanels - 1) + ".", gameObject);
		int32_t L_5;
		L_5 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010, L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_7, L_8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0053:
	{
		// else if (!useAutomaticLayout)
		bool L_9 = __this->get_useAutomaticLayout_6();
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> \"Automatic Layout\" must be enabled for content to be dynamically removed during runtime.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral204F19AE4DAE1232C3425CBB1CDD81D3BC74A2FF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0066:
	{
		// DestroyImmediate(Panels[index].gameObject);
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_10;
		L_10 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = ___index0;
		int32_t L_12 = L_11;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_14, /*hidden argument*/NULL);
		// if (ValidConfig)
		bool L_15;
		L_15 = SimpleScrollSnap_get_ValidConfig_mC80991631A62982B73F38D14D37262951250AC0A(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		// if (CenteredPanel == index)
		int32_t L_16;
		L_16 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		int32_t L_17 = ___index0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00b0;
		}
	}
	{
		// if (index == NumberOfPanels)
		int32_t L_18 = ___index0;
		int32_t L_19;
		L_19 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_00a2;
		}
	}
	{
		// startingPanel = CenteredPanel - 1;
		int32_t L_20;
		L_20 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		__this->set_startingPanel_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		// }
		goto IL_00d5;
	}

IL_00a2:
	{
		// startingPanel = CenteredPanel;
		int32_t L_21;
		L_21 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		__this->set_startingPanel_14(L_21);
		// }
		goto IL_00d5;
	}

IL_00b0:
	{
		// else if (CenteredPanel < index)
		int32_t L_22;
		L_22 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		int32_t L_23 = ___index0;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00c7;
		}
	}
	{
		// startingPanel = CenteredPanel;
		int32_t L_24;
		L_24 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		__this->set_startingPanel_14(L_24);
		// }
		goto IL_00d5;
	}

IL_00c7:
	{
		// startingPanel = CenteredPanel - 1;
		int32_t L_25;
		L_25 = SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline(__this, /*hidden argument*/NULL);
		__this->set_startingPanel_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)));
	}

IL_00d5:
	{
		// Setup();
		SimpleScrollSnap_Setup_m3E3510726881461F1A4B94B8B9FF4386775B1D5E(__this, /*hidden argument*/NULL);
	}

IL_00db:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetDisplacementFromCenter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Panels[index].anchoredPosition + Content.anchoredPosition - new Vector2(Viewport.rect.width * (0.5f - Content.anchorMin.x), Viewport.rect.height * (0.5f - Content.anchorMin.y));
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_0;
		L_0 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		int32_t L_2 = L_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_3, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_4, L_6, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8;
		L_8 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		L_9 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11;
		L_11 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_14;
		L_14 = SimpleScrollSnap_get_Viewport_mF90EC07B18D71285982B384F5F50D9E44F78023A(__this, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		L_15 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		float L_16;
		L_16 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_17;
		L_17 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), ((float)il2cpp_codegen_multiply((float)L_10, (float)((float)il2cpp_codegen_subtract((float)(0.5f), (float)L_13)))), ((float)il2cpp_codegen_multiply((float)L_16, (float)((float)il2cpp_codegen_subtract((float)(0.5f), (float)L_19)))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_7, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetNearestPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_GetNearestPanel_m9F071790BD0284CC585151DB78668D291320DD9D (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// float[] distances = new float[NumberOfPanels];
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_mB2C1F7F5EE1FF898D0807CF7DEBCF10678DCCEDA(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < Panels.Length; i++)
		V_3 = 0;
		goto IL_0027;
	}

IL_0010:
	{
		// distances[i] = GetDisplacementFromCenter(i).magnitude;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = V_0;
		int32_t L_3 = V_3;
		int32_t L_4 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = SimpleScrollSnap_GetDisplacementFromCenter_mDDE94F7E7394FFE462FA60CEE46FCA8339535505(__this, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		float L_6;
		L_6 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (float)L_6);
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_8 = V_3;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_9;
		L_9 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// int nearestPanel = 0;
		V_1 = 0;
		// float minDistance = Mathf.Min(distances);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_0;
		float L_11;
		L_11 = Mathf_Min_mBFD6E1F7B1716EB3113CDEA310FA42D8968E16AF(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// for (int i = 0; i < Panels.Length; i++)
		V_5 = 0;
		goto IL_0052;
	}

IL_0040:
	{
		// if (minDistance == distances[i])
		float L_12 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = V_0;
		int32_t L_14 = V_5;
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((float)L_12) == ((float)L_16))))
		{
			goto IL_004c;
		}
	}
	{
		// nearestPanel = i;
		int32_t L_17 = V_5;
		V_1 = L_17;
		// break;
		goto IL_005e;
	}

IL_004c:
	{
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0052:
	{
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_19 = V_5;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_20;
		L_20 = SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0040;
		}
	}

IL_005e:
	{
		// return nearestPanel;
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GetVelocity_mC10F4052E03C80A0E14D1E51630EEFE3A5ED3CD8 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// Vector2 displacement = Content.anchoredPosition - prevAnchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_prevAnchoredPosition_33();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float time = useUnscaledTime ? Time.unscaledDeltaTime : Time.deltaTime;
		bool L_4 = __this->get_useUnscaledTime_25();
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002b;
	}

IL_0026:
	{
		float L_6;
		L_6 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002b:
	{
		V_1 = G_B3_0;
		// velocity = displacement / time;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_7, L_8, /*hidden argument*/NULL);
		__this->set_velocity_34(L_9);
		// prevAnchoredPosition = Content.anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10;
		L_10 = SimpleScrollSnap_get_Content_mF8A82E1077782F69BF39985BE17A71909D70EE00(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_10, /*hidden argument*/NULL);
		__this->set_prevAnchoredPosition_33(L_11);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap__ctor_mF9F87CCC6153CFADD97185C79DF9CDA06C0775D9 (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m151E9574F9A4E7DC0EDB30507168BD79321F5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool useAutomaticLayout = true;
		__this->set_useAutomaticLayout_6((bool)1);
		// [SerializeField] private float automaticLayoutSpacing = 0.25f;
		__this->set_automaticLayoutSpacing_7((0.25f));
		// [SerializeField] private SizeControl sizeControl = SizeControl.Fit;
		__this->set_sizeControl_8(1);
		// [SerializeField] private Vector2 size = new Vector2(400, 250);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (400.0f), (250.0f), /*hidden argument*/NULL);
		__this->set_size_9(L_0);
		// [SerializeField] private Margins automaticLayoutMargins = new Margins(0);
		Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 * L_1 = (Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3 *)il2cpp_codegen_object_new(Margins_tE92CAEEDD27D5A642D20E5FC1EA4E7A885C5E9C3_il2cpp_TypeInfo_var);
		Margins__ctor_mBB0DD9B2E091868E491062EA18ED08B93C82EE11(L_1, (0.0f), /*hidden argument*/NULL);
		__this->set_automaticLayoutMargins_10(L_1);
		// [SerializeField] private float infiniteScrollingSpacing = 0.25f;
		__this->set_infiniteScrollingSpacing_12((0.25f));
		// [SerializeField] private bool useSwipeGestures = true;
		__this->set_useSwipeGestures_15((bool)1);
		// [SerializeField] private bool useToggleNavigation = true;
		__this->set_useToggleNavigation_20((bool)1);
		// [SerializeField] private SnapTarget snapTarget = SnapTarget.Next;
		__this->set_snapTarget_21(2);
		// [SerializeField] private float snapSpeed = 10f;
		__this->set_snapSpeed_22((10.0f));
		// [SerializeField] private float thresholdSpeedToSnap = -1f;
		__this->set_thresholdSpeedToSnap_23((-1.0f));
		// [SerializeField] private bool useHardSnapping = true;
		__this->set_useHardSnapping_24((bool)1);
		// [SerializeField] private UnityEvent<GameObject, float> onTransitionEffects = new UnityEvent<GameObject, float>();
		UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 * L_2 = (UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694 *)il2cpp_codegen_object_new(UnityEvent_2_tFAD6B58D9E8001FB6D15B9C96142A2594F635694_il2cpp_TypeInfo_var);
		UnityEvent_2__ctor_m151E9574F9A4E7DC0EDB30507168BD79321F5F13(L_2, /*hidden argument*/UnityEvent_2__ctor_m151E9574F9A4E7DC0EDB30507168BD79321F5F13_RuntimeMethod_var);
		__this->set_onTransitionEffects_26(L_2);
		// [SerializeField] private UnityEvent<int> onPanelSelecting = new UnityEvent<int>();
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_3 = (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *)il2cpp_codegen_object_new(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF_il2cpp_TypeInfo_var);
		UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF(L_3, /*hidden argument*/UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
		__this->set_onPanelSelecting_27(L_3);
		// [SerializeField] private UnityEvent<int> onPanelSelected = new UnityEvent<int>();
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_4 = (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *)il2cpp_codegen_object_new(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF_il2cpp_TypeInfo_var);
		UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF(L_4, /*hidden argument*/UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
		__this->set_onPanelSelected_28(L_4);
		// [SerializeField] private UnityEvent<int, int> onPanelCentering = new UnityEvent<int, int>();
		UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * L_5 = (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 *)il2cpp_codegen_object_new(UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3_il2cpp_TypeInfo_var);
		UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67(L_5, /*hidden argument*/UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67_RuntimeMethod_var);
		__this->set_onPanelCentering_29(L_5);
		// [SerializeField] private UnityEvent<int, int> onPanelCentered = new UnityEvent<int, int>();
		UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 * L_6 = (UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3 *)il2cpp_codegen_object_new(UnityEvent_2_t4466EA6EFC69AB8918D65EEDF0ADB0A9DCC7B8E3_il2cpp_TypeInfo_var);
		UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67(L_6, /*hidden argument*/UnityEvent_2__ctor_m5BD689AC7009890F9F24391FEBF7AE883CFF2B67_RuntimeMethod_var);
		__this->set_onPanelCentered_30(L_6);
		// private bool isDragging, isPressing, isSelected = true;
		__this->set_isSelected_39((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.TranslateZ::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateZ_OnTransition_m3B07F5D42F8BA245E4EF479FE3A2E44377E7BD20 (TranslateZ_t22F9BC427D52DA03ACAEAA1196684B1B1395E5D1 * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform0, float ___distance1, const RuntimeMethod* method)
{
	{
		// rectTransform.localPosition = new Vector3(rectTransform.localPosition.x, rectTransform.localPosition.y, distance);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___rectTransform0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ___rectTransform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = ___distance1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.TranslateZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateZ__ctor_m97F8AA800ACEB13175A3770FC5BCB531BD713DF9 (TranslateZ_t22F9BC427D52DA03ACAEAA1196684B1B1395E5D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD(__this, /*hidden argument*/TransitionEffectBase_1__ctor_m65789FACC61189EAD5170F37407838C7721427DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NestedScrollRect/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mA9245CA93DE640746FD550905D4671B20FBE1492 (U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass2_0::<OnInitializePotentialDrag>b__0(UnityEngine.EventSystems.IInitializePotentialDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_m929E6567D6D0A898C3CA0EB06A5127E7DD72C46D (U3CU3Ec__DisplayClass2_0_t67AEEFB6645E44CD7597EC1A510C882232539BFD * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IInitializePotentialDragHandler>((parent) => { parent.OnInitializePotentialDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = __this->get_eventData_0();
		InterfaceActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(0 /* System.Void UnityEngine.EventSystems.IInitializePotentialDragHandler::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData) */, IInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IInitializePotentialDragHandler>((parent) => { parent.OnInitializePotentialDrag(eventData); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NestedScrollRect/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mCB3A9E4C9139A8270169C13A09373304BF4BEB3E (U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass3_0::<OnDrag>b__0(UnityEngine.EventSystems.IDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_m5ED3E70C6469D1C8435FF0FB574A98A2E02A9E4C (U3CU3Ec__DisplayClass3_0_t1DF2366E72E14E002FEEF150F3EAA06362A0608D * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IDragHandler>((parent) => { parent.OnDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = __this->get_eventData_0();
		InterfaceActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(0 /* System.Void UnityEngine.EventSystems.IDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData) */, IDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IDragHandler>((parent) => { parent.OnDrag(eventData); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NestedScrollRect/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m6E9CB49224E2E0E4FD0D661FF61EDAAE000643D0 (U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass4_0::<OnBeginDrag>b__0(UnityEngine.EventSystems.IBeginDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m858E600CB2002B9A67F5DDD2A36BC37596348475 (U3CU3Ec__DisplayClass4_0_t3B4EA02A76D2F64B8B1ABDB2608F3FF9E52CB2BB * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IBeginDragHandler>((parent) => { parent.OnBeginDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = __this->get_eventData_0();
		InterfaceActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(0 /* System.Void UnityEngine.EventSystems.IBeginDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData) */, IBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IBeginDragHandler>((parent) => { parent.OnBeginDrag(eventData); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NestedScrollRect/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mBA379345F78CCADF142579334D1588009A7AD3AC (U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass5_0::<OnEndDrag>b__0(UnityEngine.EventSystems.IEndDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m1EC5067F27D48CDC5615162D709C7EC9E905FDA8 (U3CU3Ec__DisplayClass5_0_t15DB5EBA2F0B05B8AAA2C565DBD4E80762735C94 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IEndDragHandler>((parent) => { parent.OnEndDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = __this->get_eventData_0();
		InterfaceActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(0 /* System.Void UnityEngine.EventSystems.IEndDragHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData) */, IEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IEndDragHandler>((parent) => { parent.OnEndDrag(eventData); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass150_0__ctor_m62FBC782260757259149BDAEE82A4B059623C6A3 (U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::<Setup>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD92C87E3B3E707759309B32E39AA6A7801D57616 (U3CU3Ec__DisplayClass150_0_tD3275707AA6E99C1983CE788AD93E9DEC6EF8D3A * __this, bool ___isOn0, const RuntimeMethod* method)
{
	{
		// if (isOn && useToggleNavigation)
		bool L_0 = ___isOn0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * L_1 = __this->get_U3CU3E4__this_1();
		bool L_2 = L_1->get_useToggleNavigation_20();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// GoToPanel(panelNumber);
		SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * L_3 = __this->get_U3CU3E4__this_1();
		int32_t L_4 = __this->get_panelNumber_0();
		SimpleScrollSnap_GoToPanel_mD199C89ED09F7EFD3ACB0FEDA5E3DB134C48A1B6(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_m3C85C37B4136F69E47ACFAF287D05FC4104E5C8A_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method)
{
	{
		// public bool horizontal { get { return m_Horizontal; } set { m_Horizontal = value; } }
		bool L_0 = __this->get_m_Horizontal_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 delta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CdeltaU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_mC44745C3E8AC6BF41C3C2D3FA0AEDED3DE96B4EA_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method)
{
	{
		// public bool vertical { get { return m_Vertical; } set { m_Vertical = value; } }
		bool L_0 = __this->get_m_Vertical_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ScrollRect_get_content_m80081CD9D9D066BB138099E6495390B37071C3B0_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method)
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_m_Content_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ScrollRect_get_viewport_m5F19B84F9A457DB423884801E0D58F53FE371382_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method)
{
	{
		// public RectTransform viewport { get { return m_Viewport; } set { m_Viewport = value; SetDirtyCaching(); } }
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_m_Viewport_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_m6CBDADD5F61163917B37C922FA6F42170D68E1D9_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_m_Velocity_25(L_0);
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_inertia_m9CE7BE08CEB308DC8B9335436B901D557B4E6718_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool inertia { get { return m_Inertia; } set { m_Inertia = value; } }
		bool L_0 = ___value0;
		__this->set_m_Inertia_9(L_0);
		// public bool inertia { get { return m_Inertia; } set { m_Inertia = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleScrollSnap_get_Velocity_mEDF9065918A14683185826A533DAFF7660ED2841_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get => velocity;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_velocity_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_horizontal_m45564FC7DD17DE132CCC1A843C6D83A9635C3BB4_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool horizontal { get { return m_Horizontal; } set { m_Horizontal = value; } }
		bool L_0 = ___value0;
		__this->set_m_Horizontal_5(L_0);
		// public bool horizontal { get { return m_Horizontal; } set { m_Horizontal = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_vertical_m25BA9647871AD3CADF2A26CB938BE5418A13C22E_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool vertical { get { return m_Vertical; } set { m_Vertical = value; } }
		bool L_0 = ___value0;
		__this->set_m_Vertical_6(L_0);
		// public bool vertical { get { return m_Vertical; } set { m_Vertical = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Panels_m4891D7CE39044D5E50FD80BFD3E3AEB8B573883D_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_0 = ___value0;
		__this->set_U3CPanelsU3Ek__BackingField_40(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* SimpleScrollSnap_get_Panels_m23293CD32A72C7C1D0615EE04F30D62F1FBC4215_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* L_0 = __this->get_U3CPanelsU3Ek__BackingField_40();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_movementType_m63E3C04ECBDA708AF2341564DB987227D32075CC_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public MovementType movementType { get { return m_MovementType; } set { m_MovementType = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_MovementType_7(L_0);
		// public MovementType movementType { get { return m_MovementType; } set { m_MovementType = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_CenteredPanel_m0319A63D6715A64CD0E9A29B926A7DA3107D59AF_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->set_U3CCenteredPanelU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SelectedPanel_mF0404B61F0DA045CB5AF0C835F0AE32E4ADB9EC0_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->set_U3CSelectedPanelU3Ek__BackingField_42(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Toggles_mC8E601AC938E9B8D241BEEF882657539D48B483B_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_0 = ___value0;
		__this->set_U3CTogglesU3Ek__BackingField_41(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* SimpleScrollSnap_get_Toggles_m77F892973EB51C696EAC13D98C5926DE4BB08A43_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_0 = __this->get_U3CTogglesU3Ek__BackingField_41();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ScrollRect_get_velocity_mF5519EB702F5A1BCBDA6EE50CE92EEFA3398BDC6_inline (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Velocity_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_CenteredPanel_mCF2557F27DE4D3F06D34EEE75CDFE931E0139A73_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		int32_t L_0 = __this->get_U3CCenteredPanelU3Ek__BackingField_43();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SelectedPanel_m0D82A2F00F925D099F54AAAD26BBDF0AF5E89B94_inline (SimpleScrollSnap_t7474440D06FFF6142B58481C451589326F075EBA * __this, const RuntimeMethod* method)
{
	{
		// get;
		int32_t L_0 = __this->get_U3CSelectedPanelU3Ek__BackingField_42();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
