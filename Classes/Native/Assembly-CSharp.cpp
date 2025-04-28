#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<OpenAI.ChatChoice>
struct List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7;
// System.Collections.Generic.List`1<OpenAI.ChatMessage>
struct List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<TashkeelLocation>
struct List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A;
// System.Collections.Generic.List`1<LMNT.Voice>
struct List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Singleton`1<System.Object>
struct Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6;
// Singleton`1<SceneHandler>
struct Singleton_1_t99EC8D7BCB6CB1FB4535D7C2EB95147799F47307;
// System.Threading.Tasks.TaskFactory`1<OpenAI.CreateAudioResponse>
struct TaskFactory_1_t0A71E72CA921548F223CA4EB1DDE21E1FEC77D4B;
// System.Threading.Tasks.TaskFactory`1<OpenAI.CreateChatCompletionResponse>
struct TaskFactory_1_t2D4E9C0F5BB829EE4527C999EC3877F59D8D3216;
// System.Threading.Tasks.Task`1<OpenAI.CreateAudioResponse>
struct Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC;
// System.Threading.Tasks.Task`1<OpenAI.CreateChatCompletionResponse>
struct Task_1_tB06322DA7E0BAFA03E208104476B69321735E857;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// ArabicMapping[]
struct ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// OpenAI.ChatChoice[]
struct ChatChoiceU5BU5D_tC7107F42B5513D60F6F2EA43A52E8466B349527F;
// OpenAI.ChatMessage[]
struct ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ExpectedFixedText[]
struct ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TashkeelLocation[]
struct TashkeelLocationU5BU5D_tBD4EE4BFCB8428109BE1E329CB727336ECB96D81;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// OpenAI.ApiError
struct ApiError_t95257A66869E82C2B377D29F652C558134F425F3;
// ArabicSupport.ArabicFixer
struct ArabicFixer_t5BB0DCB99F68BE86B55A83D0E771BCBDD37CC506;
// ArabicFixerTool
struct ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB;
// ArabicSupportTester
struct ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F;
// ArabicTable
struct ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// OpenAI.ChatGPT
struct ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// OpenAI.Configuration
struct Configuration_t5D4A33292919ACD94A06FD00FEC2DC58660409A4;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// OpenAI.CreateAudioRequestBase
struct CreateAudioRequestBase_tCA06401BB3B22BD68CAD0938762735639032EE37;
// OpenAI.CreateAudioTranscriptionsRequest
struct CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5;
// OpenAI.CreateChatCompletionRequest
struct CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// ExpectedFixedText
struct ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905;
// FixArabic3DText
struct FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// LMNT.LMNTSpeech
struct LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391;
// MainMenuManager
struct MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OpenAI.OpenAIApi
struct OpenAIApi_t37D34FF04EE303920B197698E066D46690409358;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// OpenAI.ResponseFormat
struct ResponseFormat_t409B53EF04A59B49C984C6A07D0B12AC6F12B1DA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneHandler
struct SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SplashHandler
struct SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TashkeelLocation
struct TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Samples.Whisper.Whisper
struct Whisper_t040840F57AC0FA9437055017743EAC88324F0133;
// ayatHandler
struct ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6;
// controlHandler
struct controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E;
// test
struct test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E;
// test2
struct test2_tAC072E98B60D1882D8695A71BB8936FC539A7F3D;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SplashHandler/<fadeInLogoStart>d__9
struct U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// ayatHandler/<playingSlider>d__7
struct U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18;

IL2CPP_EXTERN_C RuntimeClass* ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenAIApi_t37D34FF04EE303920B197698E066D46690409358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04CF5DCC9299F6A635E80650A8A05DBAD6182371;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral42DC18D5482A9265FB2B285DA7CBF657A4D1E816;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral630365A1428284D8409B41129255F2A889392EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral6B181C4DCAEFCD50EE68E94CD195AE3CE3CE179F;
IL2CPP_EXTERN_C String_t* _stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8BAB4EFCC45B11BCA22CF21741FEA17F12C04BCC;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralB39FE49AA0A07EE7F891681B4E5614C4EBA6AF8A;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralB9EAA8CF89E736A6EF2B3B248DC522A1230B5A72;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF115E270D623AB648FBD5F258DA1C3F4838512;
IL2CPP_EXTERN_C String_t* _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198;
IL2CPP_EXTERN_C String_t* _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEC4411933A437D5B2063CF4F96EBBC95BDE08FF6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_m94D01B7C6D04F5074891008812983C969310F31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m302BE6A0034C34D3BBF2A9D55323448EECD7409A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_mDA1C0D4A95C0679D1C3507FA77C02CBB935F561F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m1ACD63C6F7F93343BF7BCB8A59509C2968F30FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatGPT_SendReply_m8D5B3D47A949B695894E815F523F87CC2C8C647D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEFA85E87EFE96A0DA9EC3412E5619299B4C639D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4677E1D12773F2C27F6C43292C8B394599717060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m52B116E4C818D4955AC7635BA1303337DD5DCABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_mD32D74AB9E7BA6EDABCF489C5D23B3C26A0171F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m89D91DFE9BF0AC01BC9A2CD51D7A9FBDA31DF8A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m1540F5EB2ECE9F69F5B5B72B08568280D6C2F6C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m193D51537F32243B55AC441656FBF79CA1B585D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m32BB67BC3C6D368D82F702F187BA7813CF448228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m14FD36A19DF06E013E0DD66ABDA6102333793F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m6455141A98E9D8015C7FA26F2EB89429C266ABEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6860B74B2491ADF920B317FFEE4967F8D00D8D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mB1E29B728FE365D629E2860A761CF50794423023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CfadeInLogoStartU3Ed__9_System_Collections_IEnumerator_Reset_m92AA5BE349439E6BCE1FB5246200D3D290B94AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CplayingSliderU3Ed__7_System_Collections_IEnumerator_Reset_m4F328DAACFEDB91E54300A93737680B71EF4F4D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Whisper_ChangeMicrophone_m456A8473D9993FB0D4A540051CF6EBE42FCD5F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Whisper_StartRecording_m599B464E487CB6B6A332EF2847631E118B3395FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863;
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8;
struct ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<OpenAI.ChatChoice>
struct List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChatChoiceU5BU5D_tC7107F42B5513D60F6F2EA43A52E8466B349527F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<OpenAI.ChatMessage>
struct List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TashkeelLocation>
struct List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TashkeelLocationU5BU5D_tBD4EE4BFCB8428109BE1E329CB727336ECB96D81* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ArabicSupport.ArabicFixer
struct ArabicFixer_t5BB0DCB99F68BE86B55A83D0E771BCBDD37CC506  : public RuntimeObject
{
};

// ArabicFixerTool
struct ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB  : public RuntimeObject
{
};

// ArabicTable
struct ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// OpenAI.OpenAIApi
struct OpenAIApi_t37D34FF04EE303920B197698E066D46690409358  : public RuntimeObject
{
	// OpenAI.Configuration OpenAI.OpenAIApi::configuration
	Configuration_t5D4A33292919ACD94A06FD00FEC2DC58660409A4* ___configuration_0;
	// Newtonsoft.Json.JsonSerializerSettings OpenAI.OpenAIApi::jsonSerializerSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___jsonSerializerSettings_2;
};

// Samples.Whisper.SaveWav
struct SaveWav_t3658C8EFE8D9ED310686A8EC889D7D4CA127A3D1  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// TashkeelLocation
struct TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E  : public RuntimeObject
{
	// System.Char TashkeelLocation::tashkeel
	Il2CppChar ___tashkeel_0;
	// System.Int32 TashkeelLocation::position
	int32_t ___position_1;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// SplashHandler/<fadeInLogoStart>d__9
struct U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54  : public RuntimeObject
{
	// System.Int32 SplashHandler/<fadeInLogoStart>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SplashHandler/<fadeInLogoStart>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SplashHandler SplashHandler/<fadeInLogoStart>d__9::<>4__this
	SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* ___U3CU3E4__this_2;
};

// ayatHandler/<playingSlider>d__7
struct U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18  : public RuntimeObject
{
	// System.Int32 ayatHandler/<playingSlider>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ayatHandler/<playingSlider>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ayatHandler ayatHandler/<playingSlider>d__7::<>4__this
	ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* ___U3CU3E4__this_2;
	// System.Single ayatHandler/<playingSlider>d__7::<i>5__2
	float ___U3CiU3E5__2_3;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>
struct TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>
struct TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tB06322DA7E0BAFA03E208104476B69321735E857* ___m_task_0;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// ArabicMapping
struct ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 
{
	// System.Int32 ArabicMapping::from
	int32_t ___from_0;
	// System.Int32 ArabicMapping::to
	int32_t ___to_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// OpenAI.ChatMessage
struct ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E 
{
	// System.String OpenAI.ChatMessage::<Role>k__BackingField
	String_t* ___U3CRoleU3Ek__BackingField_0;
	// System.String OpenAI.ChatMessage::<Content>k__BackingField
	String_t* ___U3CContentU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of OpenAI.ChatMessage
struct ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E_marshaled_pinvoke
{
	char* ___U3CRoleU3Ek__BackingField_0;
	char* ___U3CContentU3Ek__BackingField_1;
};
// Native definition for COM marshalling of OpenAI.ChatMessage
struct ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E_marshaled_com
{
	Il2CppChar* ___U3CRoleU3Ek__BackingField_0;
	Il2CppChar* ___U3CContentU3Ek__BackingField_1;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// OpenAI.CreateAudioResponse
struct CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D 
{
	// OpenAI.ApiError OpenAI.CreateAudioResponse::<Error>k__BackingField
	ApiError_t95257A66869E82C2B377D29F652C558134F425F3* ___U3CErrorU3Ek__BackingField_0;
	// System.String OpenAI.CreateAudioResponse::<Warning>k__BackingField
	String_t* ___U3CWarningU3Ek__BackingField_1;
	// System.String OpenAI.CreateAudioResponse::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of OpenAI.CreateAudioResponse
struct CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D_marshaled_pinvoke
{
	ApiError_t95257A66869E82C2B377D29F652C558134F425F3* ___U3CErrorU3Ek__BackingField_0;
	char* ___U3CWarningU3Ek__BackingField_1;
	char* ___U3CTextU3Ek__BackingField_2;
};
// Native definition for COM marshalling of OpenAI.CreateAudioResponse
struct CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D_marshaled_com
{
	ApiError_t95257A66869E82C2B377D29F652C558134F425F3* ___U3CErrorU3Ek__BackingField_0;
	Il2CppChar* ___U3CWarningU3Ek__BackingField_1;
	Il2CppChar* ___U3CTextU3Ek__BackingField_2;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// OpenAI.FileData
struct FileData_t3BC40227BA3F20D3C3E350864D813F0942085852 
{
	// System.Byte[] OpenAI.FileData::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_0;
	// System.String OpenAI.FileData::Name
	String_t* ___Name_1;
};
// Native definition for P/Invoke marshalling of OpenAI.FileData
struct FileData_t3BC40227BA3F20D3C3E350864D813F0942085852_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Data_0;
	char* ___Name_1;
};
// Native definition for COM marshalling of OpenAI.FileData
struct FileData_t3BC40227BA3F20D3C3E350864D813F0942085852_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Data_0;
	Il2CppChar* ___Name_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// OpenAI.Usage
struct Usage_t9339621BCFD1155AFC109D9C3BD2FECA50CA3021 
{
	// System.String OpenAI.Usage::<PromptTokens>k__BackingField
	String_t* ___U3CPromptTokensU3Ek__BackingField_0;
	// System.String OpenAI.Usage::<CompletionTokens>k__BackingField
	String_t* ___U3CCompletionTokensU3Ek__BackingField_1;
	// System.String OpenAI.Usage::<TotalTokens>k__BackingField
	String_t* ___U3CTotalTokensU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of OpenAI.Usage
struct Usage_t9339621BCFD1155AFC109D9C3BD2FECA50CA3021_marshaled_pinvoke
{
	char* ___U3CPromptTokensU3Ek__BackingField_0;
	char* ___U3CCompletionTokensU3Ek__BackingField_1;
	char* ___U3CTotalTokensU3Ek__BackingField_2;
};
// Native definition for COM marshalling of OpenAI.Usage
struct Usage_t9339621BCFD1155AFC109D9C3BD2FECA50CA3021_marshaled_com
{
	Il2CppChar* ___U3CPromptTokensU3Ek__BackingField_0;
	Il2CppChar* ___U3CCompletionTokensU3Ek__BackingField_1;
	Il2CppChar* ___U3CTotalTokensU3Ek__BackingField_2;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// ArabicFixerTool/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588 
{
	// System.Int32 ArabicFixerTool/<>c__DisplayClass4_0::lastSplitIndex
	int32_t ___lastSplitIndex_0;
};

// ArabicFixerTool/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25 
{
	// System.Collections.Generic.List`1<System.Char> ArabicFixerTool/<>c__DisplayClass6_0::numberList
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___numberList_0;
};

// System.Threading.Tasks.Task`1<OpenAI.CreateAudioResponse>
struct Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D ___m_result_22;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// OpenAI.ChatChoice
struct ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305 
{
	// OpenAI.ChatMessage OpenAI.ChatChoice::<Message>k__BackingField
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ___U3CMessageU3Ek__BackingField_0;
	// OpenAI.ChatMessage OpenAI.ChatChoice::<Delta>k__BackingField
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ___U3CDeltaU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> OpenAI.ChatChoice::<Index>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CIndexU3Ek__BackingField_2;
	// System.String OpenAI.ChatChoice::<FinishReason>k__BackingField
	String_t* ___U3CFinishReasonU3Ek__BackingField_3;
	// System.String OpenAI.ChatChoice::<Logprobs>k__BackingField
	String_t* ___U3CLogprobsU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of OpenAI.ChatChoice
struct ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305_marshaled_pinvoke
{
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E_marshaled_pinvoke ___U3CMessageU3Ek__BackingField_0;
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E_marshaled_pinvoke ___U3CDeltaU3Ek__BackingField_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CIndexU3Ek__BackingField_2;
	char* ___U3CFinishReasonU3Ek__BackingField_3;
	char* ___U3CLogprobsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of OpenAI.ChatChoice
struct ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305_marshaled_com
{
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E_marshaled_com ___U3CMessageU3Ek__BackingField_0;
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E_marshaled_com ___U3CDeltaU3Ek__BackingField_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CIndexU3Ek__BackingField_2;
	Il2CppChar* ___U3CFinishReasonU3Ek__BackingField_3;
	Il2CppChar* ___U3CLogprobsU3Ek__BackingField_4;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// OpenAI.CreateAudioRequestBase
struct CreateAudioRequestBase_tCA06401BB3B22BD68CAD0938762735639032EE37  : public RuntimeObject
{
	// System.String OpenAI.CreateAudioRequestBase::<File>k__BackingField
	String_t* ___U3CFileU3Ek__BackingField_0;
	// OpenAI.FileData OpenAI.CreateAudioRequestBase::<FileData>k__BackingField
	FileData_t3BC40227BA3F20D3C3E350864D813F0942085852 ___U3CFileDataU3Ek__BackingField_1;
	// System.String OpenAI.CreateAudioRequestBase::<Model>k__BackingField
	String_t* ___U3CModelU3Ek__BackingField_2;
	// System.String OpenAI.CreateAudioRequestBase::<Prompt>k__BackingField
	String_t* ___U3CPromptU3Ek__BackingField_3;
	// System.String OpenAI.CreateAudioRequestBase::<ResponseFormat>k__BackingField
	String_t* ___U3CResponseFormatU3Ek__BackingField_4;
	// System.Nullable`1<System.Single> OpenAI.CreateAudioRequestBase::<Temperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CTemperatureU3Ek__BackingField_5;
};

// OpenAI.CreateChatCompletionRequest
struct CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A  : public RuntimeObject
{
	// System.String OpenAI.CreateChatCompletionRequest::<Model>k__BackingField
	String_t* ___U3CModelU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<OpenAI.ChatMessage> OpenAI.CreateChatCompletionRequest::<Messages>k__BackingField
	List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* ___U3CMessagesU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> OpenAI.CreateChatCompletionRequest::<Temperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CTemperatureU3Ek__BackingField_2;
	// System.Int32 OpenAI.CreateChatCompletionRequest::<N>k__BackingField
	int32_t ___U3CNU3Ek__BackingField_3;
	// System.Boolean OpenAI.CreateChatCompletionRequest::<Stream>k__BackingField
	bool ___U3CStreamU3Ek__BackingField_4;
	// System.String OpenAI.CreateChatCompletionRequest::<Stop>k__BackingField
	String_t* ___U3CStopU3Ek__BackingField_5;
	// System.Nullable`1<System.Int32> OpenAI.CreateChatCompletionRequest::<MaxTokens>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMaxTokensU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> OpenAI.CreateChatCompletionRequest::<PresencePenalty>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CPresencePenaltyU3Ek__BackingField_7;
	// System.Nullable`1<System.Single> OpenAI.CreateChatCompletionRequest::<FrequencyPenalty>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CFrequencyPenaltyU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> OpenAI.CreateChatCompletionRequest::<LogitBias>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CLogitBiasU3Ek__BackingField_9;
	// System.String OpenAI.CreateChatCompletionRequest::<User>k__BackingField
	String_t* ___U3CUserU3Ek__BackingField_10;
	// System.String OpenAI.CreateChatCompletionRequest::<SystemFingerprint>k__BackingField
	String_t* ___U3CSystemFingerprintU3Ek__BackingField_11;
	// OpenAI.ResponseFormat OpenAI.CreateChatCompletionRequest::<ResponseFormat>k__BackingField
	ResponseFormat_t409B53EF04A59B49C984C6A07D0B12AC6F12B1DA* ___U3CResponseFormatU3Ek__BackingField_12;
};

// OpenAI.CreateChatCompletionResponse
struct CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073 
{
	// OpenAI.ApiError OpenAI.CreateChatCompletionResponse::<Error>k__BackingField
	ApiError_t95257A66869E82C2B377D29F652C558134F425F3* ___U3CErrorU3Ek__BackingField_0;
	// System.String OpenAI.CreateChatCompletionResponse::<Warning>k__BackingField
	String_t* ___U3CWarningU3Ek__BackingField_1;
	// System.String OpenAI.CreateChatCompletionResponse::<Model>k__BackingField
	String_t* ___U3CModelU3Ek__BackingField_2;
	// System.String OpenAI.CreateChatCompletionResponse::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_3;
	// System.String OpenAI.CreateChatCompletionResponse::<Object>k__BackingField
	String_t* ___U3CObjectU3Ek__BackingField_4;
	// System.Int64 OpenAI.CreateChatCompletionResponse::<Created>k__BackingField
	int64_t ___U3CCreatedU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<OpenAI.ChatChoice> OpenAI.CreateChatCompletionResponse::<Choices>k__BackingField
	List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* ___U3CChoicesU3Ek__BackingField_6;
	// OpenAI.Usage OpenAI.CreateChatCompletionResponse::<Usage>k__BackingField
	Usage_t9339621BCFD1155AFC109D9C3BD2FECA50CA3021 ___U3CUsageU3Ek__BackingField_7;
	// System.String OpenAI.CreateChatCompletionResponse::<SystemFingerprint>k__BackingField
	String_t* ___U3CSystemFingerprintU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of OpenAI.CreateChatCompletionResponse
struct CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073_marshaled_pinvoke
{
	ApiError_t95257A66869E82C2B377D29F652C558134F425F3* ___U3CErrorU3Ek__BackingField_0;
	char* ___U3CWarningU3Ek__BackingField_1;
	char* ___U3CModelU3Ek__BackingField_2;
	char* ___U3CIdU3Ek__BackingField_3;
	char* ___U3CObjectU3Ek__BackingField_4;
	int64_t ___U3CCreatedU3Ek__BackingField_5;
	List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* ___U3CChoicesU3Ek__BackingField_6;
	Usage_t9339621BCFD1155AFC109D9C3BD2FECA50CA3021_marshaled_pinvoke ___U3CUsageU3Ek__BackingField_7;
	char* ___U3CSystemFingerprintU3Ek__BackingField_8;
};
// Native definition for COM marshalling of OpenAI.CreateChatCompletionResponse
struct CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073_marshaled_com
{
	ApiError_t95257A66869E82C2B377D29F652C558134F425F3* ___U3CErrorU3Ek__BackingField_0;
	Il2CppChar* ___U3CWarningU3Ek__BackingField_1;
	Il2CppChar* ___U3CModelU3Ek__BackingField_2;
	Il2CppChar* ___U3CIdU3Ek__BackingField_3;
	Il2CppChar* ___U3CObjectU3Ek__BackingField_4;
	int64_t ___U3CCreatedU3Ek__BackingField_5;
	List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* ___U3CChoicesU3Ek__BackingField_6;
	Usage_t9339621BCFD1155AFC109D9C3BD2FECA50CA3021_marshaled_com ___U3CUsageU3Ek__BackingField_7;
	Il2CppChar* ___U3CSystemFingerprintU3Ek__BackingField_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// GeneralArabicLetters
struct GeneralArabicLetters_t49F91A7941B28F7A4CB185A3355774CC02F6769C 
{
	// System.Int32 GeneralArabicLetters::value__
	int32_t ___value___2;
};

// IsolatedArabicLetters
struct IsolatedArabicLetters_t7034CCD86D29A0A860F89AE727111DC1E70A9E9B 
{
	// System.Int32 IsolatedArabicLetters::value__
	int32_t ___value___2;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.SeekOrigin
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;
};

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380 
{
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/ContentType
struct ContentType_t7E546E516F92E955324D479BB71667931F1A7956 
{
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/InputType
struct InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4 
{
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/LineType
struct LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B 
{
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.RectTransform/Axis
struct Axis_tA9D05896D61BD5FB210C75508AC3D3CACC36745F 
{
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___2;
};

// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_t35B76DF2E479A4C67D7768854404EFB47BF1BBB6 
{
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t04A8B197CECE292E71BBB9145B1CA95BD450383E 
{
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Slider/Direction
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;
};

// Interop/Sys/FileStatusFlags
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	// System.Int32 Interop/Sys/FileStatusFlags::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.Task`1<OpenAI.CreateChatCompletionResponse>
struct Task_1_tB06322DA7E0BAFA03E208104476B69321735E857  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073 ___m_result_22;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// OpenAI.CreateAudioTranscriptionsRequest
struct CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5  : public CreateAudioRequestBase_tCA06401BB3B22BD68CAD0938762735639032EE37
{
	// System.String OpenAI.CreateAudioTranscriptionsRequest::<Language>k__BackingField
	String_t* ___U3CLanguageU3Ek__BackingField_6;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// OpenAI.ChatGPT/<SendReply>d__13
struct U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65 
{
	// System.Int32 OpenAI.ChatGPT/<SendReply>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OpenAI.ChatGPT/<SendReply>d__13::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OpenAI.ChatGPT OpenAI.ChatGPT/<SendReply>d__13::<>4__this
	ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse> OpenAI.ChatGPT/<SendReply>d__13::<>u__1
	TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 ___U3CU3Eu__1_3;
};

// Samples.Whisper.Whisper/<EndRecording>d__13
struct U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF 
{
	// System.Int32 Samples.Whisper.Whisper/<EndRecording>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Samples.Whisper.Whisper/<EndRecording>d__13::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Samples.Whisper.Whisper Samples.Whisper.Whisper/<EndRecording>d__13::<>4__this
	Whisper_t040840F57AC0FA9437055017743EAC88324F0133* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse> Samples.Whisper.Whisper/<EndRecording>d__13::<>u__1
	TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE ___U3CU3Eu__1_3;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// Singleton`1<SceneHandler>
struct Singleton_1_t99EC8D7BCB6CB1FB4535D7C2EB95147799F47307  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ArabicSupportTester
struct ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ExpectedFixedText[] ArabicSupportTester::ExpectedTexts
	ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* ___ExpectedTexts_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// OpenAI.ChatGPT
struct ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField OpenAI.ChatGPT::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_4;
	// UnityEngine.UI.Button OpenAI.ChatGPT::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_5;
	// UnityEngine.UI.ScrollRect OpenAI.ChatGPT::scroll
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scroll_6;
	// UnityEngine.RectTransform OpenAI.ChatGPT::sent
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___sent_7;
	// UnityEngine.RectTransform OpenAI.ChatGPT::received
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___received_8;
	// LMNT.LMNTSpeech OpenAI.ChatGPT::narrator
	LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* ___narrator_9;
	// System.Single OpenAI.ChatGPT::height
	float ___height_10;
	// OpenAI.OpenAIApi OpenAI.ChatGPT::openai
	OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* ___openai_11;
	// System.Collections.Generic.List`1<OpenAI.ChatMessage> OpenAI.ChatGPT::messages
	List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* ___messages_12;
	// System.String OpenAI.ChatGPT::prompt
	String_t* ___prompt_13;
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// ExpectedFixedText
struct ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ExpectedFixedText::Unfixed
	String_t* ___Unfixed_4;
	// System.String ExpectedFixedText::Expected
	String_t* ___Expected_5;
	// System.String ExpectedFixedText::<Fixed>k__BackingField
	String_t* ___U3CFixedU3Ek__BackingField_6;
	// System.Boolean ExpectedFixedText::ShowTashkeel
	bool ___ShowTashkeel_7;
	// System.Boolean ExpectedFixedText::UseHinduNumbers
	bool ___UseHinduNumbers_8;
};

// FixArabic3DText
struct FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FixArabic3DText::showTashkeel
	bool ___showTashkeel_4;
	// System.Boolean FixArabic3DText::useHinduNumbers
	bool ___useHinduNumbers_5;
};

// LMNT.LMNTSpeech
struct LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource LMNT.LMNTSpeech::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_4;
	// System.String LMNT.LMNTSpeech::_apiKey
	String_t* ____apiKey_5;
	// System.Collections.Generic.List`1<LMNT.Voice> LMNT.LMNTSpeech::_voiceList
	List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* ____voiceList_6;
	// UnityEngine.Networking.DownloadHandlerAudioClip LMNT.LMNTSpeech::_handler
	DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* ____handler_7;
	// System.String LMNT.LMNTSpeech::voice
	String_t* ___voice_8;
	// System.String LMNT.LMNTSpeech::dialogue
	String_t* ___dialogue_9;
};

// MainMenuManager
struct MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainMenuManager::loginScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginScreen_4;
	// UnityEngine.GameObject MainMenuManager::MainMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MainMenu_5;
};

// SplashHandler
struct SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image SplashHandler::logo
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___logo_4;
	// UnityEngine.GameObject SplashHandler::splash
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___splash_5;
	// UnityEngine.GameObject SplashHandler::tutorial1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tutorial1_6;
	// UnityEngine.GameObject SplashHandler::tutorial2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tutorial2_7;
	// UnityEngine.GameObject SplashHandler::tutorial3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tutorial3_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Samples.Whisper.Whisper
struct Whisper_t040840F57AC0FA9437055017743EAC88324F0133  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Samples.Whisper.Whisper::recordButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___recordButton_4;
	// UnityEngine.UI.Image Samples.Whisper.Whisper::progressBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___progressBar_5;
	// UnityEngine.UI.Text Samples.Whisper.Whisper::message
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___message_6;
	// UnityEngine.UI.Dropdown Samples.Whisper.Whisper::dropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdown_7;
	// System.String Samples.Whisper.Whisper::fileName
	String_t* ___fileName_8;
	// System.Int32 Samples.Whisper.Whisper::duration
	int32_t ___duration_9;
	// UnityEngine.AudioClip Samples.Whisper.Whisper::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_10;
	// System.Boolean Samples.Whisper.Whisper::isRecording
	bool ___isRecording_11;
	// System.Single Samples.Whisper.Whisper::time
	float ___time_12;
	// OpenAI.OpenAIApi Samples.Whisper.Whisper::openai
	OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* ___openai_13;
};

// ayatHandler
struct ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ayatHandler::duration
	float ___duration_4;
	// UnityEngine.UI.Slider ayatHandler::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// controlHandler ayatHandler::controls
	controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* ___controls_6;
};

// controlHandler
struct controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] controlHandler::allAyat
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___allAyat_4;
	// UnityEngine.AudioClip[] controlHandler::allAyatAudios
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___allAyatAudios_5;
	// UnityEngine.AudioSource controlHandler::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
	// ayatHandler controlHandler::currentAyat
	ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* ___currentAyat_7;
	// System.Int32 controlHandler::currentAyatIndex
	int32_t ___currentAyatIndex_8;
	// System.Int32 controlHandler::totalAyat
	int32_t ___totalAyat_9;
	// UnityEngine.UI.Button controlHandler::playBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___playBtn_10;
};

// test
struct test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// test2
struct test2_tAC072E98B60D1882D8695A71BB8936FC539A7F3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// SceneHandler
struct SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E  : public Singleton_1_t99EC8D7BCB6CB1FB4535D7C2EB95147799F47307
{
	// System.Boolean SceneHandler::isStart
	bool ___isStart_5;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
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
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
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
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_23;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_24;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_25;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_26;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_27;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_28;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_29;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_30;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_31;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_34;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_35;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_37;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_38;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_39;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_40;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_42;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_43;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_46;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_47;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_48;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_49;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_50;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_51;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_52;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_53;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_54;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_55;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_56;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_59;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_60;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_63;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_64;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_65;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_66;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_67;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_68;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_69;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_70;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_73;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Char>

// System.Collections.Generic.List`1<OpenAI.ChatChoice>
struct List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChatChoiceU5BU5D_tC7107F42B5513D60F6F2EA43A52E8466B349527F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<OpenAI.ChatChoice>

// System.Collections.Generic.List`1<OpenAI.ChatMessage>
struct List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<OpenAI.ChatMessage>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<TashkeelLocation>
struct List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TashkeelLocationU5BU5D_tBD4EE4BFCB8428109BE1E329CB727336ECB96D81* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TashkeelLocation>

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>

// ArabicSupport.ArabicFixer

// ArabicSupport.ArabicFixer

// ArabicFixerTool
struct ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields
{
	// System.Boolean ArabicFixerTool::showTashkeel
	bool ___showTashkeel_0;
	// System.Boolean ArabicFixerTool::combineTashkeel
	bool ___combineTashkeel_1;
	// System.Boolean ArabicFixerTool::useHinduNumbers
	bool ___useHinduNumbers_2;
	// System.Text.StringBuilder ArabicFixerTool::internalStringBuilder
	StringBuilder_t* ___internalStringBuilder_3;
};

// ArabicFixerTool

// ArabicTable
struct ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields
{
	// ArabicMapping[] ArabicTable::mapList
	ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* ___mapList_0;
	// ArabicTable ArabicTable::arabicMapper
	ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* ___arabicMapper_1;
};

// ArabicTable

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// OpenAI.OpenAIApi

// OpenAI.OpenAIApi

// Samples.Whisper.SaveWav

// Samples.Whisper.SaveWav

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// TashkeelLocation

// TashkeelLocation

// UnityEngine.UI.Dropdown/OptionData

// UnityEngine.UI.Dropdown/OptionData

// SplashHandler/<fadeInLogoStart>d__9

// SplashHandler/<fadeInLogoStart>d__9

// ayatHandler/<playingSlider>d__7

// ayatHandler/<playingSlider>d__7

// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// ArabicMapping

// ArabicMapping

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// OpenAI.ChatMessage

// OpenAI.ChatMessage

// UnityEngine.Color

// UnityEngine.Color

// OpenAI.CreateAudioResponse

// OpenAI.CreateAudioResponse

// OpenAI.FileData

// OpenAI.FileData

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt16

// System.UInt16

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// ArabicFixerTool/<>c__DisplayClass4_0

// ArabicFixerTool/<>c__DisplayClass4_0

// ArabicFixerTool/<>c__DisplayClass6_0

// ArabicFixerTool/<>c__DisplayClass6_0

// System.Threading.Tasks.Task`1<OpenAI.CreateAudioResponse>
struct Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0A71E72CA921548F223CA4EB1DDE21E1FEC77D4B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<OpenAI.CreateAudioResponse>

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// OpenAI.ChatChoice

// OpenAI.ChatChoice

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// OpenAI.CreateAudioRequestBase

// OpenAI.CreateAudioRequestBase

// OpenAI.CreateChatCompletionRequest

// OpenAI.CreateChatCompletionRequest

// OpenAI.CreateChatCompletionResponse

// OpenAI.CreateChatCompletionResponse

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// GeneralArabicLetters

// GeneralArabicLetters

// IsolatedArabicLetters

// IsolatedArabicLetters

// System.IO.MemoryStream

// System.IO.MemoryStream

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.IO.SeekOrigin

// System.IO.SeekOrigin

// System.StringSplitOptions

// System.StringSplitOptions

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Dropdown/DropdownEvent

// UnityEngine.UI.Dropdown/DropdownEvent

// UnityEngine.RectTransform/Axis

// UnityEngine.RectTransform/Axis

// System.Threading.Tasks.Task`1<OpenAI.CreateChatCompletionResponse>
struct Task_1_tB06322DA7E0BAFA03E208104476B69321735E857_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2D4E9C0F5BB829EE4527C999EC3877F59D8D3216* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<OpenAI.CreateChatCompletionResponse>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// OpenAI.CreateAudioTranscriptionsRequest

// OpenAI.CreateAudioTranscriptionsRequest

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// OpenAI.ChatGPT/<SendReply>d__13

// OpenAI.ChatGPT/<SendReply>d__13

// Samples.Whisper.Whisper/<EndRecording>d__13

// Samples.Whisper.Whisper/<EndRecording>d__13

// UnityEngine.Events.UnityAction`1<System.Int32>

// UnityEngine.Events.UnityAction`1<System.Int32>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.TextMesh

// UnityEngine.TextMesh

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// Singleton`1<SceneHandler>
struct Singleton_1_t99EC8D7BCB6CB1FB4535D7C2EB95147799F47307_StaticFields
{
	// T Singleton`1::instance
	SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* ___instance_4;
};

// Singleton`1<SceneHandler>

// ArabicSupportTester

// ArabicSupportTester

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// OpenAI.ChatGPT

// OpenAI.ChatGPT

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// ExpectedFixedText

// ExpectedFixedText

// FixArabic3DText

// FixArabic3DText

// LMNT.LMNTSpeech

// LMNT.LMNTSpeech

// MainMenuManager

// MainMenuManager

// SplashHandler

// SplashHandler

// Samples.Whisper.Whisper

// Samples.Whisper.Whisper

// ayatHandler

// ayatHandler

// controlHandler

// controlHandler

// test

// test

// test2

// test2

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// SceneHandler

// SceneHandler

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_22;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ArabicMapping[]
struct ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863  : public RuntimeArray
{
	ALIGN_FIELD (8) ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 m_Items[1];

	inline ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// ExpectedFixedText[]
struct ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464  : public RuntimeArray
{
	ALIGN_FIELD (8) ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* m_Items[1];

	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OpenAI.ChatMessage[]
struct ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8  : public RuntimeArray
{
	ALIGN_FIELD (8) ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E m_Items[1];

	inline ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CRoleU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CContentU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
	inline ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CRoleU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CContentU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Char>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_mA9E44B4C4951B6DC9272B74375A0AA8C1B9932A0_gshared (const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared (Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Samples.Whisper.Whisper/<EndRecording>d__13>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_mDA1C0D4A95C0679D1C3507FA77C02CBB935F561F_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<OpenAI.CreateAudioResponse>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE Task_1_GetAwaiter_mB1E29B728FE365D629E2860A761CF50794423023_gshared (Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m14FD36A19DF06E013E0DD66ABDA6102333793F16_gshared (TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>,Samples.Whisper.Whisper/<EndRecording>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_m94D01B7C6D04F5074891008812983C969310F31F_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE* ___0_awaiter, U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D TaskAwaiter_1_GetResult_m32BB67BC3C6D368D82F702F187BA7813CF448228_gshared (TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OpenAI.ChatGPT/<SendReply>d__13>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m1ACD63C6F7F93343BF7BCB8A59509C2968F30FCD_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<OpenAI.ChatMessage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAEFA85E87EFE96A0DA9EC3412E5619299B4C639D_gshared (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<OpenAI.ChatMessage>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_gshared_inline (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<OpenAI.ChatMessage>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_gshared_inline (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ___0_item, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<OpenAI.CreateChatCompletionResponse>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 Task_1_GetAwaiter_m6860B74B2491ADF920B317FFEE4967F8D00D8D4C_gshared (Task_1_tB06322DA7E0BAFA03E208104476B69321735E857* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m6455141A98E9D8015C7FA26F2EB89429C266ABEC_gshared (TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>,OpenAI.ChatGPT/<SendReply>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m302BE6A0034C34D3BBF2A9D55323448EECD7409A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845* ___0_awaiter, U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073 TaskAwaiter_1_GetResult_m193D51537F32243B55AC441656FBF79CA1B585D8_gshared (TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<OpenAI.ChatChoice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_gshared_inline (List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<OpenAI.ChatChoice>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305 List_1_get_Item_m52B116E4C818D4955AC7635BA1303337DD5DCABB_gshared (List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<OpenAI.ChatMessage>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E List_1_get_Item_m4677E1D12773F2C27F6C43292C8B394599717060_gshared (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// System.Void ArabicMapping::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87 (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* __this, int32_t ___0_from, int32_t ___1_to, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ArabicTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicTable__ctor_m8DBFC22F7BD81894CCE65CBB978E36260CAE4440 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TashkeelLocation>::.ctor()
inline void List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6 (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_EnsureCapacity_m0ACFF70F6095FD8F19167AF977F539A8EE7A3DB2 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void TashkeelLocation::.ctor(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313 (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* __this, Il2CppChar ___0_tashkeel, int32_t ___1_position, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TashkeelLocation>::Add(T)
inline void List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void ArabicFixerTool::<RemoveTashkeel>g__IncrementSB|4_0(System.String&,System.Int32,ArabicFixerTool/<>c__DisplayClass4_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023 (String_t** ___0_str, int32_t ___1_i, U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588* ___2_p, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TashkeelLocation>::get_Item(System.Int32)
inline TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<TashkeelLocation>::get_Count()
inline int32_t List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_inline (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Array::Resize<System.Char>(T[]&,System.Int32)
inline void Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**, int32_t, const RuntimeMethod*))Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_gshared)(___0_array, ___1_newSize, method);
}
// System.Void ArabicFixerTool::RemoveTashkeel(System.String&,System.Collections.Generic.List`1<TashkeelLocation>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_RemoveTashkeel_m0E4E36A9007B120016F25E27BEF55FB5BA340A65 (String_t** ___0_str, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** ___1_tashkeelLocation, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// ArabicTable ArabicTable::get_ArabicMapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* ArabicTable_get_ArabicMapper_m4CE6FA5ADE6C9C306AB6771B631F21C3A4F65841 (const RuntimeMethod* method) ;
// System.Int32 ArabicTable::Convert(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArabicTable_Convert_mD6DD8122E0D6CA1E33760E3FDBEE7D1E6CFA69A4 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, int32_t ___0_toBeConverted, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsIgnoredCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsIgnoredCharacter_mD4266BD327FCF7EA06B0805129FEA7104088A046 (Il2CppChar ___0_ch, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsMiddleLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsMiddleLetter_m9610EB7249C81792676BF357316EA65849F1942F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_letters, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsFinishingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsFinishingLetter_m34D81454EFE842A4E5135A5BBB5A1C8493B19FD1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_letters, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsLeadingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsLeadingLetter_m3020D74BCBE1755BEA9E0402A92A371769B46CCE (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_letters, int32_t ___1_index, const RuntimeMethod* method) ;
// System.UInt16 ArabicFixerTool::HandleInduNumber(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ArabicFixerTool_HandleInduNumber_m74868F441AFAFF997372C58178527EC27C1A54F0 (uint16_t ___0_letterOrigin, uint16_t ___1_letterFinal, const RuntimeMethod* method) ;
// System.Void ArabicFixerTool::ReturnTashkeel(System.Char[]&,System.Collections.Generic.List`1<TashkeelLocation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_ReturnTashkeel_m1CE5222851AC104F805BD1BDE874B6FABA380A3F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___0_letters, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* ___1_tashkeelLocation, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsPunctuation(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLower(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsNumber(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Void ArabicFixerTool::<FixLine>g__AddNumber|6_0(System.Char,ArabicFixerTool/<>c__DisplayClass6_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB (Il2CppChar ___0_value, U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* ___1_p, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsSymbol(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Void ArabicFixerTool::<FixLine>g__AppendNumbers|6_1(ArabicFixerTool/<>c__DisplayClass6_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_U3CFixLineU3Eg__AppendNumbersU7C6_1_m1C3530E832EBFA4938CD73CDF6CB644FA1C31505 (U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
inline void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
inline void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
inline int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
inline Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, const RuntimeMethod*))List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
inline void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2 (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, const RuntimeMethod* method) ;
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7 (String_t* ___0_str, bool ___1_showTashkeel, bool ___2_useHinduNumbers, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void ExpectedFixedText::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText_Fix_mEB1489C852AF322CC8F11E7AA83AFC8DB59A6D3F (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) ;
// System.Void ExpectedFixedText::set_Fixed(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823_inline (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ayatHandler::playingSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ayatHandler_playingSlider_mDF6AF8C294DEE579930060804187B5F98F7E75CF (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void ayatHandler/<playingSlider>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayingSliderU3Ed__7__ctor_mD3CE88BEA84C183D20A25CA9FFB4F5314BBE79B8 (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ayatHandler>()
inline ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ayatHandler::playSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ayatHandler_playSlider_m6F09A0F3983A6838061381C49F8490A3D4CEE3CC (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void SplashHandler::fadeInLogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashHandler_fadeInLogo_m867628BBD6B88770EBEBE44960E0BA103B2A44EB (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SplashHandler::fadeInLogoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashHandler_fadeInLogoStart_m8DF59048154C764A3D01A8143FBB307926E61873 (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) ;
// System.Void SplashHandler/<fadeInLogoStart>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeInLogoStartU3Ed__9__ctor_m9AFC688994ECF74FCCDE266E285AB2EC28077506 (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// T Singleton`1<SceneHandler>::get_Instance()
inline SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* Singleton_1_get_Instance_m1540F5EB2ECE9F69F5B5B72B08568280D6C2F6C0 (const RuntimeMethod* method)
{
	return ((  SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mA9E44B4C4951B6DC9272B74375A0AA8C1B9932A0_gshared)(method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void Singleton`1<SceneHandler>::.ctor()
inline void Singleton_1__ctor_m89D91DFE9BF0AC01BC9A2CD51D7A9FBDA31DF8A0 (Singleton_1_t99EC8D7BCB6CB1FB4535D7C2EB95147799F47307* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t99EC8D7BCB6CB1FB4535D7C2EB95147799F47307*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.MemoryStream Samples.Whisper.SaveWav::CreateEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* SaveWav_CreateEmpty_mFD7B36C7BEC1D41A19A124F06B59348F88BEAA65 (const RuntimeMethod* method) ;
// System.Void Samples.Whisper.SaveWav::ConvertAndWrite(System.IO.MemoryStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWav_ConvertAndWrite_mFAA5F2832E15749A10443F93E80C24F42EB4EEAB (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___0_memoryStream, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) ;
// System.Void Samples.Whisper.SaveWav::WriteHeader(System.IO.MemoryStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWav_WriteHeader_mB9BE0EB9A71CC90E62621B7CC753B0FF8BCF10DC (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___0_memoryStream, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_gshared)(__this, ___0_collection, method);
}
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip Samples.Whisper.SaveWav::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* SaveWav_TrimSilence_m0D5042DBB8A9A04094A0B5835D6AF2D6245C32EC (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_samples, float ___1_min, int32_t ___2_channels, int32_t ___3_hz, bool ___4_stream, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_gshared)(__this, ___0_index, ___1_count, method);
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15 (int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9 (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B (uint16_t ___0_value, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(T)
inline void List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___0_call, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::SetValueWithoutNotify(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_SetValueWithoutNotify_m3D2B40BC16D305309D68D9FF093BF25FF66E4ABA (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___0_input, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E (String_t* ___0_deviceName, bool ___1_loop, int32_t ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Samples.Whisper.Whisper/<EndRecording>d__13>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_mDA1C0D4A95C0679D1C3507FA77C02CBB935F561F (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_mDA1C0D4A95C0679D1C3507FA77C02CBB935F561F_gshared)(__this, ___0_stateMachine, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Samples.Whisper.Whisper::EndRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper_EndRecording_m9D847F84356CD702F2983C13AF139E08DC537B5C (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, const RuntimeMethod* method) ;
// System.Void OpenAI.OpenAIApi::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenAIApi__ctor_m53C325BDE15985233E01E7926FA1E5889BA5E9A2 (OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* __this, String_t* ___0_apiKey, String_t* ___1_organization, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Byte[] Samples.Whisper.SaveWav::Save(System.String,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SaveWav_Save_m3FEF0CF06FE2F021A487DDB6613AB484606B4890 (String_t* ___0_filename, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) ;
// System.Void OpenAI.CreateAudioTranscriptionsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAudioTranscriptionsRequest__ctor_m62A7E9BD949E4D23CBE0C23AB2F0F2E8D1A723DE (CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* __this, const RuntimeMethod* method) ;
// System.Void OpenAI.CreateAudioRequestBase::set_FileData(OpenAI.FileData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAudioRequestBase_set_FileData_m4D20581338E8CCB62AB68143F893A5B4DFBEA13E_inline (CreateAudioRequestBase_tCA06401BB3B22BD68CAD0938762735639032EE37* __this, FileData_t3BC40227BA3F20D3C3E350864D813F0942085852 ___0_value, const RuntimeMethod* method) ;
// System.Void OpenAI.CreateAudioRequestBase::set_Model(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAudioRequestBase_set_Model_mA73D044DAA0299585BA057D04067463BFFE98906_inline (CreateAudioRequestBase_tCA06401BB3B22BD68CAD0938762735639032EE37* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void OpenAI.CreateAudioTranscriptionsRequest::set_Language(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAudioTranscriptionsRequest_set_Language_mC9A8B496E87EE8581459314F1042FA1B4B7D2C21_inline (CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<OpenAI.CreateAudioResponse> OpenAI.OpenAIApi::CreateAudioTranscription(OpenAI.CreateAudioTranscriptionsRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC* OpenAIApi_CreateAudioTranscription_m698B86CA1C652042221A08660276571B7D70A0CC (OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* __this, CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* ___0_request, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<OpenAI.CreateAudioResponse>::GetAwaiter()
inline TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE Task_1_GetAwaiter_mB1E29B728FE365D629E2860A761CF50794423023 (Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE (*) (Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC*, const RuntimeMethod*))Task_1_GetAwaiter_mB1E29B728FE365D629E2860A761CF50794423023_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m14FD36A19DF06E013E0DD66ABDA6102333793F16 (TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m14FD36A19DF06E013E0DD66ABDA6102333793F16_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>,Samples.Whisper.Whisper/<EndRecording>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_m94D01B7C6D04F5074891008812983C969310F31F (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE* ___0_awaiter, U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE*, U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_m94D01B7C6D04F5074891008812983C969310F31F_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateAudioResponse>::GetResult()
inline CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D TaskAwaiter_1_GetResult_m32BB67BC3C6D368D82F702F187BA7813CF448228 (TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE* __this, const RuntimeMethod* method)
{
	return ((  CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D (*) (TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m32BB67BC3C6D368D82F702F187BA7813CF448228_gshared)(__this, method);
}
// System.String OpenAI.CreateAudioResponse::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CreateAudioResponse_get_Text_m8CC94CE044BF42DBA31123215EA78004F9956DA5_inline (CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Samples.Whisper.Whisper/<EndRecording>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndRecordingU3Ed__13_MoveNext_mE59009FCFB9D18732059FFD3A8F2FA39724B92D2 (U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Samples.Whisper.Whisper/<EndRecording>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndRecordingU3Ed__13_SetStateMachine_m6FCFACA1AADA214E43B13F381AD325247A998E87 (U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LMNT.LMNTSpeech::Talk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMNTSpeech_Talk_mB2EB264A44A8E60698318B94384948301CE66655 (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, int32_t ___0_axis, float ___1_size, const RuntimeMethod* method) ;
// System.String OpenAI.ChatMessage::get_Role()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatMessage_get_Role_m2AF3E9BD6F1C5BB7D59FBB29CC5E254E1F2CC0FB_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.RectTransform>(T,UnityEngine.Transform)
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_mD32D74AB9E7BA6EDABCF489C5D23B3C26A0171F7 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String OpenAI.ChatMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatMessage_get_Content_m68D8B284E4E04C77B7C34F1150E8363C7381DEE7_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_layoutRoot, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OpenAI.ChatGPT/<SendReply>d__13>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m1ACD63C6F7F93343BF7BCB8A59509C2968F30FCD (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m1ACD63C6F7F93343BF7BCB8A59509C2968F30FCD_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Collections.Generic.List`1<OpenAI.ChatMessage>::.ctor()
inline void List_1__ctor_mAEFA85E87EFE96A0DA9EC3412E5619299B4C639D (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A*, const RuntimeMethod*))List_1__ctor_mAEFA85E87EFE96A0DA9EC3412E5619299B4C639D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void OpenAI.ChatMessage::set_Role(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatMessage_set_Role_m77D061B08D8F9B8C5156748E54E08D16762C3959_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void OpenAI.ChatMessage::set_Content(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatMessage_set_Content_m5CFB48A9023EBBD1676B52D3327683B59B755035_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<OpenAI.ChatMessage>::get_Count()
inline int32_t List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_inline (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A*, const RuntimeMethod*))List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<OpenAI.ChatMessage>::Add(T)
inline void List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_inline (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A*, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E, const RuntimeMethod*))List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_gshared_inline)(__this, ___0_item, method);
}
// System.Void OpenAI.CreateChatCompletionRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateChatCompletionRequest__ctor_m28BA8B15F758C7F0A771BB78397E38C233FD39BF (CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* __this, const RuntimeMethod* method) ;
// System.Void OpenAI.CreateChatCompletionRequest::set_Model(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateChatCompletionRequest_set_Model_mFF52FE86A178367C27D3B527813C828460511504_inline (CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void OpenAI.CreateChatCompletionRequest::set_Messages(System.Collections.Generic.List`1<OpenAI.ChatMessage>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateChatCompletionRequest_set_Messages_m5D4CA6CB032DCDA4922EA09F92C1429098A1E40A_inline (CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* __this, List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<OpenAI.CreateChatCompletionResponse> OpenAI.OpenAIApi::CreateChatCompletion(OpenAI.CreateChatCompletionRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB06322DA7E0BAFA03E208104476B69321735E857* OpenAIApi_CreateChatCompletion_mD1F72597F155AC3FC4B26E3B28EDF355C4D66B0D (OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* __this, CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* ___0_request, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<OpenAI.CreateChatCompletionResponse>::GetAwaiter()
inline TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 Task_1_GetAwaiter_m6860B74B2491ADF920B317FFEE4967F8D00D8D4C (Task_1_tB06322DA7E0BAFA03E208104476B69321735E857* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 (*) (Task_1_tB06322DA7E0BAFA03E208104476B69321735E857*, const RuntimeMethod*))Task_1_GetAwaiter_m6860B74B2491ADF920B317FFEE4967F8D00D8D4C_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m6455141A98E9D8015C7FA26F2EB89429C266ABEC (TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m6455141A98E9D8015C7FA26F2EB89429C266ABEC_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>,OpenAI.ChatGPT/<SendReply>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m302BE6A0034C34D3BBF2A9D55323448EECD7409A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845* ___0_awaiter, U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845*, U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m302BE6A0034C34D3BBF2A9D55323448EECD7409A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<OpenAI.CreateChatCompletionResponse>::GetResult()
inline CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073 TaskAwaiter_1_GetResult_m193D51537F32243B55AC441656FBF79CA1B585D8 (TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845* __this, const RuntimeMethod* method)
{
	return ((  CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073 (*) (TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m193D51537F32243B55AC441656FBF79CA1B585D8_gshared)(__this, method);
}
// System.Collections.Generic.List`1<OpenAI.ChatChoice> OpenAI.CreateChatCompletionResponse::get_Choices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* CreateChatCompletionResponse_get_Choices_m6085CA976C100E75E195316A80CEA9728460ABB7_inline (CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<OpenAI.ChatChoice>::get_Count()
inline int32_t List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_inline (List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7*, const RuntimeMethod*))List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<OpenAI.ChatChoice>::get_Item(System.Int32)
inline ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305 List_1_get_Item_m52B116E4C818D4955AC7635BA1303337DD5DCABB (List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305 (*) (List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7*, int32_t, const RuntimeMethod*))List_1_get_Item_m52B116E4C818D4955AC7635BA1303337DD5DCABB_gshared)(__this, ___0_index, method);
}
// OpenAI.ChatMessage OpenAI.ChatChoice::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ChatChoice_get_Message_mDB91CD71D2C5C44758B9A03DA9338AFE4E31898D_inline (ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<OpenAI.ChatMessage>::get_Item(System.Int32)
inline ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E List_1_get_Item_m4677E1D12773F2C27F6C43292C8B394599717060 (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E (*) (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A*, int32_t, const RuntimeMethod*))List_1_get_Item_m4677E1D12773F2C27F6C43292C8B394599717060_gshared)(__this, ___0_index, method);
}
// System.Void OpenAI.ChatGPT::AppendMessage(OpenAI.ChatMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPT_AppendMessage_mD7F6BE6CF16DBC44663B7DBD1CC88EF22091814F (ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* __this, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void OpenAI.ChatGPT/<SendReply>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendReplyU3Ed__13_MoveNext_mE73F02A2EDDE215CD3CDFC5F8AF875DE0EE2D46A (U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* __this, const RuntimeMethod* method) ;
// System.Void OpenAI.ChatGPT/<SendReply>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendReplyU3Ed__13_SetStateMachine_m7C6AD7ABF4537003405E87A626D7743AFE0FB78B (U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.String ArabicSupport.ArabicFixer::Fix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D (String_t* ___0_str, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String ArabicFixerTool::FixLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207 (String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArabicMapping::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87 (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* __this, int32_t ___0_from, int32_t ___1_to, const RuntimeMethod* method) 
{
	{
		// this.from = from;
		int32_t L_0 = ___0_from;
		__this->___from_0 = L_0;
		// this.to = to;
		int32_t L_1 = ___1_to;
		__this->___to_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87_AdjustorThunk (RuntimeObject* __this, int32_t ___0_from, int32_t ___1_to, const RuntimeMethod* method)
{
	ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*>(__this + _offset);
	ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(_thisAdjusted, ___0_from, ___1_to, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArabicTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicTable__ctor_m8DBFC22F7BD81894CCE65CBB978E36260CAE4440 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ArabicTable()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mapList = new [] {
		//     new ArabicMapping((int)GeneralArabicLetters.Hamza, (int)IsolatedArabicLetters.Hamza),
		//     new ArabicMapping((int)GeneralArabicLetters.Alef, (int)IsolatedArabicLetters.Alef),
		//     new ArabicMapping((int)GeneralArabicLetters.AlefHamza, (int)IsolatedArabicLetters.AlefHamza),
		//     new ArabicMapping((int)GeneralArabicLetters.WawHamza, (int)IsolatedArabicLetters.WawHamza),
		//     new ArabicMapping((int)GeneralArabicLetters.AlefMaksoor, (int)IsolatedArabicLetters.AlefMaksoor),
		//     new ArabicMapping((int)GeneralArabicLetters.AlefMagsora, (int)IsolatedArabicLetters.AlefMaksora),
		//     new ArabicMapping((int)GeneralArabicLetters.HamzaNabera, (int)IsolatedArabicLetters.HamzaNabera),
		//     new ArabicMapping((int)GeneralArabicLetters.Ba, (int)IsolatedArabicLetters.Ba),
		//     new ArabicMapping((int)GeneralArabicLetters.Ta, (int)IsolatedArabicLetters.Ta),
		//     new ArabicMapping((int)GeneralArabicLetters.Tha2, (int)IsolatedArabicLetters.Tha2),
		//     new ArabicMapping((int)GeneralArabicLetters.Jeem, (int)IsolatedArabicLetters.Jeem),
		//     new ArabicMapping((int)GeneralArabicLetters.H7aa, (int)IsolatedArabicLetters.H7aa),
		//     new ArabicMapping((int)GeneralArabicLetters.Khaa2, (int)IsolatedArabicLetters.Khaa2),
		//     new ArabicMapping((int)GeneralArabicLetters.Dal, (int)IsolatedArabicLetters.Dal),
		//     new ArabicMapping((int)GeneralArabicLetters.Thal, (int)IsolatedArabicLetters.Thal),
		//     new ArabicMapping((int)GeneralArabicLetters.Ra2, (int)IsolatedArabicLetters.Ra2),
		//     new ArabicMapping((int)GeneralArabicLetters.Zeen, (int)IsolatedArabicLetters.Zeen),
		//     new ArabicMapping((int)GeneralArabicLetters.Seen, (int)IsolatedArabicLetters.Seen),
		//     new ArabicMapping((int)GeneralArabicLetters.Sheen, (int)IsolatedArabicLetters.Sheen),
		//     new ArabicMapping((int)GeneralArabicLetters.S9a, (int)IsolatedArabicLetters.S9a),
		//     new ArabicMapping((int)GeneralArabicLetters.Dha, (int)IsolatedArabicLetters.Dha),
		//     new ArabicMapping((int)GeneralArabicLetters.T6a, (int)IsolatedArabicLetters.T6a),
		//     new ArabicMapping((int)GeneralArabicLetters.T6ha, (int)IsolatedArabicLetters.T6ha),
		//     new ArabicMapping((int)GeneralArabicLetters.Ain, (int)IsolatedArabicLetters.Ain),
		//     new ArabicMapping((int)GeneralArabicLetters.Gain, (int)IsolatedArabicLetters.Gain),
		//     new ArabicMapping((int)GeneralArabicLetters.Fa, (int)IsolatedArabicLetters.Fa),
		//     new ArabicMapping((int)GeneralArabicLetters.Gaf, (int)IsolatedArabicLetters.Gaf),
		//     new ArabicMapping((int)GeneralArabicLetters.Kaf, (int)IsolatedArabicLetters.Kaf),
		//     new ArabicMapping((int)GeneralArabicLetters.Lam, (int)IsolatedArabicLetters.Lam),
		//     new ArabicMapping((int)GeneralArabicLetters.Meem, (int)IsolatedArabicLetters.Meem),
		//     new ArabicMapping((int)GeneralArabicLetters.Noon, (int)IsolatedArabicLetters.Noon),
		//     new ArabicMapping((int)GeneralArabicLetters.Ha, (int)IsolatedArabicLetters.Ha),
		//     new ArabicMapping((int)GeneralArabicLetters.Waw, (int)IsolatedArabicLetters.Waw),
		//     new ArabicMapping((int)GeneralArabicLetters.Ya, (int)IsolatedArabicLetters.Ya),
		//     new ArabicMapping((int)GeneralArabicLetters.AlefMad, (int)IsolatedArabicLetters.AlefMad),
		//     new ArabicMapping((int)GeneralArabicLetters.TaMarboota, (int)IsolatedArabicLetters.TaMarboota),
		//     new ArabicMapping((int)GeneralArabicLetters.PersianPe, (int)IsolatedArabicLetters.PersianPe),
		//     new ArabicMapping((int)GeneralArabicLetters.PersianChe, (int)IsolatedArabicLetters.PersianChe),
		//     new ArabicMapping((int)GeneralArabicLetters.PersianZe, (int)IsolatedArabicLetters.PersianZe),
		//     new ArabicMapping((int)GeneralArabicLetters.PersianGaf, (int)IsolatedArabicLetters.PersianGaf),
		//     new ArabicMapping((int)GeneralArabicLetters.PersianGaf2, (int)IsolatedArabicLetters.PersianGaf2),
		//     new ArabicMapping((int)GeneralArabicLetters.PersianYeh, (int)IsolatedArabicLetters.PersianYeh)
		// };
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_0 = (ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863*)(ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863*)SZArrayNew(ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_1 = L_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_2), ((int32_t)1569), ((int32_t)65152), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_2);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_3 = L_1;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_4), ((int32_t)1575), ((int32_t)65165), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_4);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_5 = L_3;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_6), ((int32_t)1571), ((int32_t)65155), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_6);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_7 = L_5;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_8), ((int32_t)1572), ((int32_t)65157), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_8);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_9 = L_7;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_10), ((int32_t)1573), ((int32_t)65159), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_10);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_11 = L_9;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_12;
		memset((&L_12), 0, sizeof(L_12));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_12), ((int32_t)1609), ((int32_t)64508), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_12);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_13 = L_11;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_14), ((int32_t)1574), ((int32_t)65161), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_14);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_15 = L_13;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_16), ((int32_t)1576), ((int32_t)65167), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_16);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_17 = L_15;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_18;
		memset((&L_18), 0, sizeof(L_18));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_18), ((int32_t)1578), ((int32_t)65173), /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_18);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_19 = L_17;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_20), ((int32_t)1579), ((int32_t)65177), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_20);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_21 = L_19;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_22;
		memset((&L_22), 0, sizeof(L_22));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_22), ((int32_t)1580), ((int32_t)65181), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_22);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_23 = L_21;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_24;
		memset((&L_24), 0, sizeof(L_24));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_24), ((int32_t)1581), ((int32_t)65185), /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_24);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_25 = L_23;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_26;
		memset((&L_26), 0, sizeof(L_26));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_26), ((int32_t)1582), ((int32_t)65189), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_26);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_27 = L_25;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_28;
		memset((&L_28), 0, sizeof(L_28));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_28), ((int32_t)1583), ((int32_t)65193), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_28);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_29 = L_27;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_30;
		memset((&L_30), 0, sizeof(L_30));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_30), ((int32_t)1584), ((int32_t)65195), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_30);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_31 = L_29;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_32;
		memset((&L_32), 0, sizeof(L_32));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_32), ((int32_t)1585), ((int32_t)65197), /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_32);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_33 = L_31;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_34;
		memset((&L_34), 0, sizeof(L_34));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_34), ((int32_t)1586), ((int32_t)65199), /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_34);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_35 = L_33;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_36;
		memset((&L_36), 0, sizeof(L_36));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_36), ((int32_t)1587), ((int32_t)65201), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_36);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_37 = L_35;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_38;
		memset((&L_38), 0, sizeof(L_38));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_38), ((int32_t)1588), ((int32_t)65205), /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_38);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_39 = L_37;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_40;
		memset((&L_40), 0, sizeof(L_40));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_40), ((int32_t)1589), ((int32_t)65209), /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_40);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_41 = L_39;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_42;
		memset((&L_42), 0, sizeof(L_42));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_42), ((int32_t)1590), ((int32_t)65213), /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_42);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_43 = L_41;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_44;
		memset((&L_44), 0, sizeof(L_44));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_44), ((int32_t)1591), ((int32_t)65217), /*hidden argument*/NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_44);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_45 = L_43;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_46;
		memset((&L_46), 0, sizeof(L_46));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_46), ((int32_t)1592), ((int32_t)65221), /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_46);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_47 = L_45;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_48;
		memset((&L_48), 0, sizeof(L_48));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_48), ((int32_t)1593), ((int32_t)65225), /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_48);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_49 = L_47;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_50;
		memset((&L_50), 0, sizeof(L_50));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_50), ((int32_t)1594), ((int32_t)65229), /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_50);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_51 = L_49;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_52;
		memset((&L_52), 0, sizeof(L_52));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_52), ((int32_t)1601), ((int32_t)65233), /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_52);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_53 = L_51;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_54;
		memset((&L_54), 0, sizeof(L_54));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_54), ((int32_t)1602), ((int32_t)65237), /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_54);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_55 = L_53;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_56;
		memset((&L_56), 0, sizeof(L_56));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_56), ((int32_t)1603), ((int32_t)65241), /*hidden argument*/NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_56);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_57 = L_55;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_58;
		memset((&L_58), 0, sizeof(L_58));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_58), ((int32_t)1604), ((int32_t)65245), /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_58);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_59 = L_57;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_60;
		memset((&L_60), 0, sizeof(L_60));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_60), ((int32_t)1605), ((int32_t)65249), /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_60);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_61 = L_59;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_62;
		memset((&L_62), 0, sizeof(L_62));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_62), ((int32_t)1606), ((int32_t)65253), /*hidden argument*/NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_62);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_63 = L_61;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_64;
		memset((&L_64), 0, sizeof(L_64));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_64), ((int32_t)1607), ((int32_t)65257), /*hidden argument*/NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_64);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_65 = L_63;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_66;
		memset((&L_66), 0, sizeof(L_66));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_66), ((int32_t)1608), ((int32_t)65261), /*hidden argument*/NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_66);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_67 = L_65;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_68;
		memset((&L_68), 0, sizeof(L_68));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_68), ((int32_t)1610), ((int32_t)65265), /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_68);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_69 = L_67;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_70;
		memset((&L_70), 0, sizeof(L_70));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_70), ((int32_t)1570), ((int32_t)65153), /*hidden argument*/NULL);
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_70);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_71 = L_69;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_72;
		memset((&L_72), 0, sizeof(L_72));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_72), ((int32_t)1577), ((int32_t)65171), /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_72);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_73 = L_71;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_74;
		memset((&L_74), 0, sizeof(L_74));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_74), ((int32_t)1662), ((int32_t)64342), /*hidden argument*/NULL);
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_74);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_75 = L_73;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_76;
		memset((&L_76), 0, sizeof(L_76));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_76), ((int32_t)1670), ((int32_t)64378), /*hidden argument*/NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_76);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_77 = L_75;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_78;
		memset((&L_78), 0, sizeof(L_78));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_78), ((int32_t)1688), ((int32_t)64394), /*hidden argument*/NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_78);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_79 = L_77;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_80;
		memset((&L_80), 0, sizeof(L_80));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_80), ((int32_t)1711), ((int32_t)64402), /*hidden argument*/NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_80);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_81 = L_79;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_82;
		memset((&L_82), 0, sizeof(L_82));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_82), ((int32_t)1705), ((int32_t)64398), /*hidden argument*/NULL);
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_82);
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_83 = L_81;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_84;
		memset((&L_84), 0, sizeof(L_84));
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87((&L_84), ((int32_t)1740), ((int32_t)64508), /*hidden argument*/NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338)L_84);
		((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0), (void*)L_83);
		// }
		return;
	}
}
// ArabicTable ArabicTable::get_ArabicMapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* ArabicTable_get_ArabicMapper_m4CE6FA5ADE6C9C306AB6771B631F21C3A4F65841 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (arabicMapper == null)
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_0 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// arabicMapper = new ArabicTable();
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_1 = (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448*)il2cpp_codegen_object_new(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArabicTable__ctor_m8DBFC22F7BD81894CCE65CBB978E36260CAE4440(L_1, NULL);
		((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1), (void*)L_1);
	}

IL_0011:
	{
		// return arabicMapper;
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_2 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1;
		return L_2;
	}
}
// System.Int32 ArabicTable::Convert(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArabicTable_Convert_mD6DD8122E0D6CA1E33760E3FDBEE7D1E6CFA69A4 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, int32_t ___0_toBeConverted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < mapList.Length; i++) {
		V_0 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		// var arabicMap = mapList[i];
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_0 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// if (arabicMap.from == toBeConverted)
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_4 = V_1;
		int32_t L_5 = L_4.___from_0;
		int32_t L_6 = ___0_toBeConverted;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0020;
		}
	}
	{
		// return arabicMap.to;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338 L_7 = V_1;
		int32_t L_8 = L_7.___to_1;
		return L_8;
	}

IL_0020:
	{
		// for (int i = 0; i < mapList.Length; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < mapList.Length; i++) {
		int32_t L_10 = V_0;
		ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* L_11 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return toBeConverted;
		int32_t L_12 = ___0_toBeConverted;
		return L_12;
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
// System.Void TashkeelLocation::.ctor(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313 (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* __this, Il2CppChar ___0_tashkeel, int32_t ___1_position, const RuntimeMethod* method) 
{
	{
		// public TashkeelLocation(char tashkeel, int position)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.tashkeel = tashkeel;
		Il2CppChar L_0 = ___0_tashkeel;
		__this->___tashkeel_0 = L_0;
		// this.position = position;
		int32_t L_1 = ___1_position;
		__this->___position_1 = L_1;
		// }
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
// System.Void ArabicFixerTool::RemoveTashkeel(System.String&,System.Collections.Generic.List`1<TashkeelLocation>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_RemoveTashkeel_m0E4E36A9007B120016F25E27BEF55FB5BA340A65 (String_t** ___0_str, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** ___1_tashkeelLocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// tashkeelLocation = new List<TashkeelLocation>();
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_0 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_1 = (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*)il2cpp_codegen_object_new(List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6(L_1, List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// var lastSplitIndex = 0;
		(&V_0)->___lastSplitIndex_0 = 0;
		// internalStringBuilder.Clear();
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_2 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_2, NULL);
		// internalStringBuilder.EnsureCapacity(str.Length);
		StringBuilder_t* L_4 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		String_t** L_5 = ___0_str;
		String_t* L_6 = *((String_t**)L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		NullCheck(L_4);
		int32_t L_8;
		L_8 = StringBuilder_EnsureCapacity_m0ACFF70F6095FD8F19167AF977F539A8EE7A3DB2(L_4, L_7, NULL);
		// int index = 0;
		V_1 = 0;
		// for (int i = 0; i < str.Length; i++) {
		V_2 = 0;
		goto IL_03cf;
	}

IL_0035:
	{
		// if (str[i] == (char)0x064B) {
		String_t** L_9 = ___0_str;
		String_t* L_10 = *((String_t**)L_9);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)1611)))))
		{
			goto IL_0068;
		}
	}
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x064B, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_13 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_14 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_13);
		int32_t L_15 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_16 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_16, ((int32_t)1611), L_15, NULL);
		NullCheck(L_14);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_14, L_16, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// IncrementSB(ref str, i);
		String_t** L_18 = ___0_str;
		int32_t L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_18, L_19, (&V_0), NULL);
		goto IL_03cb;
	}

IL_0068:
	{
		// } else if (str[i] == (char)0x064C) {
		String_t** L_20 = ___0_str;
		String_t* L_21 = *((String_t**)L_20);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, L_22, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)1612)))))
		{
			goto IL_009b;
		}
	}
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x064C, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_24 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_25 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_24);
		int32_t L_26 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_27 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_27, ((int32_t)1612), L_26, NULL);
		NullCheck(L_25);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_25, L_27, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		// IncrementSB(ref str, i);
		String_t** L_29 = ___0_str;
		int32_t L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_29, L_30, (&V_0), NULL);
		goto IL_03cb;
	}

IL_009b:
	{
		// } else if (str[i] == (char)0x064D) {
		String_t** L_31 = ___0_str;
		String_t* L_32 = *((String_t**)L_31);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, L_33, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)1613)))))
		{
			goto IL_00ce;
		}
	}
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x064D, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_35 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_36 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_35);
		int32_t L_37 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_38 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_38, ((int32_t)1613), L_37, NULL);
		NullCheck(L_36);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_36, L_38, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		// IncrementSB(ref str, i);
		String_t** L_40 = ___0_str;
		int32_t L_41 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_40, L_41, (&V_0), NULL);
		goto IL_03cb;
	}

IL_00ce:
	{
		// } else if (str[i] == (char)0x064E) {
		String_t** L_42 = ___0_str;
		String_t* L_43 = *((String_t**)L_42);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		Il2CppChar L_45;
		L_45 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_43, L_44, NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1614)))))
		{
			goto IL_0144;
		}
	}
	{
		// if (index > 0 && combineTashkeel) {
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_47 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_47)
		{
			goto IL_0120;
		}
	}
	{
		// if (tashkeelLocation[index - 1].tashkeel == (char)0x0651) // Shadda
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_48 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_49 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_48);
		int32_t L_50 = V_1;
		NullCheck(L_49);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_51;
		L_51 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_51);
		Il2CppChar L_52 = L_51->___tashkeel_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_0120;
		}
	}
	{
		// tashkeelLocation[index - 1].tashkeel = (char)0xFC60; // Shadda With Fatha
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_53 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_54 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_53);
		int32_t L_55 = V_1;
		NullCheck(L_54);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_56;
		L_56 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_56);
		L_56->___tashkeel_0 = ((int32_t)64608);
		// IncrementSB(ref str, i);
		String_t** L_57 = ___0_str;
		int32_t L_58 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_57, L_58, (&V_0), NULL);
		// continue;
		goto IL_03cb;
	}

IL_0120:
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x064E, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_59 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_60 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_59);
		int32_t L_61 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_62 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_62, ((int32_t)1614), L_61, NULL);
		NullCheck(L_60);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_60, L_62, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_63 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		// IncrementSB(ref str, i);
		String_t** L_64 = ___0_str;
		int32_t L_65 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_64, L_65, (&V_0), NULL);
		goto IL_03cb;
	}

IL_0144:
	{
		// } else if (str[i] == (char)0x064F) {
		String_t** L_66 = ___0_str;
		String_t* L_67 = *((String_t**)L_66);
		int32_t L_68 = V_2;
		NullCheck(L_67);
		Il2CppChar L_69;
		L_69 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_67, L_68, NULL);
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)1615)))))
		{
			goto IL_01ba;
		}
	}
	{
		// if (index > 0 && combineTashkeel) {
		int32_t L_70 = V_1;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0196;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_71 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_71)
		{
			goto IL_0196;
		}
	}
	{
		// if (tashkeelLocation[index - 1].tashkeel == (char)0x0651) {
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_72 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_73 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_72);
		int32_t L_74 = V_1;
		NullCheck(L_73);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_75;
		L_75 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_73, ((int32_t)il2cpp_codegen_subtract(L_74, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_75);
		Il2CppChar L_76 = L_75->___tashkeel_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_0196;
		}
	}
	{
		// tashkeelLocation[index - 1].tashkeel = (char)0xFC61; // Shadda With DAMMA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_77 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_78 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_77);
		int32_t L_79 = V_1;
		NullCheck(L_78);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_80;
		L_80 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_78, ((int32_t)il2cpp_codegen_subtract(L_79, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_80);
		L_80->___tashkeel_0 = ((int32_t)64609);
		// IncrementSB(ref str, i);
		String_t** L_81 = ___0_str;
		int32_t L_82 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_81, L_82, (&V_0), NULL);
		// continue;
		goto IL_03cb;
	}

IL_0196:
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x064F, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_83 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_84 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_83);
		int32_t L_85 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_86 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_86, ((int32_t)1615), L_85, NULL);
		NullCheck(L_84);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_84, L_86, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_87 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		// IncrementSB(ref str, i);
		String_t** L_88 = ___0_str;
		int32_t L_89 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_88, L_89, (&V_0), NULL);
		goto IL_03cb;
	}

IL_01ba:
	{
		// } else if (str[i] == (char)0x0650) {
		String_t** L_90 = ___0_str;
		String_t* L_91 = *((String_t**)L_90);
		int32_t L_92 = V_2;
		NullCheck(L_91);
		Il2CppChar L_93;
		L_93 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_91, L_92, NULL);
		if ((!(((uint32_t)L_93) == ((uint32_t)((int32_t)1616)))))
		{
			goto IL_0230;
		}
	}
	{
		// if (index > 0 && combineTashkeel) {
		int32_t L_94 = V_1;
		if ((((int32_t)L_94) <= ((int32_t)0)))
		{
			goto IL_020c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_95 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_95)
		{
			goto IL_020c;
		}
	}
	{
		// if (tashkeelLocation[index - 1].tashkeel == (char)0x0651) {
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_96 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_97 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_96);
		int32_t L_98 = V_1;
		NullCheck(L_97);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_99;
		L_99 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_97, ((int32_t)il2cpp_codegen_subtract(L_98, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_99);
		Il2CppChar L_100 = L_99->___tashkeel_0;
		if ((!(((uint32_t)L_100) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_020c;
		}
	}
	{
		// tashkeelLocation[index - 1].tashkeel = (char)0xFC62; // Shadda With KASRA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_101 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_102 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_101);
		int32_t L_103 = V_1;
		NullCheck(L_102);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_104;
		L_104 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_102, ((int32_t)il2cpp_codegen_subtract(L_103, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_104);
		L_104->___tashkeel_0 = ((int32_t)64610);
		// IncrementSB(ref str, i);
		String_t** L_105 = ___0_str;
		int32_t L_106 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_105, L_106, (&V_0), NULL);
		// continue;
		goto IL_03cb;
	}

IL_020c:
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x0650, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_107 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_108 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_107);
		int32_t L_109 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_110 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_110);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_110, ((int32_t)1616), L_109, NULL);
		NullCheck(L_108);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_108, L_110, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_111 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		// IncrementSB(ref str, i);
		String_t** L_112 = ___0_str;
		int32_t L_113 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_112, L_113, (&V_0), NULL);
		goto IL_03cb;
	}

IL_0230:
	{
		// } else if (str[i] == (char)0x0651) {
		String_t** L_114 = ___0_str;
		String_t* L_115 = *((String_t**)L_114);
		int32_t L_116 = V_2;
		NullCheck(L_115);
		Il2CppChar L_117;
		L_117 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_115, L_116, NULL);
		if ((!(((uint32_t)L_117) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_031f;
		}
	}
	{
		// if (index > 0 && combineTashkeel) {
		int32_t L_118 = V_1;
		if ((((int32_t)L_118) <= ((int32_t)0)))
		{
			goto IL_02fb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_119 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_119)
		{
			goto IL_02fb;
		}
	}
	{
		// if (tashkeelLocation[index - 1].tashkeel == (char)0x064E) // FATHA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_120 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_121 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_120);
		int32_t L_122 = V_1;
		NullCheck(L_121);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_123;
		L_123 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_121, ((int32_t)il2cpp_codegen_subtract(L_122, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_123);
		Il2CppChar L_124 = L_123->___tashkeel_0;
		if ((!(((uint32_t)L_124) == ((uint32_t)((int32_t)1614)))))
		{
			goto IL_028b;
		}
	}
	{
		// tashkeelLocation[index - 1].tashkeel = (char)0xFC60; // Shadda With Fatha
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_125 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_126 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_125);
		int32_t L_127 = V_1;
		NullCheck(L_126);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_128;
		L_128 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_126, ((int32_t)il2cpp_codegen_subtract(L_127, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_128);
		L_128->___tashkeel_0 = ((int32_t)64608);
		// IncrementSB(ref str, i);
		String_t** L_129 = ___0_str;
		int32_t L_130 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_129, L_130, (&V_0), NULL);
		// continue;
		goto IL_03cb;
	}

IL_028b:
	{
		// if (tashkeelLocation[index - 1].tashkeel == (char)0x064F) // DAMMA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_131 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_132 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_131);
		int32_t L_133 = V_1;
		NullCheck(L_132);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_134;
		L_134 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_132, ((int32_t)il2cpp_codegen_subtract(L_133, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_134);
		Il2CppChar L_135 = L_134->___tashkeel_0;
		if ((!(((uint32_t)L_135) == ((uint32_t)((int32_t)1615)))))
		{
			goto IL_02c3;
		}
	}
	{
		// tashkeelLocation[index - 1].tashkeel = (char)0xFC61; // Shadda With DAMMA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_136 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_137 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_136);
		int32_t L_138 = V_1;
		NullCheck(L_137);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_139;
		L_139 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_137, ((int32_t)il2cpp_codegen_subtract(L_138, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_139);
		L_139->___tashkeel_0 = ((int32_t)64609);
		// IncrementSB(ref str, i);
		String_t** L_140 = ___0_str;
		int32_t L_141 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_140, L_141, (&V_0), NULL);
		// continue;
		goto IL_03cb;
	}

IL_02c3:
	{
		// if (tashkeelLocation[index - 1].tashkeel == (char)0x0650) // KASRA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_142 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_143 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_142);
		int32_t L_144 = V_1;
		NullCheck(L_143);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_145;
		L_145 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_143, ((int32_t)il2cpp_codegen_subtract(L_144, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_145);
		Il2CppChar L_146 = L_145->___tashkeel_0;
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)1616)))))
		{
			goto IL_02fb;
		}
	}
	{
		// tashkeelLocation[index - 1].tashkeel = (char)0xFC62; // Shadda With KASRA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_147 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_148 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_147);
		int32_t L_149 = V_1;
		NullCheck(L_148);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_150;
		L_150 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_148, ((int32_t)il2cpp_codegen_subtract(L_149, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_150);
		L_150->___tashkeel_0 = ((int32_t)64610);
		// IncrementSB(ref str, i);
		String_t** L_151 = ___0_str;
		int32_t L_152 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_151, L_152, (&V_0), NULL);
		// continue;
		goto IL_03cb;
	}

IL_02fb:
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x0651, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_153 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_154 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_153);
		int32_t L_155 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_156 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_156);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_156, ((int32_t)1617), L_155, NULL);
		NullCheck(L_154);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_154, L_156, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_157 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		// IncrementSB(ref str, i);
		String_t** L_158 = ___0_str;
		int32_t L_159 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_158, L_159, (&V_0), NULL);
		goto IL_03cb;
	}

IL_031f:
	{
		// } else if (str[i] == (char)0x0652) {
		String_t** L_160 = ___0_str;
		String_t* L_161 = *((String_t**)L_160);
		int32_t L_162 = V_2;
		NullCheck(L_161);
		Il2CppChar L_163;
		L_163 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_161, L_162, NULL);
		if ((!(((uint32_t)L_163) == ((uint32_t)((int32_t)1618)))))
		{
			goto IL_034f;
		}
	}
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x0652, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_164 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_165 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_164);
		int32_t L_166 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_167 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_167);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_167, ((int32_t)1618), L_166, NULL);
		NullCheck(L_165);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_165, L_167, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_168 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		// IncrementSB(ref str, i);
		String_t** L_169 = ___0_str;
		int32_t L_170 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_169, L_170, (&V_0), NULL);
		goto IL_03cb;
	}

IL_034f:
	{
		// } else if (str[i] == (char)0x0653) {
		String_t** L_171 = ___0_str;
		String_t* L_172 = *((String_t**)L_171);
		int32_t L_173 = V_2;
		NullCheck(L_172);
		Il2CppChar L_174;
		L_174 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_172, L_173, NULL);
		if ((!(((uint32_t)L_174) == ((uint32_t)((int32_t)1619)))))
		{
			goto IL_037f;
		}
	}
	{
		// tashkeelLocation.Add(new TashkeelLocation((char)0x0653, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_175 = ___1_tashkeelLocation;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_176 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_175);
		int32_t L_177 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_178 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_178);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_178, ((int32_t)1619), L_177, NULL);
		NullCheck(L_176);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_176, L_178, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_179 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		// IncrementSB(ref str, i);
		String_t** L_180 = ___0_str;
		int32_t L_181 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_180, L_181, (&V_0), NULL);
		goto IL_03cb;
	}

IL_037f:
	{
		// } else if (str[i] == (char)0xFC60) {
		String_t** L_182 = ___0_str;
		String_t* L_183 = *((String_t**)L_182);
		int32_t L_184 = V_2;
		NullCheck(L_183);
		Il2CppChar L_185;
		L_185 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_183, L_184, NULL);
		if ((!(((uint32_t)L_185) == ((uint32_t)((int32_t)64608)))))
		{
			goto IL_0399;
		}
	}
	{
		// IncrementSB(ref str, i);
		String_t** L_186 = ___0_str;
		int32_t L_187 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_186, L_187, (&V_0), NULL);
		goto IL_03cb;
	}

IL_0399:
	{
		// } else if (str[i] == (char)0xFC61) {
		String_t** L_188 = ___0_str;
		String_t* L_189 = *((String_t**)L_188);
		int32_t L_190 = V_2;
		NullCheck(L_189);
		Il2CppChar L_191;
		L_191 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_189, L_190, NULL);
		if ((!(((uint32_t)L_191) == ((uint32_t)((int32_t)64609)))))
		{
			goto IL_03b3;
		}
	}
	{
		// IncrementSB(ref str, i);
		String_t** L_192 = ___0_str;
		int32_t L_193 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_192, L_193, (&V_0), NULL);
		goto IL_03cb;
	}

IL_03b3:
	{
		// } else if (str[i] == (char)0xFC62) {
		String_t** L_194 = ___0_str;
		String_t* L_195 = *((String_t**)L_194);
		int32_t L_196 = V_2;
		NullCheck(L_195);
		Il2CppChar L_197;
		L_197 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_195, L_196, NULL);
		if ((!(((uint32_t)L_197) == ((uint32_t)((int32_t)64610)))))
		{
			goto IL_03cb;
		}
	}
	{
		// IncrementSB(ref str, i);
		String_t** L_198 = ___0_str;
		int32_t L_199 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_198, L_199, (&V_0), NULL);
	}

IL_03cb:
	{
		// for (int i = 0; i < str.Length; i++) {
		int32_t L_200 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_03cf:
	{
		// for (int i = 0; i < str.Length; i++) {
		int32_t L_201 = V_2;
		String_t** L_202 = ___0_str;
		String_t* L_203 = *((String_t**)L_202);
		NullCheck(L_203);
		int32_t L_204;
		L_204 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_203, NULL);
		if ((((int32_t)L_201) < ((int32_t)L_204)))
		{
			goto IL_0035;
		}
	}
	{
		// if (lastSplitIndex != 0) {
		U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588 L_205 = V_0;
		int32_t L_206 = L_205.___lastSplitIndex_0;
		if (!L_206)
		{
			goto IL_03ff;
		}
	}
	{
		// IncrementSB(ref str, str.Length);
		String_t** L_207 = ___0_str;
		String_t** L_208 = ___0_str;
		String_t* L_209 = *((String_t**)L_208);
		NullCheck(L_209);
		int32_t L_210;
		L_210 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_209, NULL);
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023(L_207, L_210, (&V_0), NULL);
		// str = internalStringBuilder.ToString();
		String_t** L_211 = ___0_str;
		StringBuilder_t* L_212 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_212);
		String_t* L_213;
		L_213 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_212);
		*((RuntimeObject**)L_211) = (RuntimeObject*)L_213;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_211, (void*)(RuntimeObject*)L_213);
	}

IL_03ff:
	{
		// }
		return;
	}
}
// System.Void ArabicFixerTool::ReturnTashkeel(System.Char[]&,System.Collections.Generic.List`1<TashkeelLocation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_ReturnTashkeel_m1CE5222851AC104F805BD1BDE874B6FABA380A3F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___0_letters, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* ___1_tashkeelLocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Array.Resize(ref letters, letters.Length + tashkeelLocation.Count);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_0 = ___0_letters;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_1 = ___0_letters;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = *((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**)L_1);
		NullCheck(L_2);
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_3 = ___1_tashkeelLocation;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_inline(L_3, List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var);
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), L_4)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
		// for (int i = 0; i < tashkeelLocation.Count; i++) {
		V_0 = 0;
		goto IL_0050;
	}

IL_0015:
	{
		// var tl = tashkeelLocation[i];
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_5 = ___1_tashkeelLocation;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_7;
		L_7 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_5, L_6, List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		V_1 = L_7;
		// for (int j = letters.Length - 1; j > tl.position; j--) {
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_8 = ___0_letters;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = *((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**)L_8);
		NullCheck(L_9);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1));
		goto IL_0034;
	}

IL_0026:
	{
		// letters[j] = letters[j - 1];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_10 = ___0_letters;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = *((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**)L_10);
		int32_t L_12 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_13 = ___0_letters;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = *((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**)L_13);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		uint16_t L_17 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Il2CppChar)L_17);
		// for (int j = letters.Length - 1; j > tl.position; j--) {
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		// for (int j = letters.Length - 1; j > tl.position; j--) {
		int32_t L_19 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = L_20->___position_1;
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0026;
		}
	}
	{
		// letters[tl.position] = tl.tashkeel;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_22 = ___0_letters;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = *((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**)L_22);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___position_1;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_26 = V_1;
		NullCheck(L_26);
		Il2CppChar L_27 = L_26->___tashkeel_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Il2CppChar)L_27);
		// for (int i = 0; i < tashkeelLocation.Count; i++) {
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < tashkeelLocation.Count; i++) {
		int32_t L_29 = V_0;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_30 = ___1_tashkeelLocation;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_inline(L_30, List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.String ArabicFixerTool::FixLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	{
		// RemoveTashkeel(ref str, out var tashkeelLocation);
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_RemoveTashkeel_m0E4E36A9007B120016F25E27BEF55FB5BA340A65((&___0_str), (&V_1), NULL);
		// char[] lettersOrigin = new char[str.Length];
		String_t* L_0 = ___0_str;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_2 = L_2;
		// char[] lettersFinal = str.ToCharArray();
		String_t* L_3 = ___0_str;
		NullCheck(L_3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4;
		L_4 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_3, NULL);
		V_3 = L_4;
		// for (int i = 0; i < lettersOrigin.Length; i++)
		V_4 = 0;
		goto IL_003e;
	}

IL_0021:
	{
		// lettersOrigin[i] = (char)ArabicTable.ArabicMapper.Convert(str[i]);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_2;
		int32_t L_6 = V_4;
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_7;
		L_7 = ArabicTable_get_ArabicMapper_m4CE6FA5ADE6C9C306AB6771B631F21C3A4F65841(NULL);
		String_t* L_8 = ___0_str;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		NullCheck(L_7);
		int32_t L_11;
		L_11 = ArabicTable_Convert_mD6DD8122E0D6CA1E33760E3FDBEE7D1E6CFA69A4(L_7, L_10, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Il2CppChar)((int32_t)(uint16_t)L_11));
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_13 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		V_5 = 0;
		goto IL_0176;
	}

IL_004d:
	{
		// bool skip = false;
		V_6 = (bool)0;
		// if (lettersOrigin[i] == (char)IsolatedArabicLetters.Lam)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_2;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65245)))))
		{
			goto IL_0100;
		}
	}
	{
		// if (i < lettersOrigin.Length - 1)
		int32_t L_19 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)))))
		{
			goto IL_0100;
		}
	}
	{
		// if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.AlefMaksoor))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = V_2;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)65159)))))
		{
			goto IL_0090;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = V_2;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)65271));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_6 = (bool)1;
		goto IL_0100;
	}

IL_0090:
	{
		// else if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.Alef))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = V_2;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		uint16_t L_32 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)65165)))))
		{
			goto IL_00b6;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = V_2;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppChar)((int32_t)65273));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_35 = V_3;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_6 = (bool)1;
		goto IL_0100;
	}

IL_00b6:
	{
		// else if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.AlefHamza))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = V_2;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)65155)))))
		{
			goto IL_00dc;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = V_2;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Il2CppChar)((int32_t)65269));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = V_3;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_6 = (bool)1;
		goto IL_0100;
	}

IL_00dc:
	{
		// else if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.AlefMad))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_45 = V_2;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		uint16_t L_48 = (uint16_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)65153)))))
		{
			goto IL_0100;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = V_2;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Il2CppChar)((int32_t)65267));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = V_3;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_52, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_6 = (bool)1;
	}

IL_0100:
	{
		// if (!IsIgnoredCharacter(lettersOrigin[i]))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = V_2;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		uint16_t L_56 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = ArabicFixerTool_IsIgnoredCharacter_mD4266BD327FCF7EA06B0805129FEA7104088A046(L_56, NULL);
		if (L_57)
		{
			goto IL_014e;
		}
	}
	{
		// if (IsMiddleLetter(lettersOrigin, i))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = V_2;
		int32_t L_59 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = ArabicFixerTool_IsMiddleLetter_m9610EB7249C81792676BF357316EA65849F1942F(L_58, L_59, NULL);
		if (!L_60)
		{
			goto IL_0122;
		}
	}
	{
		// lettersFinal[i] = (char)(lettersOrigin[i] + 3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_61 = V_3;
		int32_t L_62 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_63 = V_2;
		int32_t L_64 = V_5;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint16_t L_66 = (uint16_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_66, 3))));
		goto IL_014e;
	}

IL_0122:
	{
		// else if (IsFinishingLetter(lettersOrigin, i))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = V_2;
		int32_t L_68 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = ArabicFixerTool_IsFinishingLetter_m34D81454EFE842A4E5135A5BBB5A1C8493B19FD1(L_67, L_68, NULL);
		if (!L_69)
		{
			goto IL_0139;
		}
	}
	{
		// lettersFinal[i] = (char)(lettersOrigin[i] + 1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = V_3;
		int32_t L_71 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_72 = V_2;
		int32_t L_73 = V_5;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		uint16_t L_75 = (uint16_t)(L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, 1))));
		goto IL_014e;
	}

IL_0139:
	{
		// else if (IsLeadingLetter(lettersOrigin, i))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_76 = V_2;
		int32_t L_77 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = ArabicFixerTool_IsLeadingLetter_m3020D74BCBE1755BEA9E0402A92A371769B46CCE(L_76, L_77, NULL);
		if (!L_78)
		{
			goto IL_014e;
		}
	}
	{
		// lettersFinal[i] = (char)(lettersOrigin[i] + 2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_79 = V_3;
		int32_t L_80 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_81 = V_2;
		int32_t L_82 = V_5;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		uint16_t L_84 = (uint16_t)(L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_84, 2))));
	}

IL_014e:
	{
		// if (skip)
		bool L_85 = V_6;
		if (!L_85)
		{
			goto IL_0158;
		}
	}
	{
		// i++;
		int32_t L_86 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_0158:
	{
		// if(useHinduNumbers) {
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_87 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___useHinduNumbers_2;
		if (!L_87)
		{
			goto IL_0170;
		}
	}
	{
		// lettersFinal[i] = (char)HandleInduNumber(lettersOrigin[i], lettersFinal[i]);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_88 = V_3;
		int32_t L_89 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = V_2;
		int32_t L_91 = V_5;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint16_t L_93 = (uint16_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = V_3;
		int32_t L_95 = V_5;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		uint16_t L_97 = (uint16_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		uint16_t L_98;
		L_98 = ArabicFixerTool_HandleInduNumber_m74868F441AFAFF997372C58178527EC27C1A54F0(L_93, L_97, NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (Il2CppChar)L_98);
	}

IL_0170:
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_99 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0176:
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_100 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_101 = V_2;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)((int32_t)(((RuntimeArray*)L_101)->max_length)))))
		{
			goto IL_004d;
		}
	}
	{
		// if(showTashkeel && tashkeelLocation.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_102 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___showTashkeel_0;
		if (!L_102)
		{
			goto IL_0198;
		}
	}
	{
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_103 = V_1;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_inline(L_103, List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var);
		if ((((int32_t)L_104) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		// ReturnTashkeel(ref lettersFinal, tashkeelLocation);
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_105 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_ReturnTashkeel_m1CE5222851AC104F805BD1BDE874B6FABA380A3F((&V_3), L_105, NULL);
	}

IL_0198:
	{
		// internalStringBuilder.Clear();
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_106 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_106);
		StringBuilder_t* L_107;
		L_107 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_106, NULL);
		// internalStringBuilder.EnsureCapacity(lettersFinal.Length);
		StringBuilder_t* L_108 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_109 = V_3;
		NullCheck(L_109);
		NullCheck(L_108);
		int32_t L_110;
		L_110 = StringBuilder_EnsureCapacity_m0ACFF70F6095FD8F19167AF977F539A8EE7A3DB2(L_108, ((int32_t)(((RuntimeArray*)L_109)->max_length)), NULL);
		// List<char> numberList = null;
		(&V_0)->___numberList_0 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___numberList_0), (void*)(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)NULL);
		// for (int i = lettersFinal.Length - 1; i >= 0; i--)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_111 = V_3;
		NullCheck(L_111);
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_111)->max_length)), 1));
		goto IL_0463;
	}

IL_01c5:
	{
		// if (char.IsPunctuation(lettersFinal[i]) && i>0 && i < lettersFinal.Length-1 &&
		//     (char.IsPunctuation(lettersFinal[i-1]) || char.IsPunctuation(lettersFinal[i+1])))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_112 = V_3;
		int32_t L_113 = V_7;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		uint16_t L_115 = (uint16_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_115, NULL);
		if (!L_116)
		{
			goto IL_02c2;
		}
	}
	{
		int32_t L_117 = V_7;
		if ((((int32_t)L_117) <= ((int32_t)0)))
		{
			goto IL_02c2;
		}
	}
	{
		int32_t L_118 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_119 = V_3;
		NullCheck(L_119);
		if ((((int32_t)L_118) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_119)->max_length)), 1)))))
		{
			goto IL_02c2;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_120 = V_3;
		int32_t L_121 = V_7;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_subtract(L_121, 1));
		uint16_t L_123 = (uint16_t)(L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_124;
		L_124 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_123, NULL);
		if (L_124)
		{
			goto IL_0204;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_125 = V_3;
		int32_t L_126 = V_7;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, 1));
		uint16_t L_128 = (uint16_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_129;
		L_129 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_128, NULL);
		if (!L_129)
		{
			goto IL_02c2;
		}
	}

IL_0204:
	{
		// if (lettersFinal[i] == '(')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_130 = V_3;
		int32_t L_131 = V_7;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		uint16_t L_133 = (uint16_t)(L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_021e;
		}
	}
	{
		// internalStringBuilder.Append(')');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_134 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_134);
		StringBuilder_t* L_135;
		L_135 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_134, ((int32_t)41), NULL);
		goto IL_045d;
	}

IL_021e:
	{
		// else if (lettersFinal[i] == ')')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_136 = V_3;
		int32_t L_137 = V_7;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		uint16_t L_139 = (uint16_t)(L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		if ((!(((uint32_t)L_139) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0238;
		}
	}
	{
		// internalStringBuilder.Append('(');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_140 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_140);
		StringBuilder_t* L_141;
		L_141 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_140, ((int32_t)40), NULL);
		goto IL_045d;
	}

IL_0238:
	{
		// else if (lettersFinal[i] == '<')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_142 = V_3;
		int32_t L_143 = V_7;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		uint16_t L_145 = (uint16_t)(L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		if ((!(((uint32_t)L_145) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0252;
		}
	}
	{
		// internalStringBuilder.Append('>');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_146 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_146);
		StringBuilder_t* L_147;
		L_147 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_146, ((int32_t)62), NULL);
		goto IL_045d;
	}

IL_0252:
	{
		// else if (lettersFinal[i] == '>')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_148 = V_3;
		int32_t L_149 = V_7;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		uint16_t L_151 = (uint16_t)(L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_026c;
		}
	}
	{
		// internalStringBuilder.Append('<');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_152 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_152);
		StringBuilder_t* L_153;
		L_153 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_152, ((int32_t)60), NULL);
		goto IL_045d;
	}

IL_026c:
	{
		// else if (lettersFinal[i] == '[')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_154 = V_3;
		int32_t L_155 = V_7;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		uint16_t L_157 = (uint16_t)(L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0286;
		}
	}
	{
		// internalStringBuilder.Append(']');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_158 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_158);
		StringBuilder_t* L_159;
		L_159 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_158, ((int32_t)93), NULL);
		goto IL_045d;
	}

IL_0286:
	{
		// else if (lettersFinal[i] == ']')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_160 = V_3;
		int32_t L_161 = V_7;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		uint16_t L_163 = (uint16_t)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		if ((!(((uint32_t)L_163) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_02a0;
		}
	}
	{
		// internalStringBuilder.Append('[');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_164 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_164);
		StringBuilder_t* L_165;
		L_165 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_164, ((int32_t)91), NULL);
		goto IL_045d;
	}

IL_02a0:
	{
		// else if (lettersFinal[i] != 0xFFFF)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_166 = V_3;
		int32_t L_167 = V_7;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		uint16_t L_169 = (uint16_t)(L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		if ((((int32_t)L_169) == ((int32_t)((int32_t)65535))))
		{
			goto IL_045d;
		}
	}
	{
		// internalStringBuilder.Append(lettersFinal[i]);
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_170 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_171 = V_3;
		int32_t L_172 = V_7;
		NullCheck(L_171);
		int32_t L_173 = L_172;
		uint16_t L_174 = (uint16_t)(L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_170);
		StringBuilder_t* L_175;
		L_175 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_170, L_174, NULL);
		goto IL_045d;
	}

IL_02c2:
	{
		// else if(lettersFinal[i] == ' ' && i > 0 && i < lettersFinal.Length-1 &&
		//         (char.IsLower(lettersFinal[i-1]) || char.IsUpper(lettersFinal[i-1]) || char.IsNumber(lettersFinal[i-1])) &&
		//         (char.IsLower(lettersFinal[i+1]) || char.IsUpper(lettersFinal[i+1]) ||char.IsNumber(lettersFinal[i+1])))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_176 = V_3;
		int32_t L_177 = V_7;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		uint16_t L_179 = (uint16_t)(L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		if ((!(((uint32_t)L_179) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0336;
		}
	}
	{
		int32_t L_180 = V_7;
		if ((((int32_t)L_180) <= ((int32_t)0)))
		{
			goto IL_0336;
		}
	}
	{
		int32_t L_181 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_182 = V_3;
		NullCheck(L_182);
		if ((((int32_t)L_181) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_182)->max_length)), 1)))))
		{
			goto IL_0336;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_183 = V_3;
		int32_t L_184 = V_7;
		NullCheck(L_183);
		int32_t L_185 = ((int32_t)il2cpp_codegen_subtract(L_184, 1));
		uint16_t L_186 = (uint16_t)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_187;
		L_187 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_186, NULL);
		if (L_187)
		{
			goto IL_02ff;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_188 = V_3;
		int32_t L_189 = V_7;
		NullCheck(L_188);
		int32_t L_190 = ((int32_t)il2cpp_codegen_subtract(L_189, 1));
		uint16_t L_191 = (uint16_t)(L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_192;
		L_192 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_191, NULL);
		if (L_192)
		{
			goto IL_02ff;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_193 = V_3;
		int32_t L_194 = V_7;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_subtract(L_194, 1));
		uint16_t L_196 = (uint16_t)(L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_197;
		L_197 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_196, NULL);
		if (!L_197)
		{
			goto IL_0336;
		}
	}

IL_02ff:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_198 = V_3;
		int32_t L_199 = V_7;
		NullCheck(L_198);
		int32_t L_200 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		uint16_t L_201 = (uint16_t)(L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_202;
		L_202 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_201, NULL);
		if (L_202)
		{
			goto IL_0326;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_203 = V_3;
		int32_t L_204 = V_7;
		NullCheck(L_203);
		int32_t L_205 = ((int32_t)il2cpp_codegen_add(L_204, 1));
		uint16_t L_206 = (uint16_t)(L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_207;
		L_207 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_206, NULL);
		if (L_207)
		{
			goto IL_0326;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_208 = V_3;
		int32_t L_209 = V_7;
		NullCheck(L_208);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		uint16_t L_211 = (uint16_t)(L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_212;
		L_212 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_211, NULL);
		if (!L_212)
		{
			goto IL_0336;
		}
	}

IL_0326:
	{
		// AddNumber(lettersFinal[i]);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_213 = V_3;
		int32_t L_214 = V_7;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		uint16_t L_216 = (uint16_t)(L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB(L_216, (&V_0), NULL);
		goto IL_045d;
	}

IL_0336:
	{
		// else if (char.IsNumber(lettersFinal[i]) || char.IsLower(lettersFinal[i]) ||
		//          char.IsUpper(lettersFinal[i]) || char.IsSymbol(lettersFinal[i]) ||
		//          char.IsPunctuation(lettersFinal[i]))// || lettersFinal[i] == '^') //)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_217 = V_3;
		int32_t L_218 = V_7;
		NullCheck(L_217);
		int32_t L_219 = L_218;
		uint16_t L_220 = (uint16_t)(L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_221;
		L_221 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_220, NULL);
		if (L_221)
		{
			goto IL_0370;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_222 = V_3;
		int32_t L_223 = V_7;
		NullCheck(L_222);
		int32_t L_224 = L_223;
		uint16_t L_225 = (uint16_t)(L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_226;
		L_226 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_225, NULL);
		if (L_226)
		{
			goto IL_0370;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_227 = V_3;
		int32_t L_228 = V_7;
		NullCheck(L_227);
		int32_t L_229 = L_228;
		uint16_t L_230 = (uint16_t)(L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_231;
		L_231 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_230, NULL);
		if (L_231)
		{
			goto IL_0370;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_232 = V_3;
		int32_t L_233 = V_7;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		uint16_t L_235 = (uint16_t)(L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_236;
		L_236 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_235, NULL);
		if (L_236)
		{
			goto IL_0370;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_237 = V_3;
		int32_t L_238 = V_7;
		NullCheck(L_237);
		int32_t L_239 = L_238;
		uint16_t L_240 = (uint16_t)(L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_241;
		L_241 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_240, NULL);
		if (!L_241)
		{
			goto IL_0403;
		}
	}

IL_0370:
	{
		// if (lettersFinal[i] == '(')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_242 = V_3;
		int32_t L_243 = V_7;
		NullCheck(L_242);
		int32_t L_244 = L_243;
		uint16_t L_245 = (uint16_t)(L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		if ((!(((uint32_t)L_245) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0386;
		}
	}
	{
		// AddNumber(')');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB(((int32_t)41), (&V_0), NULL);
		goto IL_045d;
	}

IL_0386:
	{
		// else if (lettersFinal[i] == ')')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_246 = V_3;
		int32_t L_247 = V_7;
		NullCheck(L_246);
		int32_t L_248 = L_247;
		uint16_t L_249 = (uint16_t)(L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		if ((!(((uint32_t)L_249) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_039c;
		}
	}
	{
		// AddNumber('(');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB(((int32_t)40), (&V_0), NULL);
		goto IL_045d;
	}

IL_039c:
	{
		// else if (lettersFinal[i] == '<')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_250 = V_3;
		int32_t L_251 = V_7;
		NullCheck(L_250);
		int32_t L_252 = L_251;
		uint16_t L_253 = (uint16_t)(L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		if ((!(((uint32_t)L_253) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_03b2;
		}
	}
	{
		// AddNumber('>');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB(((int32_t)62), (&V_0), NULL);
		goto IL_045d;
	}

IL_03b2:
	{
		// else if (lettersFinal[i] == '>')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_254 = V_3;
		int32_t L_255 = V_7;
		NullCheck(L_254);
		int32_t L_256 = L_255;
		uint16_t L_257 = (uint16_t)(L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		if ((!(((uint32_t)L_257) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_03c8;
		}
	}
	{
		// AddNumber('<');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB(((int32_t)60), (&V_0), NULL);
		goto IL_045d;
	}

IL_03c8:
	{
		// else if (lettersFinal[i] == '[')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_258 = V_3;
		int32_t L_259 = V_7;
		NullCheck(L_258);
		int32_t L_260 = L_259;
		uint16_t L_261 = (uint16_t)(L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		if ((!(((uint32_t)L_261) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_03df;
		}
	}
	{
		// internalStringBuilder.Append(']');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_262 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_262);
		StringBuilder_t* L_263;
		L_263 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_262, ((int32_t)93), NULL);
		goto IL_045d;
	}

IL_03df:
	{
		// else if (lettersFinal[i] == ']')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_264 = V_3;
		int32_t L_265 = V_7;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		uint16_t L_267 = (uint16_t)(L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		if ((!(((uint32_t)L_267) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_03f6;
		}
	}
	{
		// internalStringBuilder.Append('[');
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_268 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_268);
		StringBuilder_t* L_269;
		L_269 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_268, ((int32_t)91), NULL);
		goto IL_045d;
	}

IL_03f6:
	{
		// AddNumber(lettersFinal[i]);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_270 = V_3;
		int32_t L_271 = V_7;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		uint16_t L_273 = (uint16_t)(L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB(L_273, (&V_0), NULL);
		goto IL_045d;
	}

IL_0403:
	{
		// else if( (lettersFinal[i] >= (char)0xD800 && lettersFinal[i] <= (char)0xDBFF) ||
		//         (lettersFinal[i] >= (char)0xDC00 && lettersFinal[i] <= (char)0xDFFF))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_274 = V_3;
		int32_t L_275 = V_7;
		NullCheck(L_274);
		int32_t L_276 = L_275;
		uint16_t L_277 = (uint16_t)(L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		if ((((int32_t)L_277) < ((int32_t)((int32_t)55296))))
		{
			goto IL_0419;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_278 = V_3;
		int32_t L_279 = V_7;
		NullCheck(L_278);
		int32_t L_280 = L_279;
		uint16_t L_281 = (uint16_t)(L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		if ((((int32_t)L_281) <= ((int32_t)((int32_t)56319))))
		{
			goto IL_042f;
		}
	}

IL_0419:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_282 = V_3;
		int32_t L_283 = V_7;
		NullCheck(L_282);
		int32_t L_284 = L_283;
		uint16_t L_285 = (uint16_t)(L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		if ((((int32_t)L_285) < ((int32_t)((int32_t)56320))))
		{
			goto IL_043c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_286 = V_3;
		int32_t L_287 = V_7;
		NullCheck(L_286);
		int32_t L_288 = L_287;
		uint16_t L_289 = (uint16_t)(L_286)->GetAt(static_cast<il2cpp_array_size_t>(L_288));
		if ((((int32_t)L_289) > ((int32_t)((int32_t)57343))))
		{
			goto IL_043c;
		}
	}

IL_042f:
	{
		// AddNumber(lettersFinal[i]);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_290 = V_3;
		int32_t L_291 = V_7;
		NullCheck(L_290);
		int32_t L_292 = L_291;
		uint16_t L_293 = (uint16_t)(L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB(L_293, (&V_0), NULL);
		goto IL_045d;
	}

IL_043c:
	{
		// AppendNumbers();
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AppendNumbersU7C6_1_m1C3530E832EBFA4938CD73CDF6CB644FA1C31505((&V_0), NULL);
		// if (lettersFinal[i] != 0xFFFF)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_294 = V_3;
		int32_t L_295 = V_7;
		NullCheck(L_294);
		int32_t L_296 = L_295;
		uint16_t L_297 = (uint16_t)(L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		if ((((int32_t)L_297) == ((int32_t)((int32_t)65535))))
		{
			goto IL_045d;
		}
	}
	{
		// internalStringBuilder.Append(lettersFinal[i]);
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_298 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_299 = V_3;
		int32_t L_300 = V_7;
		NullCheck(L_299);
		int32_t L_301 = L_300;
		uint16_t L_302 = (uint16_t)(L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		NullCheck(L_298);
		StringBuilder_t* L_303;
		L_303 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_298, L_302, NULL);
	}

IL_045d:
	{
		// for (int i = lettersFinal.Length - 1; i >= 0; i--)
		int32_t L_304 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_304, 1));
	}

IL_0463:
	{
		// for (int i = lettersFinal.Length - 1; i >= 0; i--)
		int32_t L_305 = V_7;
		if ((((int32_t)L_305) >= ((int32_t)0)))
		{
			goto IL_01c5;
		}
	}
	{
		// AppendNumbers();
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		ArabicFixerTool_U3CFixLineU3Eg__AppendNumbersU7C6_1_m1C3530E832EBFA4938CD73CDF6CB644FA1C31505((&V_0), NULL);
		// return internalStringBuilder.ToString();
		StringBuilder_t* L_306 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		NullCheck(L_306);
		String_t* L_307;
		L_307 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_306);
		return L_307;
	}
}
// System.UInt16 ArabicFixerTool::HandleInduNumber(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ArabicFixerTool_HandleInduNumber_m74868F441AFAFF997372C58178527EC27C1A54F0 (uint16_t ___0_letterOrigin, uint16_t ___1_letterFinal, const RuntimeMethod* method) 
{
	{
		// if(letterOrigin ==  0x0030)
		uint16_t L_0 = ___0_letterOrigin;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_000b;
		}
	}
	{
		// return 0x0660;
		return (uint16_t)((int32_t)1632);
	}

IL_000b:
	{
		// else if(letterOrigin == 0x0031)
		uint16_t L_1 = ___0_letterOrigin;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0016;
		}
	}
	{
		// return 0x0661;
		return (uint16_t)((int32_t)1633);
	}

IL_0016:
	{
		// else if(letterOrigin == 0x0032)
		uint16_t L_2 = ___0_letterOrigin;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_0021;
		}
	}
	{
		// return 0x0662;
		return (uint16_t)((int32_t)1634);
	}

IL_0021:
	{
		// else if(letterOrigin == 0x0033)
		uint16_t L_3 = ___0_letterOrigin;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)51)))))
		{
			goto IL_002c;
		}
	}
	{
		// return 0x0663;
		return (uint16_t)((int32_t)1635);
	}

IL_002c:
	{
		// else if(letterOrigin == 0x0034)
		uint16_t L_4 = ___0_letterOrigin;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)52)))))
		{
			goto IL_0037;
		}
	}
	{
		// return 0x0664;
		return (uint16_t)((int32_t)1636);
	}

IL_0037:
	{
		// else if(letterOrigin == 0x0035)
		uint16_t L_5 = ___0_letterOrigin;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_0042;
		}
	}
	{
		// return 0x0665;
		return (uint16_t)((int32_t)1637);
	}

IL_0042:
	{
		// else if(letterOrigin == 0x0036)
		uint16_t L_6 = ___0_letterOrigin;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)54)))))
		{
			goto IL_004d;
		}
	}
	{
		// return 0x0666;
		return (uint16_t)((int32_t)1638);
	}

IL_004d:
	{
		// else if(letterOrigin == 0x0037)
		uint16_t L_7 = ___0_letterOrigin;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)55)))))
		{
			goto IL_0058;
		}
	}
	{
		// return 0x0667;
		return (uint16_t)((int32_t)1639);
	}

IL_0058:
	{
		// else if(letterOrigin == 0x0038)
		uint16_t L_8 = ___0_letterOrigin;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)56)))))
		{
			goto IL_0063;
		}
	}
	{
		// return 0x0668;
		return (uint16_t)((int32_t)1640);
	}

IL_0063:
	{
		// else if(letterOrigin == 0x0039)
		uint16_t L_9 = ___0_letterOrigin;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)57)))))
		{
			goto IL_006e;
		}
	}
	{
		// return 0x0669;
		return (uint16_t)((int32_t)1641);
	}

IL_006e:
	{
		// return letterFinal;
		uint16_t L_10 = ___1_letterFinal;
		return L_10;
	}
}
// System.Boolean ArabicFixerTool::IsIgnoredCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsIgnoredCharacter_mD4266BD327FCF7EA06B0805129FEA7104088A046 (Il2CppChar ___0_ch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool G_B5_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B3_0 = false;
	bool G_B4_0 = false;
	int32_t G_B6_0 = 0;
	bool G_B6_1 = false;
	bool G_B8_0 = false;
	bool G_B7_0 = false;
	int32_t G_B9_0 = 0;
	bool G_B9_1 = false;
	bool G_B11_0 = false;
	bool G_B10_0 = false;
	int32_t G_B12_0 = 0;
	bool G_B12_1 = false;
	{
		// bool isPunctuation = char.IsPunctuation(ch);
		Il2CppChar L_0 = ___0_ch;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_0, NULL);
		// bool isNumber = char.IsNumber(ch);
		Il2CppChar L_2 = ___0_ch;
		bool L_3;
		L_3 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_2, NULL);
		V_0 = L_3;
		// bool isLower = char.IsLower(ch);
		Il2CppChar L_4 = ___0_ch;
		bool L_5;
		L_5 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_4, NULL);
		V_1 = L_5;
		// bool isUpper = char.IsUpper(ch);
		Il2CppChar L_6 = ___0_ch;
		bool L_7;
		L_7 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_6, NULL);
		V_2 = L_7;
		// bool isSymbol = char.IsSymbol(ch);
		Il2CppChar L_8 = ___0_ch;
		bool L_9;
		L_9 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_8, NULL);
		V_3 = L_9;
		// bool isPersianCharacter = ch == (char)0xFB56 || ch == (char)0xFB7A || ch == (char)0xFB8A || ch == (char)0xFB92 || ch == (char)0xFB8E;
		Il2CppChar L_10 = ___0_ch;
		G_B1_0 = L_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)64342))))
		{
			G_B5_0 = L_1;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_ch;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)64378))))
		{
			G_B5_0 = G_B1_0;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_12 = ___0_ch;
		G_B3_0 = G_B2_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)64394))))
		{
			G_B5_0 = G_B2_0;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_13 = ___0_ch;
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)64402))))
		{
			G_B5_0 = G_B3_0;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_14 = ___0_ch;
		G_B6_0 = ((((int32_t)L_14) == ((int32_t)((int32_t)64398)))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_004d;
	}

IL_004c:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_004d:
	{
		V_4 = (bool)G_B6_0;
		// bool isPresentationFormB = (ch <= (char)0xFEFF && ch >= (char)0xFE70);
		Il2CppChar L_15 = ___0_ch;
		G_B7_0 = G_B6_1;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)65279))))
		{
			G_B8_0 = G_B6_1;
			goto IL_0064;
		}
	}
	{
		Il2CppChar L_16 = ___0_ch;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)65136)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0065;
	}

IL_0064:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0065:
	{
		// bool isAcceptableCharacter = isPresentationFormB || isPersianCharacter || ch == (char)0xFBFC;
		bool L_17 = V_4;
		G_B10_0 = G_B9_1;
		if (((int32_t)(G_B9_0|(int32_t)L_17)))
		{
			G_B11_0 = G_B9_1;
			goto IL_0074;
		}
	}
	{
		Il2CppChar L_18 = ___0_ch;
		G_B12_0 = ((((int32_t)L_18) == ((int32_t)((int32_t)64508)))? 1 : 0);
		G_B12_1 = G_B10_0;
		goto IL_0075;
	}

IL_0074:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0075:
	{
		V_5 = (bool)G_B12_0;
		// return isPunctuation ||
		//     isNumber ||
		//         isLower ||
		//         isUpper ||
		//         isSymbol ||
		//         !isAcceptableCharacter ||
		//         ch == 'a' || ch == '>' || ch == '<' || ch == (char)0x061B;
		bool L_19 = V_0;
		bool L_20 = V_1;
		bool L_21 = V_2;
		bool L_22 = V_3;
		if (((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)G_B12_1|(int32_t)L_19))|(int32_t)L_20))|(int32_t)L_21))|(int32_t)L_22)))
		{
			goto IL_009d;
		}
	}
	{
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_24 = ___0_ch;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)97))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_25 = ___0_ch;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)62))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_26 = ___0_ch;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)60))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_27 = ___0_ch;
		return (bool)((((int32_t)L_27) == ((int32_t)((int32_t)1563)))? 1 : 0);
	}

IL_009d:
	{
		return (bool)1;
	}
}
// System.Boolean ArabicFixerTool::IsLeadingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsLeadingLetter_m3020D74BCBE1755BEA9E0402A92A371769B46CCE (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_letters, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B20_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B34_1 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B45_1 = 0;
	{
		// bool lettersThatCannotBeBeforeALeadingLetter = index == 0
		//     || letters[index - 1] == ' '
		//         || letters[index - 1] == '*' // ??? Remove?
		//         || letters[index - 1] == 'A' // ??? Remove?
		//         || char.IsPunctuation(letters[index - 1])
		//         || letters[index - 1] == '>'
		//         || letters[index - 1] == '<'
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Alef
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Dal
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Thal
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Ra2
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Zeen
		//         || letters[index - 1] == (int)IsolatedArabicLetters.PersianZe
		//         //|| letters[index - 1] == (int)IsolatedArabicLetters.AlefMaksora
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Waw
		//         || letters[index - 1] == (int)IsolatedArabicLetters.AlefMad
		//         || letters[index - 1] == (int)IsolatedArabicLetters.AlefHamza
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Hamza
		//         || letters[index - 1] == (int)IsolatedArabicLetters.AlefMaksoor
		//         || letters[index - 1] == (int)IsolatedArabicLetters.WawHamza;
		int32_t L_0 = ___1_index;
		if (!L_0)
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_letters;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_letters;
		int32_t L_6 = ___1_index;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) == ((int32_t)((int32_t)42))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_letters;
		int32_t L_10 = ___1_index;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)65))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___0_letters;
		int32_t L_14 = ___1_index;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_16, NULL);
		if (L_17)
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ___0_letters;
		int32_t L_19 = ___1_index;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		uint16_t L_21 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((((int32_t)L_21) == ((int32_t)((int32_t)62))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = ___0_letters;
		int32_t L_23 = ___1_index;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_25) == ((int32_t)((int32_t)60))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = ___0_letters;
		int32_t L_27 = ___1_index;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		uint16_t L_29 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65165))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = ___0_letters;
		int32_t L_31 = ___1_index;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		uint16_t L_33 = (uint16_t)(L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((((int32_t)L_33) == ((int32_t)((int32_t)65193))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = ___0_letters;
		int32_t L_35 = ___1_index;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		uint16_t L_37 = (uint16_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int32_t)L_37) == ((int32_t)((int32_t)65195))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = ___0_letters;
		int32_t L_39 = ___1_index;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		uint16_t L_41 = (uint16_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((((int32_t)L_41) == ((int32_t)((int32_t)65197))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = ___0_letters;
		int32_t L_43 = ___1_index;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		uint16_t L_45 = (uint16_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((((int32_t)L_45) == ((int32_t)((int32_t)65199))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = ___0_letters;
		int32_t L_47 = ___1_index;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		uint16_t L_49 = (uint16_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((((int32_t)L_49) == ((int32_t)((int32_t)64394))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = ___0_letters;
		int32_t L_51 = ___1_index;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint16_t L_53 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)L_53) == ((int32_t)((int32_t)65261))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54 = ___0_letters;
		int32_t L_55 = ___1_index;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		uint16_t L_57 = (uint16_t)(L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65153))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = ___0_letters;
		int32_t L_59 = ___1_index;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		uint16_t L_61 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_61) == ((int32_t)((int32_t)65155))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = ___0_letters;
		int32_t L_63 = ___1_index;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
		uint16_t L_65 = (uint16_t)(L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if ((((int32_t)L_65) == ((int32_t)((int32_t)65152))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = ___0_letters;
		int32_t L_67 = ___1_index;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		uint16_t L_69 = (uint16_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((((int32_t)L_69) == ((int32_t)((int32_t)65159))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = ___0_letters;
		int32_t L_71 = ___1_index;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract(L_71, 1));
		uint16_t L_73 = (uint16_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		G_B20_0 = ((((int32_t)L_73) == ((int32_t)((int32_t)65157)))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B20_0 = 1;
	}

IL_00e7:
	{
		// bool lettersThatCannotBeALeadingLetter = letters[index] != ' '
		//     && letters[index] != (int)IsolatedArabicLetters.Dal
		//     && letters[index] != (int)IsolatedArabicLetters.Thal
		//         && letters[index] != (int)IsolatedArabicLetters.Ra2
		//         && letters[index] != (int)IsolatedArabicLetters.Zeen
		//         && letters[index] != (int)IsolatedArabicLetters.PersianZe
		//         && letters[index] != (int)IsolatedArabicLetters.Alef
		//         && letters[index] != (int)IsolatedArabicLetters.AlefHamza
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMaksoor
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMad
		//         && letters[index] != (int)IsolatedArabicLetters.WawHamza
		//         && letters[index] != (int)IsolatedArabicLetters.Waw
		//         && letters[index] != (int)IsolatedArabicLetters.Hamza;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_74 = ___0_letters;
		int32_t L_75 = ___1_index;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		uint16_t L_77 = (uint16_t)(L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		G_B21_0 = G_B20_0;
		if ((((int32_t)L_77) == ((int32_t)((int32_t)32))))
		{
			G_B33_0 = G_B20_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = ___0_letters;
		int32_t L_79 = ___1_index;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint16_t L_81 = (uint16_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		G_B22_0 = G_B21_0;
		if ((((int32_t)L_81) == ((int32_t)((int32_t)65193))))
		{
			G_B33_0 = G_B21_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_82 = ___0_letters;
		int32_t L_83 = ___1_index;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint16_t L_85 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		G_B23_0 = G_B22_0;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)65195))))
		{
			G_B33_0 = G_B22_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_86 = ___0_letters;
		int32_t L_87 = ___1_index;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint16_t L_89 = (uint16_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		G_B24_0 = G_B23_0;
		if ((((int32_t)L_89) == ((int32_t)((int32_t)65197))))
		{
			G_B33_0 = G_B23_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = ___0_letters;
		int32_t L_91 = ___1_index;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint16_t L_93 = (uint16_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		G_B25_0 = G_B24_0;
		if ((((int32_t)L_93) == ((int32_t)((int32_t)65199))))
		{
			G_B33_0 = G_B24_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = ___0_letters;
		int32_t L_95 = ___1_index;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		uint16_t L_97 = (uint16_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		G_B26_0 = G_B25_0;
		if ((((int32_t)L_97) == ((int32_t)((int32_t)64394))))
		{
			G_B33_0 = G_B25_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_98 = ___0_letters;
		int32_t L_99 = ___1_index;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		uint16_t L_101 = (uint16_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		G_B27_0 = G_B26_0;
		if ((((int32_t)L_101) == ((int32_t)((int32_t)65165))))
		{
			G_B33_0 = G_B26_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_102 = ___0_letters;
		int32_t L_103 = ___1_index;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		uint16_t L_105 = (uint16_t)(L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		G_B28_0 = G_B27_0;
		if ((((int32_t)L_105) == ((int32_t)((int32_t)65155))))
		{
			G_B33_0 = G_B27_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_106 = ___0_letters;
		int32_t L_107 = ___1_index;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		uint16_t L_109 = (uint16_t)(L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		G_B29_0 = G_B28_0;
		if ((((int32_t)L_109) == ((int32_t)((int32_t)65159))))
		{
			G_B33_0 = G_B28_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_110 = ___0_letters;
		int32_t L_111 = ___1_index;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		uint16_t L_113 = (uint16_t)(L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		G_B30_0 = G_B29_0;
		if ((((int32_t)L_113) == ((int32_t)((int32_t)65153))))
		{
			G_B33_0 = G_B29_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_114 = ___0_letters;
		int32_t L_115 = ___1_index;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		uint16_t L_117 = (uint16_t)(L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		G_B31_0 = G_B30_0;
		if ((((int32_t)L_117) == ((int32_t)((int32_t)65157))))
		{
			G_B33_0 = G_B30_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_118 = ___0_letters;
		int32_t L_119 = ___1_index;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		uint16_t L_121 = (uint16_t)(L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		G_B32_0 = G_B31_0;
		if ((((int32_t)L_121) == ((int32_t)((int32_t)65261))))
		{
			G_B33_0 = G_B31_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_122 = ___0_letters;
		int32_t L_123 = ___1_index;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		uint16_t L_125 = (uint16_t)(L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		G_B34_0 = ((((int32_t)((((int32_t)L_125) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B34_1 = G_B32_0;
		goto IL_016c;
	}

IL_016b:
	{
		G_B34_0 = 0;
		G_B34_1 = G_B33_0;
	}

IL_016c:
	{
		V_0 = (bool)G_B34_0;
		// bool lettersThatCannotBeAfterLeadingLetter = index < letters.Length - 1
		//         && letters[index + 1] != ' '
		//         && letters[index + 1] != '\n'
		//         && letters[index + 1] != '\r'
		//         && !char.IsPunctuation(letters[index + 1] )
		//         && !char.IsNumber(letters[index + 1])
		//         && !char.IsSymbol(letters[index + 1])
		//         && !char.IsLower(letters[index + 1])
		//         && !char.IsUpper(letters[index + 1])
		//         && letters[index + 1] != (int)IsolatedArabicLetters.Hamza;
		int32_t L_126 = ___1_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_127 = ___0_letters;
		NullCheck(L_127);
		G_B35_0 = G_B34_1;
		if ((((int32_t)L_126) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_127)->max_length)), 1)))))
		{
			G_B44_0 = G_B34_1;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_128 = ___0_letters;
		int32_t L_129 = ___1_index;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		uint16_t L_131 = (uint16_t)(L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		G_B36_0 = G_B35_0;
		if ((((int32_t)L_131) == ((int32_t)((int32_t)32))))
		{
			G_B44_0 = G_B35_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_132 = ___0_letters;
		int32_t L_133 = ___1_index;
		NullCheck(L_132);
		int32_t L_134 = ((int32_t)il2cpp_codegen_add(L_133, 1));
		uint16_t L_135 = (uint16_t)(L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		G_B37_0 = G_B36_0;
		if ((((int32_t)L_135) == ((int32_t)((int32_t)10))))
		{
			G_B44_0 = G_B36_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_136 = ___0_letters;
		int32_t L_137 = ___1_index;
		NullCheck(L_136);
		int32_t L_138 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		uint16_t L_139 = (uint16_t)(L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		G_B38_0 = G_B37_0;
		if ((((int32_t)L_139) == ((int32_t)((int32_t)13))))
		{
			G_B44_0 = G_B37_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_140 = ___0_letters;
		int32_t L_141 = ___1_index;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		uint16_t L_143 = (uint16_t)(L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_144;
		L_144 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_143, NULL);
		G_B39_0 = G_B38_0;
		if (L_144)
		{
			G_B44_0 = G_B38_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_145 = ___0_letters;
		int32_t L_146 = ___1_index;
		NullCheck(L_145);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		uint16_t L_148 = (uint16_t)(L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_149;
		L_149 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_148, NULL);
		G_B40_0 = G_B39_0;
		if (L_149)
		{
			G_B44_0 = G_B39_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_150 = ___0_letters;
		int32_t L_151 = ___1_index;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		uint16_t L_153 = (uint16_t)(L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_154;
		L_154 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_153, NULL);
		G_B41_0 = G_B40_0;
		if (L_154)
		{
			G_B44_0 = G_B40_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_155 = ___0_letters;
		int32_t L_156 = ___1_index;
		NullCheck(L_155);
		int32_t L_157 = ((int32_t)il2cpp_codegen_add(L_156, 1));
		uint16_t L_158 = (uint16_t)(L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_159;
		L_159 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_158, NULL);
		G_B42_0 = G_B41_0;
		if (L_159)
		{
			G_B44_0 = G_B41_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_160 = ___0_letters;
		int32_t L_161 = ___1_index;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		uint16_t L_163 = (uint16_t)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_164;
		L_164 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_163, NULL);
		G_B43_0 = G_B42_0;
		if (L_164)
		{
			G_B44_0 = G_B42_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_165 = ___0_letters;
		int32_t L_166 = ___1_index;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		uint16_t L_168 = (uint16_t)(L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		G_B45_0 = ((((int32_t)((((int32_t)L_168) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B45_1 = G_B43_0;
		goto IL_01de;
	}

IL_01dd:
	{
		G_B45_0 = 0;
		G_B45_1 = G_B44_0;
	}

IL_01de:
	{
		V_1 = (bool)G_B45_0;
		// return lettersThatCannotBeBeforeALeadingLetter && lettersThatCannotBeALeadingLetter && lettersThatCannotBeAfterLeadingLetter;
		bool L_169 = V_0;
		bool L_170 = V_1;
		return (bool)((int32_t)(((int32_t)(G_B45_1&(int32_t)L_169))&(int32_t)L_170));
	}
}
// System.Boolean ArabicFixerTool::IsFinishingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsFinishingLetter_m34D81454EFE842A4E5135A5BBB5A1C8493B19FD1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_letters, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	{
		// bool lettersThatCannotBeBeforeAFinishingLetter = (index == 0) ? false :
		//         letters[index - 1] != ' '
		// 
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Dal
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Thal
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Ra2
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Zeen
		//         && letters[index - 1] != (int)IsolatedArabicLetters.PersianZe
		//         //&& letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksora
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Waw
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Alef
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefMad
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefHamza
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksoor
		//         && letters[index - 1] != (int)IsolatedArabicLetters.WawHamza
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Hamza
		// 
		//         && !char.IsPunctuation(letters[index - 1])
		//         && !char.IsSymbol(letters[index-1])
		//         && letters[index - 1] != '>'
		//         && letters[index - 1] != '<';
		int32_t L_0 = ___1_index;
		if (!L_0)
		{
			goto IL_00e3;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_letters;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_letters;
		int32_t L_6 = ___1_index;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) == ((int32_t)((int32_t)65193))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_letters;
		int32_t L_10 = ___1_index;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)65195))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___0_letters;
		int32_t L_14 = ___1_index;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65197))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___0_letters;
		int32_t L_18 = ___1_index;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		uint16_t L_20 = (uint16_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)((int32_t)65199))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___0_letters;
		int32_t L_22 = ___1_index;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((((int32_t)L_24) == ((int32_t)((int32_t)64394))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = ___0_letters;
		int32_t L_26 = ___1_index;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)65261))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = ___0_letters;
		int32_t L_30 = ___1_index;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		uint16_t L_32 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((((int32_t)L_32) == ((int32_t)((int32_t)65165))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = ___0_letters;
		int32_t L_34 = ___1_index;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		uint16_t L_36 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_36) == ((int32_t)((int32_t)65153))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = ___0_letters;
		int32_t L_38 = ___1_index;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((((int32_t)L_40) == ((int32_t)((int32_t)65155))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = ___0_letters;
		int32_t L_42 = ___1_index;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		uint16_t L_44 = (uint16_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((((int32_t)L_44) == ((int32_t)((int32_t)65159))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_45 = ___0_letters;
		int32_t L_46 = ___1_index;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
		uint16_t L_48 = (uint16_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((((int32_t)L_48) == ((int32_t)((int32_t)65157))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = ___0_letters;
		int32_t L_50 = ___1_index;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		uint16_t L_52 = (uint16_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((((int32_t)L_52) == ((int32_t)((int32_t)65152))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = ___0_letters;
		int32_t L_54 = ___1_index;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		uint16_t L_56 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_56, NULL);
		if (L_57)
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = ___0_letters;
		int32_t L_59 = ___1_index;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		uint16_t L_61 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_61, NULL);
		if (L_62)
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_63 = ___0_letters;
		int32_t L_64 = ___1_index;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		uint16_t L_66 = (uint16_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		if ((((int32_t)L_66) == ((int32_t)((int32_t)62))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = ___0_letters;
		int32_t L_68 = ___1_index;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		uint16_t L_70 = (uint16_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		G_B20_0 = ((((int32_t)((((int32_t)L_70) == ((int32_t)((int32_t)60)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e4;
	}

IL_00e0:
	{
		G_B20_0 = 0;
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B20_0 = 0;
	}

IL_00e4:
	{
		// bool lettersThatCannotBeFinishingLetters = letters[index] != ' ' && letters[index] != (int)IsolatedArabicLetters.Hamza;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_71 = ___0_letters;
		int32_t L_72 = ___1_index;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint16_t L_74 = (uint16_t)(L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B21_0 = G_B20_0;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)32))))
		{
			G_B22_0 = G_B20_0;
			goto IL_00fa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75 = ___0_letters;
		int32_t L_76 = ___1_index;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint16_t L_78 = (uint16_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		G_B23_0 = ((((int32_t)((((int32_t)L_78) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B23_1 = G_B21_0;
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B23_0 = 0;
		G_B23_1 = G_B22_0;
	}

IL_00fb:
	{
		V_0 = (bool)G_B23_0;
		// return lettersThatCannotBeBeforeAFinishingLetter && lettersThatCannotBeFinishingLetters;
		bool L_79 = V_0;
		return (bool)((int32_t)(G_B23_1&(int32_t)L_79));
	}
}
// System.Boolean ArabicFixerTool::IsMiddleLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsMiddleLetter_m9610EB7249C81792676BF357316EA65849F1942F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_letters, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B15_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B44_0 = 0;
	{
		// bool lettersThatCannotBeMiddleLetters = (index == 0) ? false :
		//     letters[index] != (int)IsolatedArabicLetters.Alef
		//         && letters[index] != (int)IsolatedArabicLetters.Dal
		//         && letters[index] != (int)IsolatedArabicLetters.Thal
		//         && letters[index] != (int)IsolatedArabicLetters.Ra2
		//         && letters[index] != (int)IsolatedArabicLetters.Zeen
		//         && letters[index] != (int)IsolatedArabicLetters.PersianZe
		//         //&& letters[index] != (int)IsolatedArabicLetters.AlefMaksora
		//         && letters[index] != (int)IsolatedArabicLetters.Waw
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMad
		//         && letters[index] != (int)IsolatedArabicLetters.AlefHamza
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMaksoor
		//         && letters[index] != (int)IsolatedArabicLetters.WawHamza
		//         && letters[index] != (int)IsolatedArabicLetters.Hamza;
		int32_t L_0 = ___1_index;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_letters;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)65165))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_letters;
		int32_t L_6 = ___1_index;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) == ((int32_t)((int32_t)65193))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_letters;
		int32_t L_10 = ___1_index;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)65195))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___0_letters;
		int32_t L_14 = ___1_index;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65197))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___0_letters;
		int32_t L_18 = ___1_index;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint16_t L_20 = (uint16_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)((int32_t)65199))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___0_letters;
		int32_t L_22 = ___1_index;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((((int32_t)L_24) == ((int32_t)((int32_t)64394))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = ___0_letters;
		int32_t L_26 = ___1_index;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)65261))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = ___0_letters;
		int32_t L_30 = ___1_index;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint16_t L_32 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((((int32_t)L_32) == ((int32_t)((int32_t)65153))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = ___0_letters;
		int32_t L_34 = ___1_index;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint16_t L_36 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_36) == ((int32_t)((int32_t)65155))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = ___0_letters;
		int32_t L_38 = ___1_index;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((((int32_t)L_40) == ((int32_t)((int32_t)65159))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = ___0_letters;
		int32_t L_42 = ___1_index;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint16_t L_44 = (uint16_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((((int32_t)L_44) == ((int32_t)((int32_t)65157))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_45 = ___0_letters;
		int32_t L_46 = ___1_index;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint16_t L_48 = (uint16_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		G_B15_0 = ((((int32_t)((((int32_t)L_48) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0087;
	}

IL_0083:
	{
		G_B15_0 = 0;
		goto IL_0087;
	}

IL_0086:
	{
		G_B15_0 = 0;
	}

IL_0087:
	{
		V_0 = (bool)G_B15_0;
		// bool lettersThatCannotBeBeforeMiddleCharacters = (index == 0) ? false :
		//         letters[index - 1] != (int)IsolatedArabicLetters.Alef
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Dal
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Thal
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Ra2
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Zeen
		//         && letters[index - 1] != (int)IsolatedArabicLetters.PersianZe
		//         //&& letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksora
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Waw
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefMad
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefHamza
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksoor
		//         && letters[index - 1] != (int)IsolatedArabicLetters.WawHamza
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Hamza
		//         && !char.IsPunctuation(letters[index - 1])
		//         && letters[index - 1] != '>'
		//         && letters[index - 1] != '<'
		//         && letters[index - 1] != ' '
		//         && letters[index - 1] != '*';
		int32_t L_49 = ___1_index;
		if (!L_49)
		{
			goto IL_0165;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = ___0_letters;
		int32_t L_51 = ___1_index;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint16_t L_53 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)L_53) == ((int32_t)((int32_t)65165))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54 = ___0_letters;
		int32_t L_55 = ___1_index;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		uint16_t L_57 = (uint16_t)(L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65193))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = ___0_letters;
		int32_t L_59 = ___1_index;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		uint16_t L_61 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_61) == ((int32_t)((int32_t)65195))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = ___0_letters;
		int32_t L_63 = ___1_index;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
		uint16_t L_65 = (uint16_t)(L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if ((((int32_t)L_65) == ((int32_t)((int32_t)65197))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = ___0_letters;
		int32_t L_67 = ___1_index;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		uint16_t L_69 = (uint16_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((((int32_t)L_69) == ((int32_t)((int32_t)65199))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = ___0_letters;
		int32_t L_71 = ___1_index;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract(L_71, 1));
		uint16_t L_73 = (uint16_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if ((((int32_t)L_73) == ((int32_t)((int32_t)64394))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_74 = ___0_letters;
		int32_t L_75 = ___1_index;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		uint16_t L_77 = (uint16_t)(L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		if ((((int32_t)L_77) == ((int32_t)((int32_t)65261))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = ___0_letters;
		int32_t L_79 = ___1_index;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_subtract(L_79, 1));
		uint16_t L_81 = (uint16_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((((int32_t)L_81) == ((int32_t)((int32_t)65153))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_82 = ___0_letters;
		int32_t L_83 = ___1_index;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract(L_83, 1));
		uint16_t L_85 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		if ((((int32_t)L_85) == ((int32_t)((int32_t)65155))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_86 = ___0_letters;
		int32_t L_87 = ___1_index;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_subtract(L_87, 1));
		uint16_t L_89 = (uint16_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		if ((((int32_t)L_89) == ((int32_t)((int32_t)65159))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = ___0_letters;
		int32_t L_91 = ___1_index;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_subtract(L_91, 1));
		uint16_t L_93 = (uint16_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		if ((((int32_t)L_93) == ((int32_t)((int32_t)65157))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = ___0_letters;
		int32_t L_95 = ___1_index;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		uint16_t L_97 = (uint16_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		if ((((int32_t)L_97) == ((int32_t)((int32_t)65152))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_98 = ___0_letters;
		int32_t L_99 = ___1_index;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		uint16_t L_101 = (uint16_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_101, NULL);
		if (L_102)
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_103 = ___0_letters;
		int32_t L_104 = ___1_index;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_subtract(L_104, 1));
		uint16_t L_106 = (uint16_t)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		if ((((int32_t)L_106) == ((int32_t)((int32_t)62))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_107 = ___0_letters;
		int32_t L_108 = ___1_index;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_subtract(L_108, 1));
		uint16_t L_110 = (uint16_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		if ((((int32_t)L_110) == ((int32_t)((int32_t)60))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_111 = ___0_letters;
		int32_t L_112 = ___1_index;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_subtract(L_112, 1));
		uint16_t L_114 = (uint16_t)(L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		if ((((int32_t)L_114) == ((int32_t)((int32_t)32))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_115 = ___0_letters;
		int32_t L_116 = ___1_index;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract(L_116, 1));
		uint16_t L_118 = (uint16_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		G_B35_0 = ((((int32_t)((((int32_t)L_118) == ((int32_t)((int32_t)42)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0166;
	}

IL_0162:
	{
		G_B35_0 = 0;
		goto IL_0166;
	}

IL_0165:
	{
		G_B35_0 = 0;
	}

IL_0166:
	{
		V_1 = (bool)G_B35_0;
		// bool lettersThatCannotBeAfterMiddleCharacters = (index < letters.Length - 1) && (letters[index + 1] != ' '
		//     && letters[index + 1] != '\r'
		//     && letters[index + 1] != (int)IsolatedArabicLetters.Hamza
		//     && !char.IsNumber(letters[index + 1])
		//     && !char.IsSymbol(letters[index + 1])
		//     && !char.IsPunctuation(letters[index + 1]));
		int32_t L_119 = ___1_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_120 = ___0_letters;
		NullCheck(L_120);
		if ((((int32_t)L_119) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_120)->max_length)), 1)))))
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_121 = ___0_letters;
		int32_t L_122 = ___1_index;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		uint16_t L_124 = (uint16_t)(L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		if ((((int32_t)L_124) == ((int32_t)((int32_t)32))))
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_125 = ___0_letters;
		int32_t L_126 = ___1_index;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, 1));
		uint16_t L_128 = (uint16_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		if ((((int32_t)L_128) == ((int32_t)((int32_t)13))))
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_129 = ___0_letters;
		int32_t L_130 = ___1_index;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		uint16_t L_132 = (uint16_t)(L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		if ((((int32_t)L_132) == ((int32_t)((int32_t)65152))))
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_133 = ___0_letters;
		int32_t L_134 = ___1_index;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		uint16_t L_136 = (uint16_t)(L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_137;
		L_137 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_136, NULL);
		if (L_137)
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_138 = ___0_letters;
		int32_t L_139 = ___1_index;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		uint16_t L_141 = (uint16_t)(L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_142;
		L_142 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_141, NULL);
		if (L_142)
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_143 = ___0_letters;
		int32_t L_144 = ___1_index;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 1));
		uint16_t L_146 = (uint16_t)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_147;
		L_147 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_146, NULL);
		G_B44_0 = ((((int32_t)L_147) == ((int32_t)0))? 1 : 0);
		goto IL_01b8;
	}

IL_01b4:
	{
		G_B44_0 = 0;
		goto IL_01b8;
	}

IL_01b7:
	{
		G_B44_0 = 0;
	}

IL_01b8:
	{
		// return lettersThatCannotBeAfterMiddleCharacters &&
		//        lettersThatCannotBeBeforeMiddleCharacters &&
		//        lettersThatCannotBeMiddleLetters &&
		//        !char.IsPunctuation(letters[index + 1]);
		bool L_148 = V_1;
		bool L_149 = V_0;
		if (!((int32_t)(((int32_t)(G_B44_0&(int32_t)L_148))&(int32_t)L_149)))
		{
			goto IL_01cc;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_150 = ___0_letters;
		int32_t L_151 = ___1_index;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		uint16_t L_153 = (uint16_t)(L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_154;
		L_154 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_153, NULL);
		return (bool)((((int32_t)L_154) == ((int32_t)0))? 1 : 0);
	}

IL_01cc:
	{
		return (bool)0;
	}
}
// System.Void ArabicFixerTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool__ctor_mE49F25A33FB00659A30AFF076FA341CC0BEE1597 (ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ArabicFixerTool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool__cctor_mECBB81AC0146B9264BC45BA21FC0F9DCB97D9A6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static bool showTashkeel = true;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___showTashkeel_0 = (bool)1;
		// internal static bool combineTashkeel = true;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1 = (bool)1;
		// internal static bool useHinduNumbers = false;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___useHinduNumbers_2 = (bool)0;
		// internal static StringBuilder internalStringBuilder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3), (void*)L_0);
		return;
	}
}
// System.Void ArabicFixerTool::<RemoveTashkeel>g__IncrementSB|4_0(System.String&,System.Int32,ArabicFixerTool/<>c__DisplayClass4_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_U3CRemoveTashkeelU3Eg__IncrementSBU7C4_0_m3ABBA4A0C2300C5FB23C10DAB6EB8DBB55D46023 (String_t** ___0_str, int32_t ___1_i, U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588* ___2_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (i - lastSplitIndex > 0) {
		int32_t L_0 = ___1_i;
		U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588* L_1 = ___2_p;
		int32_t L_2 = L_1->___lastSplitIndex_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_2))) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		// internalStringBuilder.Append(str, lastSplitIndex, i - lastSplitIndex);
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		String_t** L_4 = ___0_str;
		String_t* L_5 = *((String_t**)L_4);
		U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588* L_6 = ___2_p;
		int32_t L_7 = L_6->___lastSplitIndex_0;
		int32_t L_8 = ___1_i;
		U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588* L_9 = ___2_p;
		int32_t L_10 = L_9->___lastSplitIndex_0;
		NullCheck(L_3);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_3, L_5, L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_10)), NULL);
	}

IL_0026:
	{
		// lastSplitIndex = i + 1;
		U3CU3Ec__DisplayClass4_0_tE70C185726043C22E98FD417526FCF354506C588* L_12 = ___2_p;
		int32_t L_13 = ___1_i;
		L_12->___lastSplitIndex_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// }
		return;
	}
}
// System.Void ArabicFixerTool::<FixLine>g__AddNumber|6_0(System.Char,ArabicFixerTool/<>c__DisplayClass6_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_U3CFixLineU3Eg__AddNumberU7C6_0_m3B6DE40336558B73B74CB1BE98E5EA62F1C17FEB (Il2CppChar ___0_value, U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* ___1_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (numberList == null) {
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_0 = ___1_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_1 = L_0->___numberList_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// numberList = new List<char>();
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_2 = ___1_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)il2cpp_codegen_object_new(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82(L_3, List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		L_2->___numberList_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___numberList_0), (void*)L_3);
	}

IL_0013:
	{
		// numberList.Add(value);
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_4 = ___1_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_5 = L_4->___numberList_0;
		Il2CppChar L_6 = ___0_value;
		NullCheck(L_5);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_5, L_6, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ArabicFixerTool::<FixLine>g__AppendNumbers|6_1(ArabicFixerTool/<>c__DisplayClass6_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool_U3CFixLineU3Eg__AppendNumbersU7C6_1_m1C3530E832EBFA4938CD73CDF6CB644FA1C31505 (U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (numberList != null && numberList.Count > 0)
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_0 = ___0_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_1 = L_0->___numberList_0;
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_2 = ___0_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = L_2->___numberList_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_3, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// for (int j = 0; j < numberList.Count; j++)
		V_0 = 0;
		goto IL_0043;
	}

IL_001a:
	{
		// internalStringBuilder.Append(numberList[numberList.Count - 1 - j]);
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		StringBuilder_t* L_5 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___internalStringBuilder_3;
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_6 = ___0_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_7 = L_6->___numberList_0;
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_8 = ___0_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_9 = L_8->___numberList_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_9, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		int32_t L_11 = V_0;
		NullCheck(L_7);
		Il2CppChar L_12;
		L_12 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, 1)), L_11)), List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
		NullCheck(L_5);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, L_12, NULL);
		// for (int j = 0; j < numberList.Count; j++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0043:
	{
		// for (int j = 0; j < numberList.Count; j++)
		int32_t L_15 = V_0;
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_16 = ___0_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_17 = L_16->___numberList_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_17, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		// numberList.Clear();
		U3CU3Ec__DisplayClass6_0_t56503CA9F00A33884D3A187458E6570725982E25* L_19 = ___0_p;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_20 = L_19->___numberList_0;
		NullCheck(L_20);
		List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_inline(L_20, List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_RuntimeMethod_var);
	}

IL_005c:
	{
		// }
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
// System.Void FixArabic3DText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixArabic3DText_Start_mDC649A542CECC5D7BF2F2DE899F12F04A3188DA9 (FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// TextMesh textMesh = gameObject.GetComponent<TextMesh>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_1;
		L_1 = GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16(L_0, GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		// string fixedText = ArabicFixer.Fix(textMesh.text, showTashkeel, useHinduNumbers);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_1, NULL);
		bool L_3 = __this->___showTashkeel_4;
		bool L_4 = __this->___useHinduNumbers_5;
		String_t* L_5;
		L_5 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// gameObject.GetComponent<TextMesh>().text = fixedText;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_7;
		L_7 = GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16(L_6, GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		String_t* L_8 = V_0;
		NullCheck(L_7);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_7, L_8, NULL);
		// Debug.Log(fixedText);
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// }
		return;
	}
}
// System.Void FixArabic3DText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixArabic3DText__ctor_mE4B892B4A1B1AD92C60FD79DC157E86DB546A973 (FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199* __this, const RuntimeMethod* method) 
{
	{
		// public bool showTashkeel = true;
		__this->___showTashkeel_4 = (bool)1;
		// public bool useHinduNumbers = true;
		__this->___useHinduNumbers_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ArabicSupportTester::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicSupportTester_Start_m6626EB254D0454C275568740C17B3063D770E470 (ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// ExpectedTexts = FindObjectsOfType(typeof(ExpectedFixedText)) as ExpectedFixedText[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_1, NULL);
		__this->___ExpectedTexts_4 = ((ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464*)IsInst((RuntimeObject*)L_2, ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ExpectedTexts_4), (void*)((ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464*)IsInst((RuntimeObject*)L_2, ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var)));
		// foreach (var expectedText in ExpectedTexts)
		ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* L_3 = __this->___ExpectedTexts_4;
		V_0 = L_3;
		V_1 = 0;
		goto IL_0031;
	}

IL_0025:
	{
		// foreach (var expectedText in ExpectedTexts)
		ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// expectedText.Fix();
		NullCheck(L_7);
		ExpectedFixedText_Fix_mEB1489C852AF322CC8F11E7AA83AFC8DB59A6D3F(L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0031:
	{
		// foreach (var expectedText in ExpectedTexts)
		int32_t L_9 = V_1;
		ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ArabicSupportTester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicSupportTester__ctor_m78E87DD94639BC95149E36521AFD7E9498A0A524 (ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String ExpectedFixedText::get_Fixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExpectedFixedText_get_Fixed_m96969319F2315D194C226BBB69E2E9D0C186F8F5 (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) 
{
	{
		// public string Fixed { get; private set; }
		String_t* L_0 = __this->___U3CFixedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void ExpectedFixedText::set_Fixed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823 (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Fixed { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CFixedU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFixedU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void ExpectedFixedText::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText_Fix_mEB1489C852AF322CC8F11E7AA83AFC8DB59A6D3F (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) 
{
	{
		// Fixed = ArabicFixer.Fix(Unfixed, ShowTashkeel, UseHinduNumbers);
		String_t* L_0 = __this->___Unfixed_4;
		bool L_1 = __this->___ShowTashkeel_7;
		bool L_2 = __this->___UseHinduNumbers_8;
		String_t* L_3;
		L_3 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_0, L_1, L_2, NULL);
		ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void ExpectedFixedText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText__ctor_m15BD37C6A07DAD77FEE27CA5EB83846ACF64AAF2 (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseHinduNumbers = true;
		__this->___UseHinduNumbers_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_Start_mEC610EE12F006B73DD8DBE742E8660D39BFF518F (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void test::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_Update_m2812B4DBD8C297CA22608BEA1DB1C608261F6822 (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test__ctor_m679060463014204CFBD2EA912506DF1462D5CD32 (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ayatHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ayatHandler_Start_m621271F6F7314DE26134AEE9A29BC768B97DEBA4 (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ayatHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ayatHandler_Update_m176383F1A26D1494743417A8F10F2701519D7A7C (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ayatHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ayatHandler_OnEnable_m2156CA26E125E636EC1DEBB769C7114802CA71D3 (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) 
{
	{
		// slider.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_5;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (0.0f));
		// }
		return;
	}
}
// System.Void ayatHandler::playSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ayatHandler_playSlider_m6F09A0F3983A6838061381C49F8490A3D4CEE3CC (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(playingSlider());
		RuntimeObject* L_0;
		L_0 = ayatHandler_playingSlider_mDF6AF8C294DEE579930060804187B5F98F7E75CF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ayatHandler::playingSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ayatHandler_playingSlider_mDF6AF8C294DEE579930060804187B5F98F7E75CF (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* L_0 = (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18*)il2cpp_codegen_object_new(U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CplayingSliderU3Ed__7__ctor_mD3CE88BEA84C183D20A25CA9FFB4F5314BBE79B8(L_0, 0, NULL);
		U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ayatHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ayatHandler__ctor_m24CD7485D84DC7FA323BA9BB6B4E41B096652BF9 (ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ayatHandler/<playingSlider>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayingSliderU3Ed__7__ctor_mD3CE88BEA84C183D20A25CA9FFB4F5314BBE79B8 (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ayatHandler/<playingSlider>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayingSliderU3Ed__7_System_IDisposable_Dispose_m057A9466591EFBA0E6112D7219165F574367318F (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ayatHandler/<playingSlider>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CplayingSliderU3Ed__7_MoveNext_m7E4E20AB4CF14A602879FAE648868F4B9FD842EB (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float i = 0.0f;
		__this->___U3CiU3E5__2_3 = (0.0f);
		// slider.maxValue = duration;
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_4 = V_1;
		NullCheck(L_4);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4->___slider_5;
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___duration_4;
		NullCheck(L_5);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_5, L_7, NULL);
		goto IL_007f;
	}

IL_003c:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// i += 0.1f;
		float L_9 = __this->___U3CiU3E5__2_3;
		__this->___U3CiU3E5__2_3 = ((float)il2cpp_codegen_add(L_9, (0.100000001f)));
		// slider.value = i;
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_10 = V_1;
		NullCheck(L_10);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = L_10->___slider_5;
		float L_12 = __this->___U3CiU3E5__2_3;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_11, L_12);
	}

IL_007f:
	{
		// while (i < duration)
		float L_13 = __this->___U3CiU3E5__2_3;
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->___duration_4;
		if ((((float)L_13) < ((float)L_15)))
		{
			goto IL_003c;
		}
	}
	{
		// controls.playBtn.interactable = true;
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_16 = V_1;
		NullCheck(L_16);
		controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* L_17 = L_16->___controls_6;
		NullCheck(L_17);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = L_17->___playBtn_10;
		NullCheck(L_18);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_18, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ayatHandler/<playingSlider>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CplayingSliderU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA9555BBB55C6490BB0339DB97BE42DF41BDD1C0C (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ayatHandler/<playingSlider>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayingSliderU3Ed__7_System_Collections_IEnumerator_Reset_m4F328DAACFEDB91E54300A93737680B71EF4F4D8 (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CplayingSliderU3Ed__7_System_Collections_IEnumerator_Reset_m4F328DAACFEDB91E54300A93737680B71EF4F4D8_RuntimeMethod_var)));
	}
}
// System.Object ayatHandler/<playingSlider>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CplayingSliderU3Ed__7_System_Collections_IEnumerator_get_Current_m098A033918D59AED3C29F49EB1A7EF2726FD7CD2 (U3CplayingSliderU3Ed__7_t6BCAE1F7F450CBC9EE3E199054DECAC723CC6B18* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void controlHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler_Start_m7F3DFB5F699BEE0BB07F61A7C122ECC957833E71 (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void controlHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler_OnEnable_m81A69FDE734B59F3A14291F9F505C5E8828C2CF6 (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentAyatIndex = 0;
		__this->___currentAyatIndex_8 = 0;
		// totalAyat = allAyat.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___allAyat_4;
		NullCheck(L_0);
		__this->___totalAyat_9 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// allAyat[currentAyatIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___allAyat_4;
		int32_t L_2 = __this->___currentAyatIndex_8;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// currentAyat = allAyat[currentAyatIndex].GetComponent<ayatHandler>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___allAyat_4;
		int32_t L_6 = __this->___currentAyatIndex_8;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_9;
		L_9 = GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470(L_8, GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470_RuntimeMethod_var);
		__this->___currentAyat_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAyat_7), (void*)L_9);
		// }
		return;
	}
}
// System.Void controlHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler_Update_m1A8D7E4D3B7D8BB2A732A73529F44DCCB125CCF2 (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void controlHandler::onClickPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler_onClickPlay_m47E646F0946AB05A0CE33F58280BF3CD08F23A17 (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	{
		// currentAyat.slider.value = 0;
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_0 = __this->___currentAyat_7;
		NullCheck(L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = L_0->___slider_5;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (0.0f));
		// currentAyat.playSlider();
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_2 = __this->___currentAyat_7;
		NullCheck(L_2);
		ayatHandler_playSlider_m6F09A0F3983A6838061381C49F8490A3D4CEE3CC(L_2, NULL);
		// audioSource.PlayOneShot(allAyatAudios[currentAyatIndex]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audioSource_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_4 = __this->___allAyatAudios_5;
		int32_t L_5 = __this->___currentAyatIndex_8;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_7, NULL);
		// playBtn.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___playBtn_10;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void controlHandler::onClickNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler_onClickNext_m72ACC814EAF11A9FC43CBFB9D3E56A91C00A142A (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAyatIndex < allAyat.Length - 1)
		int32_t L_0 = __this->___currentAyatIndex_8;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___allAyat_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0038;
		}
	}
	{
		// allAyat[currentAyatIndex].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___allAyat_4;
		int32_t L_3 = __this->___currentAyatIndex_8;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// currentAyatIndex++;
		int32_t L_7 = __this->___currentAyatIndex_8;
		__this->___currentAyatIndex_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0038:
	{
		// allAyat[currentAyatIndex].gameObject.SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___allAyat_4;
		int32_t L_9 = __this->___currentAyatIndex_8;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// currentAyat = allAyat[currentAyatIndex].GetComponent<ayatHandler>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___allAyat_4;
		int32_t L_14 = __this->___currentAyatIndex_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_17;
		L_17 = GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470(L_16, GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470_RuntimeMethod_var);
		__this->___currentAyat_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAyat_7), (void*)L_17);
		// }
		return;
	}
}
// System.Void controlHandler::onClickPrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler_onClickPrevious_m037E6F87BF785FB461DBC2B9453E0F7791152F91 (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAyatIndex > 0)
		int32_t L_0 = __this->___currentAyatIndex_8;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// allAyat[currentAyatIndex].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___allAyat_4;
		int32_t L_2 = __this->___currentAyatIndex_8;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// currentAyatIndex--;
		int32_t L_6 = __this->___currentAyatIndex_8;
		__this->___currentAyatIndex_8 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_002f:
	{
		// allAyat[currentAyatIndex].gameObject.SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___allAyat_4;
		int32_t L_8 = __this->___currentAyatIndex_8;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// currentAyat = allAyat[currentAyatIndex].GetComponent<ayatHandler>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___allAyat_4;
		int32_t L_13 = __this->___currentAyatIndex_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		ayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6* L_16;
		L_16 = GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470(L_15, GameObject_GetComponent_TisayatHandler_t2785AC26816BC6E5BB8EC454DFEC7BF2D0242AA6_m5743E9910E9DD0A8F35B38FFB64C11C0C9B4B470_RuntimeMethod_var);
		__this->___currentAyat_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAyat_7), (void*)L_16);
		// }
		return;
	}
}
// System.Void controlHandler::onClickRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler_onClickRecord_m67E644E4D9E4C597AB87742AE9F75DB02B0B21D1 (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void controlHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlHandler__ctor_m70E1B850717543925A7DDD624544ACD667087FFB (controlHandler_t59E7B101B2B25CC52E84AEA32E8E00F39A4C681E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SplashHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashHandler_Start_mA56873362282813459A03D9584EB3FE7988DECCE (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SplashHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashHandler_Update_m4D7E813918E48476B323DF6415A6A8A1AF365E77 (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SplashHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashHandler_OnEnable_mC58B8114F4F599666177F82D65C3CB6834C56841 (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) 
{
	{
		// fadeInLogo();
		SplashHandler_fadeInLogo_m867628BBD6B88770EBEBE44960E0BA103B2A44EB(__this, NULL);
		// }
		return;
	}
}
// System.Void SplashHandler::fadeInLogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashHandler_fadeInLogo_m867628BBD6B88770EBEBE44960E0BA103B2A44EB (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(fadeInLogoStart());
		RuntimeObject* L_0;
		L_0 = SplashHandler_fadeInLogoStart_m8DF59048154C764A3D01A8143FBB307926E61873(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SplashHandler::fadeInLogoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashHandler_fadeInLogoStart_m8DF59048154C764A3D01A8143FBB307926E61873 (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* L_0 = (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54*)il2cpp_codegen_object_new(U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CfadeInLogoStartU3Ed__9__ctor_m9AFC688994ECF74FCCDE266E285AB2EC28077506(L_0, 0, NULL);
		U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SplashHandler::onClickSkip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashHandler_onClickSkip_mE44A178ECF7ED49BCDD69DE46A210BAB0CE1DB6A (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void SplashHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashHandler__ctor_m64677FF6B2DA33504275C985F81F62E6BFFBB062 (SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SplashHandler/<fadeInLogoStart>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeInLogoStartU3Ed__9__ctor_m9AFC688994ECF74FCCDE266E285AB2EC28077506 (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SplashHandler/<fadeInLogoStart>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeInLogoStartU3Ed__9_System_IDisposable_Dispose_mCA3BF29F5C6CF706A5EA00132BBB3189C4E12155 (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SplashHandler/<fadeInLogoStart>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CfadeInLogoStartU3Ed__9_MoveNext_m055AF1533486FA494071A4E96DFEE6BC5EA4E68B (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0096;
	}

IL_0020:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// logo.color = new Color(logo.color.r, logo.color.g, logo.color.b, logo.color.a + 0.05f);
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_5 = V_1;
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = L_5->___logo_4;
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_7 = V_1;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = L_7->___logo_4;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___r_0;
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_11 = V_1;
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = L_11->___logo_4;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___g_1;
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_15 = V_1;
		NullCheck(L_15);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = L_15->___logo_4;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_16);
		float L_18 = L_17.___b_2;
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_19 = V_1;
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = L_19->___logo_4;
		NullCheck(L_20);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_20);
		float L_22 = L_21.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		memset((&L_23), 0, sizeof(L_23));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_23), L_10, L_14, L_18, ((float)il2cpp_codegen_add(L_22, (0.0500000007f))), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_23);
	}

IL_0096:
	{
		// while (logo.color.a < 1)
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_24 = V_1;
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = L_24->___logo_4;
		NullCheck(L_25);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_25);
		float L_27 = L_26.___a_3;
		if ((((float)L_27) < ((float)(1.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// tutorial1.SetActive(true);
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_28 = V_1;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = L_28->___tutorial1_6;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
		// splash.SetActive(false);
		SplashHandler_tBAE0674DB866797D5F3BAC7C93E368309CBECABD* L_30 = V_1;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_30->___splash_5;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SplashHandler/<fadeInLogoStart>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CfadeInLogoStartU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5965A455B08A2946D9FE1E0EAE130DF7BA54CD95 (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SplashHandler/<fadeInLogoStart>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeInLogoStartU3Ed__9_System_Collections_IEnumerator_Reset_m92AA5BE349439E6BCE1FB5246200D3D290B94AC6 (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CfadeInLogoStartU3Ed__9_System_Collections_IEnumerator_Reset_m92AA5BE349439E6BCE1FB5246200D3D290B94AC6_RuntimeMethod_var)));
	}
}
// System.Object SplashHandler/<fadeInLogoStart>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CfadeInLogoStartU3Ed__9_System_Collections_IEnumerator_get_Current_m54A13F80A38E0A28D6228BB4C7D63C2399C66075 (U3CfadeInLogoStartU3Ed__9_tDBC96143933E7C1903BACAB6D0D479C7EAC31F54* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MainMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Start_m0DE5C20FF402B377BA9FD8819426F55C9289A55A (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Update_mAA4CF1D462BFFD3E5B84FB1B79B53AF29452FDB9 (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainMenuManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_OnEnable_m2A425C636A2C1A6BC22AD1FDD3370267705ECD08 (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m1540F5EB2ECE9F69F5B5B72B08568280D6C2F6C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SceneHandler.Instance.isStart)
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_0;
		L_0 = Singleton_1_get_Instance_m1540F5EB2ECE9F69F5B5B72B08568280D6C2F6C0(Singleton_1_get_Instance_m1540F5EB2ECE9F69F5B5B72B08568280D6C2F6C0_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = L_0->___isStart_5;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// loginScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___loginScreen_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// MainMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___MainMenu_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_0025:
	{
		// SceneHandler.Instance.isStart = true;
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_4;
		L_4 = Singleton_1_get_Instance_m1540F5EB2ECE9F69F5B5B72B08568280D6C2F6C0(Singleton_1_get_Instance_m1540F5EB2ECE9F69F5B5B72B08568280D6C2F6C0_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___isStart_5 = (bool)1;
		// }
		return;
	}
}
// System.Void MainMenuManager::OnClickWhisper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_OnClickWhisper_mBB9C1632B4BF8C51AA34A3B7B337C9BF0639B283 (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::onClickOpenAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_onClickOpenAI_m5CD97FC7643B1BDB332F211BE3EDA5CFFBBC7B3E (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager__ctor_m9CF8E7F30CE180004AA0DFF1229FC615B531542B (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_Start_m4075C3F571ED56FDD3C05296DF0931B63D30E326 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_Update_m45C631250D4AED4E399ABA6E0F5A44D09D622912 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler__ctor_m344669B2EC0EC11DCF76A16B7127D50324641B68 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m89D91DFE9BF0AC01BC9A2CD51D7A9FBDA31DF8A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m89D91DFE9BF0AC01BC9A2CD51D7A9FBDA31DF8A0(__this, Singleton_1__ctor_m89D91DFE9BF0AC01BC9A2CD51D7A9FBDA31DF8A0_RuntimeMethod_var);
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
// System.Void test2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test2_Start_mE87B1A4D7B6826BF3D516C3F6433A5DF35526439 (test2_tAC072E98B60D1882D8695A71BB8936FC539A7F3D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void test2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test2_Update_m6BEEDA70D7ECFC190F314E929B9947F9E44D60DC (test2_tAC072E98B60D1882D8695A71BB8936FC539A7F3D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void test2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test2__ctor_m3EF8DC8E02BC3216283DC04083A266881062E4EA (test2_tAC072E98B60D1882D8695A71BB8936FC539A7F3D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Byte[] Samples.Whisper.SaveWav::Save(System.String,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SaveWav_Save_m3FEF0CF06FE2F021A487DDB6613AB484606B4890 (String_t* ___0_filename, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// if (!filename.ToLower().EndsWith(".wav"))
		String_t* L_0 = ___0_filename;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_1, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// filename += ".wav";
		String_t* L_3 = ___0_filename;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, NULL);
		___0_filename = L_4;
	}

IL_001f:
	{
		// var filepath = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_6 = ___0_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_5, L_6, NULL);
		// Directory.CreateDirectory(Path.GetDirectoryName(filepath) ?? string.Empty);
		String_t* L_8;
		L_8 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_7, NULL);
		String_t* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0038;
		}
	}
	{
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B4_0 = L_10;
	}

IL_0038:
	{
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_11;
		L_11 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(G_B4_0, NULL);
		// using(var memoryStream = CreateEmpty())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12;
		L_12 = SaveWav_CreateEmpty_mFD7B36C7BEC1D41A19A124F06B59348F88BEAA65(NULL);
		V_0 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = V_0;
					if (!L_13)
					{
						goto IL_0064;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0064:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ConvertAndWrite(memoryStream, clip);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_0;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = ___1_clip;
			SaveWav_ConvertAndWrite_mFAA5F2832E15749A10443F93E80C24F42EB4EEAB(L_15, L_16, NULL);
			// WriteHeader(memoryStream, clip);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18 = ___1_clip;
			SaveWav_WriteHeader_mB9BE0EB9A71CC90E62621B7CC753B0FF8BCF10DC(L_17, L_18, NULL);
			// return memoryStream.GetBuffer();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = V_0;
			NullCheck(L_19);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
			L_20 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_19);
			V_1 = L_20;
			goto IL_0065;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		return L_21;
	}
}
// UnityEngine.AudioClip Samples.Whisper.SaveWav::TrimSilence(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* SaveWav_TrimSilence_mCE09E0392CEB36944AFFF8025D6223A106E74EA4 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_min, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// var samples = new float[clip.samples];
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// clip.GetData(samples, 0);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___0_clip;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_3, L_4, 0, NULL);
		// return TrimSilence(new List<float>(samples), min, clip.channels, clip.frequency);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_7 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F(L_7, (RuntimeObject*)L_6, List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var);
		float L_8 = ___1_min;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___0_clip;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_9, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = ___0_clip;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_11, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13;
		L_13 = SaveWav_TrimSilence_m0D5042DBB8A9A04094A0B5835D6AF2D6245C32EC(L_7, L_8, L_10, L_12, (bool)0, NULL);
		return L_13;
	}
}
// UnityEngine.AudioClip Samples.Whisper.SaveWav::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* SaveWav_TrimSilence_m0D5042DBB8A9A04094A0B5835D6AF2D6245C32EC (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_samples, float ___1_min, int32_t ___2_channels, int32_t ___3_hz, bool ___4_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (i = 0; i < samples.Count; i++)
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		// if (Mathf.Abs(samples[i]) > min)
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_samples;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ___1_min;
		if ((((float)L_3) > ((float)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// for (i = 0; i < samples.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// for (i = 0; i < samples.Count; i++)
		int32_t L_6 = V_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_7 = ___0_samples;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_7, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}

IL_0020:
	{
		// samples.RemoveRange(0, i);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_9 = ___0_samples;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589(L_9, 0, L_10, List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		// for (i = samples.Count - 1; i > 0; i--)
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_11 = ___0_samples;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_11, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0046;
	}

IL_0033:
	{
		// if (Mathf.Abs(samples[i]) > min)
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_13 = ___0_samples;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_13, L_14, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_16;
		L_16 = fabsf(L_15);
		float L_17 = ___1_min;
		if ((((float)L_16) > ((float)L_17)))
		{
			goto IL_004a;
		}
	}
	{
		// for (i = samples.Count - 1; i > 0; i--)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0046:
	{
		// for (i = samples.Count - 1; i > 0; i--)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}

IL_004a:
	{
		// samples.RemoveRange(i, samples.Count - i);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_20 = ___0_samples;
		int32_t L_21 = V_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_22 = ___0_samples;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_22, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_24 = V_0;
		NullCheck(L_20);
		List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589(L_20, L_21, ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		// var clip = AudioClip.Create("TempClip", samples.Count, channels, hz, stream);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_25 = ___0_samples;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_25, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_27 = ___2_channels;
		int32_t L_28 = ___3_hz;
		bool L_29 = ___4_stream;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_30;
		L_30 = AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB(_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE, L_26, L_27, L_28, L_29, NULL);
		// clip.SetData(samples.ToArray(), 0);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_31 = L_30;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_32 = ___0_samples;
		NullCheck(L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33;
		L_33 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_32, List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_RuntimeMethod_var);
		NullCheck(L_31);
		bool L_34;
		L_34 = AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3(L_31, L_33, 0, NULL);
		// return clip;
		return L_31;
	}
}
// System.IO.MemoryStream Samples.Whisper.SaveWav::CreateEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* SaveWav_CreateEmpty_mFD7B36C7BEC1D41A19A124F06B59348F88BEAA65 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	{
		// var memoryStream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		// byte emptyByte = new byte();
		V_1 = (uint8_t)0;
		// for (int i = 0; i < HeaderSize; i++) //preparing the header
		V_2 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		// memoryStream.WriteByte(emptyByte);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
		uint8_t L_2 = V_1;
		NullCheck(L_1);
		VirtualActionInvoker1< uint8_t >::Invoke(35 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_1, L_2);
		// for (int i = 0; i < HeaderSize; i++) //preparing the header
		int32_t L_3 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0017:
	{
		// for (int i = 0; i < HeaderSize; i++) //preparing the header
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)44))))
		{
			goto IL_000c;
		}
	}
	{
		// return memoryStream;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
		return L_5;
	}
}
// System.Void Samples.Whisper.SaveWav::ConvertAndWrite(System.IO.MemoryStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWav_ConvertAndWrite_mFAA5F2832E15749A10443F93E80C24F42EB4EEAB (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___0_memoryStream, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var samples = new float[clip.samples];
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___1_clip;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// clip.GetData(samples, 0);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___1_clip;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_3, L_4, 0, NULL);
		// Int16[] intData = new Int16[samples.Length];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		V_1 = L_7;
		// Byte[] bytesData = new Byte[samples.Length * 2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_8)->max_length)), 2)));
		V_2 = L_9;
		// int rescaleFactor = 32767; //to convert float to Int16
		V_3 = ((int32_t)32767);
		// for (int i = 0; i < samples.Length; i++)
		V_4 = 0;
		goto IL_0059;
	}

IL_0034:
	{
		// intData[i] = (short)(samples[i] * rescaleFactor);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = V_1;
		int32_t L_11 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply(L_15, ((float)L_16)))));
		// Byte[] byteArr = BitConverter.GetBytes(intData[i]);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int16_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15(L_20, NULL);
		// byteArr.CopyTo(bytesData, i * 2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		int32_t L_23 = V_4;
		NullCheck((RuntimeArray*)L_21);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_21, (RuntimeArray*)L_22, ((int32_t)il2cpp_codegen_multiply(L_23, 2)), NULL);
		// for (int i = 0; i < samples.Length; i++)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < samples.Length; i++)
		int32_t L_25 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// memoryStream.Write(bytesData, 0, bytesData.Length);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		NullCheck(L_29);
		NullCheck(L_27);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_27, L_28, 0, ((int32_t)(((RuntimeArray*)L_29)->max_length)));
		// }
		return;
	}
}
// System.Void Samples.Whisper.SaveWav::WriteHeader(System.IO.MemoryStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWav_WriteHeader_mB9BE0EB9A71CC90E62621B7CC753B0FF8BCF10DC (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___0_memoryStream, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	uint16_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_14 = NULL;
	{
		// var hz = clip.frequency;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___1_clip;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_0, NULL);
		// var channels = clip.channels;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___1_clip;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_2, NULL);
		V_0 = L_3;
		// var samples = clip.samples;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___1_clip;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_4, NULL);
		V_1 = L_5;
		// memoryStream.Seek(0, SeekOrigin.Begin);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = ___0_memoryStream;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, ((int64_t)0), 0);
		// Byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		V_2 = L_9;
		// memoryStream.Write(riff, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, 4);
		// Byte[] chunkSize = BitConverter.GetBytes(memoryStream.Length - 8);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = ___0_memoryStream;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_12);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9(((int64_t)il2cpp_codegen_subtract(L_13, ((int64_t)8))), NULL);
		V_3 = L_14;
		// memoryStream.Write(chunkSize, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		NullCheck(L_15);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, 4);
		// Byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		V_4 = L_18;
		// memoryStream.Write(wave, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		NullCheck(L_19);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, 4);
		// Byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_21, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		V_5 = L_22;
		// memoryStream.Write(fmt, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		NullCheck(L_23);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, 4);
		// Byte[] subChunk1 = BitConverter.GetBytes(16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(((int32_t)16), NULL);
		V_6 = L_25;
		// memoryStream.Write(subChunk1, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_6;
		NullCheck(L_26);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, 4);
		// UInt16 one = 1;
		// Byte[] audioFormat = BitConverter.GetBytes(one);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B((uint16_t)1, NULL);
		V_7 = L_28;
		// memoryStream.Write(audioFormat, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_29 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_7;
		NullCheck(L_29);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, 0, 2);
		// Byte[] numChannels = BitConverter.GetBytes(channels);
		int32_t L_31 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_31, NULL);
		V_8 = L_32;
		// memoryStream.Write(numChannels, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_33 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_8;
		NullCheck(L_33);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, 2);
		// Byte[] sampleRate = BitConverter.GetBytes(hz);
		int32_t L_35 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_35, NULL);
		V_9 = L_36;
		// memoryStream.Write(sampleRate, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_37 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_9;
		NullCheck(L_37);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, 4);
		// Byte[]
		//     byteRate = BitConverter.GetBytes(hz * channels *
		//                                      2); // sampleRate * bytesPerSample*number of channels, here 44100*2*2
		int32_t L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_35, L_39)), 2)), NULL);
		V_10 = L_40;
		// memoryStream.Write(byteRate, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_41 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_10;
		NullCheck(L_41);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_41, L_42, 0, 4);
		// UInt16 blockAlign = (ushort)(channels * 2);
		int32_t L_43 = V_0;
		V_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(L_43, 2)));
		// memoryStream.Write(BitConverter.GetBytes(blockAlign), 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_44 = ___0_memoryStream;
		uint16_t L_45 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B(L_45, NULL);
		NullCheck(L_44);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_44, L_46, 0, 2);
		// UInt16 bps = 16;
		// Byte[] bitsPerSample = BitConverter.GetBytes(bps);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B((uint16_t)((int32_t)16), NULL);
		V_12 = L_47;
		// memoryStream.Write(bitsPerSample, 0, 2);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_48 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_12;
		NullCheck(L_48);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_48, L_49, 0, 2);
		// Byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_50;
		L_50 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_50, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		V_13 = L_51;
		// memoryStream.Write(datastring, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_52 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_13;
		NullCheck(L_52);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_52, L_53, 0, 4);
		// Byte[] subChunk2 = BitConverter.GetBytes(samples * channels * 2);
		int32_t L_54 = V_1;
		int32_t L_55 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_54, L_55)), 2)), NULL);
		V_14 = L_56;
		// memoryStream.Write(subChunk2, 0, 4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_57 = ___0_memoryStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_14;
		NullCheck(L_57);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_57, L_58, 0, 4);
		// }
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
// System.Void Samples.Whisper.Whisper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper_Start_m0774F6A017D520676F5A75704DA5A336122E131B (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Whisper_ChangeMicrophone_m456A8473D9993FB0D4A540051CF6EBE42FCD5F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Whisper_StartRecording_m599B464E487CB6B6A332EF2847631E118B3395FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF115E270D623AB648FBD5F258DA1C3F4838512);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// foreach (var device in Microphone.devices)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D(NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0028;
	}

IL_000a:
	{
		// foreach (var device in Microphone.devices)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// dropdown.options.Add(new Dropdown.OptionData(device));
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdown_7;
		NullCheck(L_5);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_6;
		L_6 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_5, NULL);
		String_t* L_7 = V_3;
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_8 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		OptionData__ctor_m0BB22D3B9A2443D8D51CE88AD6B4DAEAF11B59E6(L_8, L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_inline(L_6, L_8, List_1_Add_mD4C8E5C7DAB7FBB4A72C861A16DFED06E2DCA03C_RuntimeMethod_var);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		// foreach (var device in Microphone.devices)
		int32_t L_10 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// recordButton.onClick.AddListener(StartRecording);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___recordButton_4;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)Whisper_StartRecording_m599B464E487CB6B6A332EF2847631E118B3395FE_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// dropdown.onValueChanged.AddListener(ChangeMicrophone);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_15 = __this->___dropdown_7;
		NullCheck(L_15);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_16;
		L_16 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline(L_15, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_17 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_17, __this, (intptr_t)((void*)Whisper_ChangeMicrophone_m456A8473D9993FB0D4A540051CF6EBE42FCD5F8F_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_16, L_17, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// var index = PlayerPrefs.GetInt("user-mic-device-index");
		int32_t L_18;
		L_18 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralCEF115E270D623AB648FBD5F258DA1C3F4838512, NULL);
		V_0 = L_18;
		// dropdown.SetValueWithoutNotify(index);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_19 = __this->___dropdown_7;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		Dropdown_SetValueWithoutNotify_m3D2B40BC16D305309D68D9FF093BF25FF66E4ABA(L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void Samples.Whisper.Whisper::ChangeMicrophone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper_ChangeMicrophone_m456A8473D9993FB0D4A540051CF6EBE42FCD5F8F (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF115E270D623AB648FBD5F258DA1C3F4838512);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("user-mic-device-index", index);
		int32_t L_0 = ___0_index;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralCEF115E270D623AB648FBD5F258DA1C3F4838512, L_0, NULL);
		// }
		return;
	}
}
// System.Void Samples.Whisper.Whisper::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper_StartRecording_m599B464E487CB6B6A332EF2847631E118B3395FE (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF115E270D623AB648FBD5F258DA1C3F4838512);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// isRecording = true;
		__this->___isRecording_11 = (bool)1;
		// recordButton.enabled = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___recordButton_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// var index = PlayerPrefs.GetInt("user-mic-device-index");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralCEF115E270D623AB648FBD5F258DA1C3F4838512, NULL);
		V_0 = L_1;
		// clip = Microphone.Start(dropdown.options[index].text, false, duration, 44100);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdown_7;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_5;
		L_5 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_3, L_4, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline(L_5, NULL);
		int32_t L_7 = __this->___duration_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8;
		L_8 = Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E(L_6, (bool)0, L_7, ((int32_t)44100), NULL);
		__this->___clip_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clip_10), (void*)L_8);
		// }
		return;
	}
}
// System.Void Samples.Whisper.Whisper::EndRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper_EndRecording_m9D847F84356CD702F2983C13AF139E08DC537B5C (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_mDA1C0D4A95C0679D1C3507FA77C02CBB935F561F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_mDA1C0D4A95C0679D1C3507FA77C02CBB935F561F(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_mDA1C0D4A95C0679D1C3507FA77C02CBB935F561F_RuntimeMethod_var);
		return;
	}
}
// System.Void Samples.Whisper.Whisper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper_Update_mB67AAA45E48B5AC67E9592682E990CA57C00208F (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, const RuntimeMethod* method) 
{
	{
		// if (isRecording)
		bool L_0 = __this->___isRecording_11;
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// time += Time.deltaTime;
		float L_1 = __this->___time_12;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___time_12 = ((float)il2cpp_codegen_add(L_1, L_2));
		// progressBar.fillAmount = time / duration;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___progressBar_5;
		float L_4 = __this->___time_12;
		int32_t L_5 = __this->___duration_9;
		NullCheck(L_3);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_3, ((float)(L_4/((float)L_5))), NULL);
		// if (time >= duration)
		float L_6 = __this->___time_12;
		int32_t L_7 = __this->___duration_9;
		if ((!(((float)L_6) >= ((float)((float)L_7)))))
		{
			goto IL_005a;
		}
	}
	{
		// time = 0;
		__this->___time_12 = (0.0f);
		// isRecording = false;
		__this->___isRecording_11 = (bool)0;
		// EndRecording();
		Whisper_EndRecording_m9D847F84356CD702F2983C13AF139E08DC537B5C(__this, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Samples.Whisper.Whisper::onClickBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper_onClickBack_m2C2A712E30E3433EF80C7512F6609FE8B43B467D (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void Samples.Whisper.Whisper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whisper__ctor_m9151B4E600A82B1B1FE3485FA916F027B6F9E3A4 (Whisper_t040840F57AC0FA9437055017743EAC88324F0133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenAIApi_t37D34FF04EE303920B197698E066D46690409358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04CF5DCC9299F6A635E80650A8A05DBAD6182371);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly string fileName = "output.wav";
		__this->___fileName_8 = _stringLiteral04CF5DCC9299F6A635E80650A8A05DBAD6182371;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileName_8), (void*)_stringLiteral04CF5DCC9299F6A635E80650A8A05DBAD6182371);
		// private readonly int duration = 5;
		__this->___duration_9 = 5;
		// private OpenAIApi openai = new OpenAIApi();
		OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* L_0 = (OpenAIApi_t37D34FF04EE303920B197698E066D46690409358*)il2cpp_codegen_object_new(OpenAIApi_t37D34FF04EE303920B197698E066D46690409358_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OpenAIApi__ctor_m53C325BDE15985233E01E7926FA1E5889BA5E9A2(L_0, (String_t*)NULL, (String_t*)NULL, NULL);
		__this->___openai_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___openai_13), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Samples.Whisper.Whisper/<EndRecording>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndRecordingU3Ed__13_MoveNext_mE59009FCFB9D18732059FFD3A8F2FA39724B92D2 (U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_m94D01B7C6D04F5074891008812983C969310F31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m32BB67BC3C6D368D82F702F187BA7813CF448228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m14FD36A19DF06E013E0DD66ABDA6102333793F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mB1E29B728FE365D629E2860A761CF50794423023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42DC18D5482A9265FB2B285DA7CBF657A4D1E816);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B181C4DCAEFCD50EE68E94CD195AE3CE3CE179F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39FE49AA0A07EE7F891681B4E5614C4EBA6AF8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Whisper_t040840F57AC0FA9437055017743EAC88324F0133* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* V_3 = NULL;
	CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D V_4;
	memset((&V_4), 0, sizeof(V_4));
	FileData_t3BC40227BA3F20D3C3E350864D813F0942085852 V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00bc_1;
			}
		}
		{
			// message.text = "Transcripting...";
			Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_3 = V_1;
			NullCheck(L_3);
			Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = L_3->___message_6;
			NullCheck(L_4);
			VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralB39FE49AA0A07EE7F891681B4E5614C4EBA6AF8A);
			// Microphone.End(null);
			Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6((String_t*)NULL, NULL);
			// byte[] data = SaveWav.Save(fileName, clip);
			Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_5 = V_1;
			NullCheck(L_5);
			String_t* L_6 = L_5->___fileName_8;
			Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_7 = V_1;
			NullCheck(L_7);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___clip_10;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
			L_9 = SaveWav_Save_m3FEF0CF06FE2F021A487DDB6613AB484606B4890(L_6, L_8, NULL);
			V_2 = L_9;
			// var req = new CreateAudioTranscriptionsRequest
			// {
			//     FileData = new FileData() {Data = data, Name = "audio.wav"},
			//     // File = Application.persistentDataPath + "/" + fileName,
			//     Model = "whisper-1",
			//     Language = "en"
			// };
			CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* L_10 = (CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5*)il2cpp_codegen_object_new(CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			CreateAudioTranscriptionsRequest__ctor_m62A7E9BD949E4D23CBE0C23AB2F0F2E8D1A723DE(L_10, NULL);
			CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* L_11 = L_10;
			il2cpp_codegen_initobj((&V_5), sizeof(FileData_t3BC40227BA3F20D3C3E350864D813F0942085852));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
			(&V_5)->___Data_0 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___Data_0), (void*)L_12);
			(&V_5)->___Name_1 = _stringLiteral6B181C4DCAEFCD50EE68E94CD195AE3CE3CE179F;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___Name_1), (void*)_stringLiteral6B181C4DCAEFCD50EE68E94CD195AE3CE3CE179F);
			FileData_t3BC40227BA3F20D3C3E350864D813F0942085852 L_13 = V_5;
			NullCheck(L_11);
			CreateAudioRequestBase_set_FileData_m4D20581338E8CCB62AB68143F893A5B4DFBEA13E_inline(L_11, L_13, NULL);
			CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* L_14 = L_11;
			NullCheck(L_14);
			CreateAudioRequestBase_set_Model_mA73D044DAA0299585BA057D04067463BFFE98906_inline(L_14, _stringLiteral42DC18D5482A9265FB2B285DA7CBF657A4D1E816, NULL);
			CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* L_15 = L_14;
			NullCheck(L_15);
			CreateAudioTranscriptionsRequest_set_Language_mC9A8B496E87EE8581459314F1042FA1B4B7D2C21_inline(L_15, _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096, NULL);
			V_3 = L_15;
			// var res = await openai.CreateAudioTranscription(req);
			Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_16 = V_1;
			NullCheck(L_16);
			OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* L_17 = L_16->___openai_13;
			CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* L_18 = V_3;
			NullCheck(L_17);
			Task_1_t4ABC893D157767B1C1F100851A2C17FEFE74C0BC* L_19;
			L_19 = OpenAIApi_CreateAudioTranscription_m698B86CA1C652042221A08660276571B7D70A0CC(L_17, L_18, NULL);
			NullCheck(L_19);
			TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE L_20;
			L_20 = Task_1_GetAwaiter_mB1E29B728FE365D629E2860A761CF50794423023(L_19, Task_1_GetAwaiter_mB1E29B728FE365D629E2860A761CF50794423023_RuntimeMethod_var);
			V_6 = L_20;
			bool L_21;
			L_21 = TaskAwaiter_1_get_IsCompleted_m14FD36A19DF06E013E0DD66ABDA6102333793F16((&V_6), TaskAwaiter_1_get_IsCompleted_m14FD36A19DF06E013E0DD66ABDA6102333793F16_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_00d9_1;
			}
		}
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
			TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE L_23 = V_6;
			__this->___U3CU3Eu__1_3 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_m94D01B7C6D04F5074891008812983C969310F31F(L_24, (&V_6), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE_TisU3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF_m94D01B7C6D04F5074891008812983C969310F31F_RuntimeMethod_var);
			goto IL_013e;
		}

IL_00bc_1:
		{
			TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE L_25 = __this->___U3CU3Eu__1_3;
			V_6 = L_25;
			TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE* L_26 = (TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_tD011AB2B8BC43FDB9D3D3183672BEAD3F9C2CDBE));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00d9_1:
		{
			CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D L_28;
			L_28 = TaskAwaiter_1_GetResult_m32BB67BC3C6D368D82F702F187BA7813CF448228((&V_6), TaskAwaiter_1_GetResult_m32BB67BC3C6D368D82F702F187BA7813CF448228_RuntimeMethod_var);
			V_4 = L_28;
			// progressBar.fillAmount = 0;
			Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_29 = V_1;
			NullCheck(L_29);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = L_29->___progressBar_5;
			NullCheck(L_30);
			Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_30, (0.0f), NULL);
			// message.text = res.Text;
			Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_31 = V_1;
			NullCheck(L_31);
			Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = L_31->___message_6;
			String_t* L_33;
			L_33 = CreateAudioResponse_get_Text_m8CC94CE044BF42DBA31123215EA78004F9956DA5_inline((&V_4), NULL);
			NullCheck(L_32);
			VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_33);
			// recordButton.enabled = true;
			Whisper_t040840F57AC0FA9437055017743EAC88324F0133* L_34 = V_1;
			NullCheck(L_34);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_35 = L_34->___recordButton_4;
			NullCheck(L_35);
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)1, NULL);
			goto IL_012b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0112;
		}
		throw e;
	}

CATCH_0112:
	{// begin catch(System.Exception)
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_36;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_37 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_38 = V_7;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_013e;
	}// end catch (depth: 1)

IL_012b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_39 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_39, NULL);
	}

IL_013e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEndRecordingU3Ed__13_MoveNext_mE59009FCFB9D18732059FFD3A8F2FA39724B92D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF*>(__this + _offset);
	U3CEndRecordingU3Ed__13_MoveNext_mE59009FCFB9D18732059FFD3A8F2FA39724B92D2(_thisAdjusted, method);
}
// System.Void Samples.Whisper.Whisper/<EndRecording>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndRecordingU3Ed__13_SetStateMachine_m6FCFACA1AADA214E43B13F381AD325247A998E87 (U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEndRecordingU3Ed__13_SetStateMachine_m6FCFACA1AADA214E43B13F381AD325247A998E87_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEndRecordingU3Ed__13_t113D079BCA0263D2520FCE49F32D2A25D2FF30EF*>(__this + _offset);
	U3CEndRecordingU3Ed__13_SetStateMachine_m6FCFACA1AADA214E43B13F381AD325247A998E87(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenAI.ChatGPT::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPT_Start_m67252CB31ED86B3B8B06B953506ED083DA48339A (ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGPT_SendReply_m8D5B3D47A949B695894E815F523F87CC2C8C647D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.AddListener(SendReply);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ChatGPT_SendReply_m8D5B3D47A949B695894E815F523F87CC2C8C647D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void OpenAI.ChatGPT::test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPT_test_mBE71DD2F71EFA9BC47CFFE33326D3531E0D6A64A (ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(narrator.Talk());
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_0 = __this->___narrator_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LMNTSpeech_Talk_mB2EB264A44A8E60698318B94384948301CE66655(L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void OpenAI.ChatGPT::AppendMessage(OpenAI.ChatMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPT_AppendMessage_mD7F6BE6CF16DBC44663B7DBD1CC88EF22091814F (ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* __this, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_mD32D74AB9E7BA6EDABCF489C5D23B3C26A0171F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B3_0 = NULL;
	{
		// scroll.content.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 0);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___scroll_6;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_0, NULL);
		NullCheck(L_1);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_1, 1, (0.0f), NULL);
		// var item = Instantiate(message.Role == "user" ? sent : received, scroll.content);
		String_t* L_2;
		L_2 = ChatMessage_get_Role_m2AF3E9BD6F1C5BB7D59FBB29CC5E254E1F2CC0FB_inline((&___0_message), NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___received_8;
		G_B3_0 = L_4;
		goto IL_0037;
	}

IL_0031:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___sent_7;
		G_B3_0 = L_5;
	}

IL_0037:
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = __this->___scroll_6;
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_mD32D74AB9E7BA6EDABCF489C5D23B3C26A0171F7(G_B3_0, L_7, Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_mD32D74AB9E7BA6EDABCF489C5D23B3C26A0171F7_RuntimeMethod_var);
		V_0 = L_8;
		// item.GetChild(0).GetChild(0).GetComponent<Text>().text = message.Content;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, 0, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 0, NULL);
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12;
		L_12 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_11, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		String_t* L_13;
		L_13 = ChatMessage_get_Content_m68D8B284E4E04C77B7C34F1150E8363C7381DEE7_inline((&___0_message), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_13);
		// item.anchoredPosition = new Vector2(0, -height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = V_0;
		float L_15 = __this->___height_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (0.0f), ((-L_15)), /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_16, NULL);
		// LayoutRebuilder.ForceRebuildLayoutImmediate(item);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A(L_17, NULL);
		// height += item.sizeDelta.y;
		float L_18 = __this->___height_10;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = V_0;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_19, NULL);
		float L_21 = L_20.___y_1;
		__this->___height_10 = ((float)il2cpp_codegen_add(L_18, L_21));
		// scroll.content.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, height);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_22 = __this->___scroll_6;
		NullCheck(L_22);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_22, NULL);
		float L_24 = __this->___height_10;
		NullCheck(L_23);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_23, 1, L_24, NULL);
		// scroll.verticalNormalizedPosition = 0;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_25 = __this->___scroll_6;
		NullCheck(L_25);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_25, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void OpenAI.ChatGPT::SendReply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPT_SendReply_m8D5B3D47A949B695894E815F523F87CC2C8C647D (ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m1ACD63C6F7F93343BF7BCB8A59509C2968F30FCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m1ACD63C6F7F93343BF7BCB8A59509C2968F30FCD(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m1ACD63C6F7F93343BF7BCB8A59509C2968F30FCD_RuntimeMethod_var);
		return;
	}
}
// System.Void OpenAI.ChatGPT::onClickBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPT_onClickBack_m7352C1C77BC919850DEE1912700395985B729574 (ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void OpenAI.ChatGPT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGPT__ctor_m68BB6E050A96A78213E7627730FDCF0A9D18065A (ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEFA85E87EFE96A0DA9EC3412E5619299B4C639D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenAIApi_t37D34FF04EE303920B197698E066D46690409358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BAB4EFCC45B11BCA22CF21741FEA17F12C04BCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private OpenAIApi openai = new OpenAIApi();
		OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* L_0 = (OpenAIApi_t37D34FF04EE303920B197698E066D46690409358*)il2cpp_codegen_object_new(OpenAIApi_t37D34FF04EE303920B197698E066D46690409358_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OpenAIApi__ctor_m53C325BDE15985233E01E7926FA1E5889BA5E9A2(L_0, (String_t*)NULL, (String_t*)NULL, NULL);
		__this->___openai_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___openai_11), (void*)L_0);
		// private List<ChatMessage> messages = new List<ChatMessage>();
		List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_1 = (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A*)il2cpp_codegen_object_new(List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mAEFA85E87EFE96A0DA9EC3412E5619299B4C639D(L_1, List_1__ctor_mAEFA85E87EFE96A0DA9EC3412E5619299B4C639D_RuntimeMethod_var);
		__this->___messages_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messages_12), (void*)L_1);
		// private string prompt = "Act as a random stranger in a chat room and reply to the questions. Don't break character. Don't ever mention that you are an AI model.";
		__this->___prompt_13 = _stringLiteral8BAB4EFCC45B11BCA22CF21741FEA17F12C04BCC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prompt_13), (void*)_stringLiteral8BAB4EFCC45B11BCA22CF21741FEA17F12C04BCC);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OpenAI.ChatGPT/<SendReply>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendReplyU3Ed__13_MoveNext_mE73F02A2EDDE215CD3CDFC5F8AF875DE0EE2D46A (U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m302BE6A0034C34D3BBF2A9D55323448EECD7409A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4677E1D12773F2C27F6C43292C8B394599717060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m52B116E4C818D4955AC7635BA1303337DD5DCABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m193D51537F32243B55AC441656FBF79CA1B585D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m6455141A98E9D8015C7FA26F2EB89429C266ABEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6860B74B2491ADF920B317FFEE4967F8D00D8D4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral630365A1428284D8409B41129255F2A889392EAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9EAA8CF89E736A6EF2B3B248DC522A1230B5A72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC4411933A437D5B2063CF4F96EBBC95BDE08FF6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* V_1 = NULL;
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E V_2;
	memset((&V_2), 0, sizeof(V_2));
	CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E V_6;
	memset((&V_6), 0, sizeof(V_6));
	ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_011b_1;
			}
		}
		{
			// inputField.text = "Tell The detailed Story of Prophet Musa according to Sahi Bukhari";
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_3 = V_1;
			NullCheck(L_3);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = L_3->___inputField_4;
			NullCheck(L_4);
			InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, _stringLiteral630365A1428284D8409B41129255F2A889392EAB, NULL);
			// var newMessage = new ChatMessage()
			// {
			//     Role = "user",
			//     Content = inputField.text/*"Tell the story of Prophet Musa"*
			// };
			il2cpp_codegen_initobj((&V_4), sizeof(ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E));
			ChatMessage_set_Role_m77D061B08D8F9B8C5156748E54E08D16762C3959_inline((&V_4), _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534, NULL);
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_5 = V_1;
			NullCheck(L_5);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = L_5->___inputField_4;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_6, NULL);
			ChatMessage_set_Content_m5CFB48A9023EBBD1676B52D3327683B59B755035_inline((&V_4), L_7, NULL);
			ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_8 = V_4;
			V_2 = L_8;
			// if (messages.Count == 0) newMessage.Content = prompt + "\n" + inputField.text;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_9 = V_1;
			NullCheck(L_9);
			List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_10 = L_9->___messages_12;
			NullCheck(L_10);
			int32_t L_11;
			L_11 = List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_inline(L_10, List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_007c_1;
			}
		}
		{
			// if (messages.Count == 0) newMessage.Content = prompt + "\n" + inputField.text;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_12 = V_1;
			NullCheck(L_12);
			String_t* L_13 = L_12->___prompt_13;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_14 = V_1;
			NullCheck(L_14);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = L_14->___inputField_4;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_15, NULL);
			String_t* L_17;
			L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_16, NULL);
			ChatMessage_set_Content_m5CFB48A9023EBBD1676B52D3327683B59B755035_inline((&V_2), L_17, NULL);
		}

IL_007c_1:
		{
			// messages.Add(newMessage);
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_18 = V_1;
			NullCheck(L_18);
			List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_19 = L_18->___messages_12;
			ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_20 = V_2;
			NullCheck(L_19);
			List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_inline(L_19, L_20, List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_RuntimeMethod_var);
			// button.enabled = false;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_21 = V_1;
			NullCheck(L_21);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = L_21->___button_5;
			NullCheck(L_22);
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
			// inputField.text = "";
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_23 = V_1;
			NullCheck(L_23);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_24 = L_23->___inputField_4;
			NullCheck(L_24);
			InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_24, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			// inputField.enabled = false;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_25 = V_1;
			NullCheck(L_25);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_26 = L_25->___inputField_4;
			NullCheck(L_26);
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_26, (bool)0, NULL);
			// narrator.dialogue = "";
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_27 = V_1;
			NullCheck(L_27);
			LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_28 = L_27->___narrator_9;
			NullCheck(L_28);
			L_28->___dialogue_9 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			Il2CppCodeGenWriteBarrier((void**)(&L_28->___dialogue_9), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
			// var completionResponse = await openai.CreateChatCompletion(new CreateChatCompletionRequest()
			// {
			//     Model = "gpt-4o-mini",
			//     Messages = messages
			// });
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_29 = V_1;
			NullCheck(L_29);
			OpenAIApi_t37D34FF04EE303920B197698E066D46690409358* L_30 = L_29->___openai_11;
			CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* L_31 = (CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A*)il2cpp_codegen_object_new(CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			CreateChatCompletionRequest__ctor_m28BA8B15F758C7F0A771BB78397E38C233FD39BF(L_31, NULL);
			CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* L_32 = L_31;
			NullCheck(L_32);
			CreateChatCompletionRequest_set_Model_mFF52FE86A178367C27D3B527813C828460511504_inline(L_32, _stringLiteralB9EAA8CF89E736A6EF2B3B248DC522A1230B5A72, NULL);
			CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* L_33 = L_32;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_34 = V_1;
			NullCheck(L_34);
			List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_35 = L_34->___messages_12;
			NullCheck(L_33);
			CreateChatCompletionRequest_set_Messages_m5D4CA6CB032DCDA4922EA09F92C1429098A1E40A_inline(L_33, L_35, NULL);
			NullCheck(L_30);
			Task_1_tB06322DA7E0BAFA03E208104476B69321735E857* L_36;
			L_36 = OpenAIApi_CreateChatCompletion_mD1F72597F155AC3FC4B26E3B28EDF355C4D66B0D(L_30, L_33, NULL);
			NullCheck(L_36);
			TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 L_37;
			L_37 = Task_1_GetAwaiter_m6860B74B2491ADF920B317FFEE4967F8D00D8D4C(L_36, Task_1_GetAwaiter_m6860B74B2491ADF920B317FFEE4967F8D00D8D4C_RuntimeMethod_var);
			V_5 = L_37;
			bool L_38;
			L_38 = TaskAwaiter_1_get_IsCompleted_m6455141A98E9D8015C7FA26F2EB89429C266ABEC((&V_5), TaskAwaiter_1_get_IsCompleted_m6455141A98E9D8015C7FA26F2EB89429C266ABEC_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0138_1;
			}
		}
		{
			int32_t L_39 = 0;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 L_40 = V_5;
			__this->___U3CU3Eu__1_3 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_41 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m302BE6A0034C34D3BBF2A9D55323448EECD7409A(L_41, (&V_5), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845_TisU3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65_m302BE6A0034C34D3BBF2A9D55323448EECD7409A_RuntimeMethod_var);
			goto IL_0246;
		}

IL_011b_1:
		{
			TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845 L_42 = __this->___U3CU3Eu__1_3;
			V_5 = L_42;
			TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845* L_43 = (TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_tF0DCDA0B2F81A70EA75479278172B6C61F913845));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_0138_1:
		{
			CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073 L_45;
			L_45 = TaskAwaiter_1_GetResult_m193D51537F32243B55AC441656FBF79CA1B585D8((&V_5), TaskAwaiter_1_GetResult_m193D51537F32243B55AC441656FBF79CA1B585D8_RuntimeMethod_var);
			V_3 = L_45;
			// if (completionResponse.Choices != null && completionResponse.Choices.Count > 0)
			List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* L_46;
			L_46 = CreateChatCompletionResponse_get_Choices_m6085CA976C100E75E195316A80CEA9728460ABB7_inline((&V_3), NULL);
			if (!L_46)
			{
				goto IL_01f6_1;
			}
		}
		{
			List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* L_47;
			L_47 = CreateChatCompletionResponse_get_Choices_m6085CA976C100E75E195316A80CEA9728460ABB7_inline((&V_3), NULL);
			NullCheck(L_47);
			int32_t L_48;
			L_48 = List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_inline(L_47, List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_RuntimeMethod_var);
			if ((((int32_t)L_48) <= ((int32_t)0)))
			{
				goto IL_01f6_1;
			}
		}
		{
			// var message = completionResponse.Choices[0].Message;
			List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* L_49;
			L_49 = CreateChatCompletionResponse_get_Choices_m6085CA976C100E75E195316A80CEA9728460ABB7_inline((&V_3), NULL);
			NullCheck(L_49);
			ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305 L_50;
			L_50 = List_1_get_Item_m52B116E4C818D4955AC7635BA1303337DD5DCABB(L_49, 0, List_1_get_Item_m52B116E4C818D4955AC7635BA1303337DD5DCABB_RuntimeMethod_var);
			V_7 = L_50;
			ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_51;
			L_51 = ChatChoice_get_Message_mDB91CD71D2C5C44758B9A03DA9338AFE4E31898D_inline((&V_7), NULL);
			V_6 = L_51;
			// message.Content = message.Content.Trim();
			String_t* L_52;
			L_52 = ChatMessage_get_Content_m68D8B284E4E04C77B7C34F1150E8363C7381DEE7_inline((&V_6), NULL);
			NullCheck(L_52);
			String_t* L_53;
			L_53 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_52, NULL);
			ChatMessage_set_Content_m5CFB48A9023EBBD1676B52D3327683B59B755035_inline((&V_6), L_53, NULL);
			// narrator.dialogue = message.Content;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_54 = V_1;
			NullCheck(L_54);
			LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_55 = L_54->___narrator_9;
			String_t* L_56;
			L_56 = ChatMessage_get_Content_m68D8B284E4E04C77B7C34F1150E8363C7381DEE7_inline((&V_6), NULL);
			NullCheck(L_55);
			L_55->___dialogue_9 = L_56;
			Il2CppCodeGenWriteBarrier((void**)(&L_55->___dialogue_9), (void*)L_56);
			// Debug.Log(message.Content);
			String_t* L_57;
			L_57 = ChatMessage_get_Content_m68D8B284E4E04C77B7C34F1150E8363C7381DEE7_inline((&V_6), NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_57, NULL);
			// StartCoroutine(narrator.Talk());
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_58 = V_1;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_59 = V_1;
			NullCheck(L_59);
			LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_60 = L_59->___narrator_9;
			NullCheck(L_60);
			RuntimeObject* L_61;
			L_61 = LMNTSpeech_Talk_mB2EB264A44A8E60698318B94384948301CE66655(L_60, NULL);
			NullCheck(L_58);
			Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_62;
			L_62 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_58, L_61, NULL);
			// messages.Add(message);
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_63 = V_1;
			NullCheck(L_63);
			List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_64 = L_63->___messages_12;
			ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_65 = V_6;
			NullCheck(L_64);
			List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_inline(L_64, L_65, List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_RuntimeMethod_var);
			// Debug.Log(messages[messages.Count - 1].Content);
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_66 = V_1;
			NullCheck(L_66);
			List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_67 = L_66->___messages_12;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_68 = V_1;
			NullCheck(L_68);
			List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_69 = L_68->___messages_12;
			NullCheck(L_69);
			int32_t L_70;
			L_70 = List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_inline(L_69, List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_RuntimeMethod_var);
			NullCheck(L_67);
			ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_71;
			L_71 = List_1_get_Item_m4677E1D12773F2C27F6C43292C8B394599717060(L_67, ((int32_t)il2cpp_codegen_subtract(L_70, 1)), List_1_get_Item_m4677E1D12773F2C27F6C43292C8B394599717060_RuntimeMethod_var);
			V_4 = L_71;
			String_t* L_72;
			L_72 = ChatMessage_get_Content_m68D8B284E4E04C77B7C34F1150E8363C7381DEE7_inline((&V_4), NULL);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_72, NULL);
			// AppendMessage(message);
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_73 = V_1;
			ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_74 = V_6;
			NullCheck(L_73);
			ChatGPT_AppendMessage_mD7F6BE6CF16DBC44663B7DBD1CC88EF22091814F(L_73, L_74, NULL);
			goto IL_0200_1;
		}

IL_01f6_1:
		{
			// Debug.LogWarning("No text was generated from this prompt.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralEC4411933A437D5B2063CF4F96EBBC95BDE08FF6, NULL);
		}

IL_0200_1:
		{
			// button.enabled = true;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_75 = V_1;
			NullCheck(L_75);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_76 = L_75->___button_5;
			NullCheck(L_76);
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_76, (bool)1, NULL);
			// inputField.enabled = true;
			ChatGPT_tC5D14B68840117D2437B88B00E930C02AF73C573* L_77 = V_1;
			NullCheck(L_77);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_78 = L_77->___inputField_4;
			NullCheck(L_78);
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_78, (bool)1, NULL);
			goto IL_0233;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_021a;
		}
		throw e;
	}

CATCH_021a:
	{// begin catch(System.Exception)
		Exception_t* L_79 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_79;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_80 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_81 = V_8;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_80, L_81, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0246;
	}// end catch (depth: 1)

IL_0233:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_82 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_82, NULL);
	}

IL_0246:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendReplyU3Ed__13_MoveNext_mE73F02A2EDDE215CD3CDFC5F8AF875DE0EE2D46A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65*>(__this + _offset);
	U3CSendReplyU3Ed__13_MoveNext_mE73F02A2EDDE215CD3CDFC5F8AF875DE0EE2D46A(_thisAdjusted, method);
}
// System.Void OpenAI.ChatGPT/<SendReply>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendReplyU3Ed__13_SetStateMachine_m7C6AD7ABF4537003405E87A626D7743AFE0FB78B (U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendReplyU3Ed__13_SetStateMachine_m7C6AD7ABF4537003405E87A626D7743AFE0FB78B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendReplyU3Ed__13_tC27D381E190C644E98E9358D3C9078CF4F48AC65*>(__this + _offset);
	U3CSendReplyU3Ed__13_SetStateMachine_m7C6AD7ABF4537003405E87A626D7743AFE0FB78B(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ArabicSupport.ArabicFixer::Fix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D (String_t* ___0_str, const RuntimeMethod* method) 
{
	{
		// return Fix(str, false, true);
		String_t* L_0 = ___0_str;
		String_t* L_1;
		L_1 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_0, (bool)0, (bool)1, NULL);
		return L_1;
	}
}
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m2BFEB0A15F621E65A6D7D6A57C4572802159A7BB (String_t* ___0_str, bool ___1_rtl, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// if(rtl)
		bool L_0 = ___1_rtl;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return Fix(str);
		String_t* L_1 = ___0_str;
		String_t* L_2;
		L_2 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		// string[] words = str.Split(' ');
		String_t* L_3 = ___0_str;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_3, ((int32_t)32), 0, NULL);
		// string result = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string arabicToIgnore = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach(string word in words)
		V_2 = L_4;
		V_3 = 0;
		goto IL_0073;
	}

IL_0024:
	{
		// foreach(string word in words)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// if(char.IsLower(word.ToLower()[word.Length/2]))
		String_t* L_9 = V_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_9, NULL);
		String_t* L_11 = V_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_10);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, ((int32_t)(L_12/2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_13, NULL);
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		// result += Fix(arabicToIgnore) + word + " ";
		String_t* L_15 = V_0;
		String_t* L_16 = V_1;
		String_t* L_17;
		L_17 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_16, NULL);
		String_t* L_18 = V_4;
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_15, L_17, L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_19;
		// arabicToIgnore = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_006f;
	}

IL_0061:
	{
		// arabicToIgnore += word + " ";
		String_t* L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22;
		L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_20, L_21, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_22;
	}

IL_006f:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0073:
	{
		// foreach(string word in words)
		int32_t L_24 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// if(arabicToIgnore != "")
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_27)
		{
			goto IL_0093;
		}
	}
	{
		// result += Fix(arabicToIgnore);
		String_t* L_28 = V_0;
		String_t* L_29 = V_1;
		String_t* L_30;
		L_30 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_28, L_30, NULL);
		V_0 = L_31;
	}

IL_0093:
	{
		// return result;
		String_t* L_32 = V_0;
		return L_32;
	}
}
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7 (String_t* ___0_str, bool ___1_showTashkeel, bool ___2_useHinduNumbers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// ArabicFixerTool.showTashkeel = showTashkeel;
		bool L_0 = ___1_showTashkeel;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___showTashkeel_0 = L_0;
		// ArabicFixerTool.useHinduNumbers =useHinduNumbers;
		bool L_1 = ___2_useHinduNumbers;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___useHinduNumbers_2 = L_1;
		// if(str.Contains("\n"))
		String_t* L_2 = ___0_str;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// str = str.Replace("\n", Environment.NewLine);
		String_t* L_4 = ___0_str;
		String_t* L_5;
		L_5 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_5, NULL);
		___0_str = L_6;
	}

IL_002b:
	{
		// if(str.Contains(Environment.NewLine))
		String_t* L_7 = ___0_str;
		String_t* L_8;
		L_8 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		// string[] stringSeparators = new string[] {Environment.NewLine};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		V_0 = L_11;
		// string[] strSplit = str.Split(stringSeparators, StringSplitOptions.None);
		String_t* L_13 = ___0_str;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_13, L_14, 0, NULL);
		V_1 = L_15;
		// if(strSplit.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((RuntimeArray*)L_16)->max_length))
		{
			goto IL_005b;
		}
	}
	{
		// return ArabicFixerTool.FixLine(str);
		String_t* L_17 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_17, NULL);
		return L_18;
	}

IL_005b:
	{
		// else if(strSplit.Length == 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		NullCheck(L_19);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		// return ArabicFixerTool.FixLine(str);
		String_t* L_20 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_20, NULL);
		return L_21;
	}

IL_0068:
	{
		// string outputString = ArabicFixerTool.FixLine(strSplit[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_24, NULL);
		V_2 = L_25;
		// int iteration = 1;
		V_3 = 1;
		// if(strSplit.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0093;
	}

IL_007b:
	{
		// outputString += Environment.NewLine + ArabicFixerTool.FixLine(strSplit[iteration]);
		String_t* L_27 = V_2;
		String_t* L_28;
		L_28 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_1;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_27, L_28, L_33, NULL);
		V_2 = L_34;
		// iteration++;
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0093:
	{
		// while(iteration < strSplit.Length)
		int32_t L_36 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_1;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_007b;
		}
	}

IL_0099:
	{
		// return outputString;
		String_t* L_38 = V_2;
		return L_38;
	}

IL_009b:
	{
		// return ArabicFixerTool.FixLine(str);
		String_t* L_39 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_40;
		L_40 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_39, NULL);
		return L_40;
	}
}
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m482EF8A387DADB5E3359D664C6CE4BE74B4ADD01 (String_t* ___0_str, bool ___1_showTashkeel, bool ___2_combineTashkeel, bool ___3_useHinduNumbers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArabicFixerTool.combineTashkeel = combineTashkeel;
		bool L_0 = ___2_combineTashkeel;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1 = L_0;
		// return Fix(str, showTashkeel, useHinduNumbers);
		String_t* L_1 = ___0_str;
		bool L_2 = ___1_showTashkeel;
		bool L_3 = ___3_useHinduNumbers;
		String_t* L_4;
		L_4 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void ArabicSupport.ArabicFixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixer__ctor_m1A17AACD8DA1A31DA9213254A2617ED71F229481 (ArabicFixer_t5BB0DCB99F68BE86B55A83D0E771BCBDD37CC506* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823_inline (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Fixed { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CFixedU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFixedU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) 
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->___m_Text_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAudioRequestBase_set_FileData_m4D20581338E8CCB62AB68143F893A5B4DFBEA13E_inline (CreateAudioRequestBase_tCA06401BB3B22BD68CAD0938762735639032EE37* __this, FileData_t3BC40227BA3F20D3C3E350864D813F0942085852 ___0_value, const RuntimeMethod* method) 
{
	{
		// public FileData FileData { get; set; }
		FileData_t3BC40227BA3F20D3C3E350864D813F0942085852 L_0 = ___0_value;
		__this->___U3CFileDataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CFileDataU3Ek__BackingField_1))->___Data_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CFileDataU3Ek__BackingField_1))->___Name_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAudioRequestBase_set_Model_mA73D044DAA0299585BA057D04067463BFFE98906_inline (CreateAudioRequestBase_tCA06401BB3B22BD68CAD0938762735639032EE37* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Model { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CModelU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAudioTranscriptionsRequest_set_Language_mC9A8B496E87EE8581459314F1042FA1B4B7D2C21_inline (CreateAudioTranscriptionsRequest_t064C384059EE52ABED049117782CF3BE552764E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Language { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CLanguageU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLanguageU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CreateAudioResponse_get_Text_m8CC94CE044BF42DBA31123215EA78004F9956DA5_inline (CreateAudioResponse_t8199A3DC668A31E68D719A47578BAAE0B218994D* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatMessage_get_Role_m2AF3E9BD6F1C5BB7D59FBB29CC5E254E1F2CC0FB_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, const RuntimeMethod* method) 
{
	{
		// public string Role { get; set; }
		String_t* L_0 = __this->___U3CRoleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatMessage_get_Content_m68D8B284E4E04C77B7C34F1150E8363C7381DEE7_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, const RuntimeMethod* method) 
{
	{
		// public string Content { get; set; }
		String_t* L_0 = __this->___U3CContentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatMessage_set_Role_m77D061B08D8F9B8C5156748E54E08D16762C3959_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Role { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CRoleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRoleU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatMessage_set_Content_m5CFB48A9023EBBD1676B52D3327683B59B755035_inline (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Content { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CContentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateChatCompletionRequest_set_Model_mFF52FE86A178367C27D3B527813C828460511504_inline (CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Model { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CModelU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateChatCompletionRequest_set_Messages_m5D4CA6CB032DCDA4922EA09F92C1429098A1E40A_inline (CreateChatCompletionRequest_tD6924FF81BCCBC2D1E6D223F3C5A4EAD64BD233A* __this, List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ChatMessage> Messages { get; set; }
		List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* L_0 = ___0_value;
		__this->___U3CMessagesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessagesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* CreateChatCompletionResponse_get_Choices_m6085CA976C100E75E195316A80CEA9728460ABB7_inline (CreateChatCompletionResponse_tC22EA2C1D1CE1796BF7D531FE8A218A9DA3EE073* __this, const RuntimeMethod* method) 
{
	{
		// public List<ChatChoice> Choices { get; set; }
		List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* L_0 = __this->___U3CChoicesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ChatChoice_get_Message_mDB91CD71D2C5C44758B9A03DA9338AFE4E31898D_inline (ChatChoice_t46C9D663AFA38D7A6451703ABDBFEC65A8CFF305* __this, const RuntimeMethod* method) 
{
	{
		// public ChatMessage Message { get; set; }
		ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_0 = __this->___U3CMessageU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = V_1;
		Il2CppChar L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppChar)L_8);
		return;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___0_item;
		((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAABF55586BFDF280744B4FEB82934E3B95D973DA_gshared_inline (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m685EF183780BB84AD2E3F9502C1BF49575B30327_gshared_inline (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A* __this, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E ___0_item, const RuntimeMethod* method) 
{
	ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ChatMessageU5BU5D_tC3CD1C5575898B32461143ADFF30A3F12E623CF8* L_6 = V_0;
		int32_t L_7 = V_1;
		ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E)L_8);
		return;
	}

IL_0034:
	{
		ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E L_9 = ___0_item;
		((  void (*) (List_1_t7F496CBB855BD1D24BB742671A231D6DD3EBAB0A*, ChatMessage_t07E3E814BBCAD04187599A279B141C2F5019FD7E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3E187BE89C825D6B02FA912B6DA3271B664B4101_gshared_inline (List_1_t9ED1AEA34B55CBC59453E138C3BC861E3626BCC7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
