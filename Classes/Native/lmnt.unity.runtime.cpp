#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>
struct Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>
struct Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>
struct Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>
struct Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Reflection.FieldInfo>
struct KeyCollection_t2A4B1E0C0E3FF52F044CC9562DC59AD3218A3E26;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Reflection.PropertyInfo>
struct KeyCollection_t4A740E08BACCF78E67A573B2B5D3E5B75071959B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>
struct KeyCollection_tE80796C838DCFD73D7C3C94C8B9A7D78BA7A7613;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>
struct KeyCollection_t3734AAD728FEB87B3511CD7CA011DDE89F091C94;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<LMNT.Voice>
struct List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<LMNT.Voice>
struct Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>>
struct Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Reflection.FieldInfo>
struct ValueCollection_t771E6C8172A73A92131A83B416DB2940A1960969;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Reflection.PropertyInfo>
struct ValueCollection_t9A68CFFF9A6E40C029B1EA51EB6529524D7B0DD7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>
struct ValueCollection_tA5C9E930E813234EDEC61581E2383F72D5FE747B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>
struct ValueCollection_tFE3369B801AA0B2A1261726FE31E0DB405144109;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Reflection.FieldInfo>[]
struct EntryU5BU5D_t276E709F7EC8B1E405D24CC23CD7E090D8888C5D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Reflection.PropertyInfo>[]
struct EntryU5BU5D_t5030BE59A7A14F14CC9013E1BDE715E6C997C14F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>[]
struct EntryU5BU5D_t21A8557CB801F8B96A48DAB4B65B0B05D69539C8;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>[]
struct EntryU5BU5D_t7D4243A9EDD470777C82109D0775BBE89817DED2;
// System.Collections.Generic.List`1<System.String>[]
struct List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// LMNT.Voice[]
struct VoiceU5BU5D_t99621C4C1AF9AC57A1880CC7DCAC72F764EB666C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// LMNT.DialogueTriggerScript
struct DialogueTriggerScript_t3618E346F46C77E73836756F59A65DD109182A3D;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// LMNT.LMNTSpeech
struct LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// LMNT.Voice
struct Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// LMNT.LMNTSpeech/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B;
// LMNT.LMNTSpeech/<Prefetch>d__7
struct U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D;
// LMNT.LMNTSpeech/<Talk>d__8
struct U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral07A2058D68DD1D5634E3CC1D97DE2CA94430E8AC;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral19240144EE0E95A2CE62725D3B246AFB4D3F0356;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5FC535BDBBB7940B784BFD2717DD4933816845;
IL2CPP_EXTERN_C String_t* _stringLiteral2262DAB86B8602F6D5D389FE47C1629A7F221598;
IL2CPP_EXTERN_C String_t* _stringLiteral23BB1856D25C7A2132FDEBAAD7E4928C53F8D9EF;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499;
IL2CPP_EXTERN_C String_t* _stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140;
IL2CPP_EXTERN_C String_t* _stringLiteral43244ECF1D4E94FF13A63C61A912D80D4E4F1A9A;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral61E5564C898E8A01EAA0DA3773C932FFDDB6362C;
IL2CPP_EXTERN_C String_t* _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral8D5D51F9BD71ACD63A66BBAB6A727010285F0D79;
IL2CPP_EXTERN_C String_t* _stringLiteral9D3891CCA27AD74255B952B980294DD0921B3A75;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralAC4D94B80872FF52918717109ADDC9E00A5FA84D;
IL2CPP_EXTERN_C String_t* _stringLiteralB78C93EAA616C38B126599C6A831F7D5673098AB;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB;
IL2CPP_EXTERN_C String_t* _stringLiteralBD97254DD54136F246674D6A6A6B8A8CB28A5C81;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE6956C0457E95B8CBD14BD3DFD1620BA97DA6267;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD1FCB47CE32D812E307B20709FF87D2D3BC3D2B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391_m7D3E2753E352EAAF09CABAAC166CBD2CDACD7FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7723E0E8D06A7FBD5A83ECC881E177035D21DEF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC46AAFBE3C9C3D62ABA0A63CA49039A53CA88546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2B1EF86C9724A85118BE0E2A957CBCC5574B341E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m60B7886F110478FDB7CC0913515C4F93609691E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7C32919F330B76F25E5DE690006A4A32A0974284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m81D77442429D875FE552CE199B7CC36D26EDCD9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4CFCAFEDF3C19BC4700C47E5E0C66B00C6DF4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5EEACE657944DF779DA8A4A0AE0B53031F645F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC497003525E343F83146A93913F4DF388AC4CE41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONParser_CreateMemberNameDictionary_TisFieldInfo_t_mFAA7CB4231D173A6F95CDC6E17ED5917054E156E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONParser_CreateMemberNameDictionary_TisPropertyInfo_t_m9BCF6FB02FB9C3737EA1E1AE9D52D0B1E08AB115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LMNTSpeech_U3CTalkU3Eb__8_0_mFF863A94630B491B1512251DAFDD31E51EABE017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m19C2258D8C707C577110F5AF2980AF768E379972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mA0F389CBD750890E6DE45D5BD59DACA659EC807E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m02FD927358DA536D67346661E64BCAE9A18FEF1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m86972BE9B4BD6C5DA195A166EC584F67C6E96E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m2DDCE58F2AC3BA5B44D141712CB9D5C4871522DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7AE381851F4B706715D9E42310B600AEE8D4A339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m6F4EF551CB6AE5C656826777A7255C9FA2243E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPrefetchU3Ed__7_System_Collections_IEnumerator_Reset_m4C7E1A89AD5884FFEDB784949313C7783D4F0D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTalkU3Ed__8_System_Collections_IEnumerator_Reset_m223F965366F863452ACAB8435879241BD043412D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CLookupByNameU3Eb__0_m8329F1B946AAD1FEDD4F9927566D4589619EFA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE35DD55F90E81A8D51C822DDB9138AD0F9DF41A7 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>
struct Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t276E709F7EC8B1E405D24CC23CD7E090D8888C5D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2A4B1E0C0E3FF52F044CC9562DC59AD3218A3E26* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t771E6C8172A73A92131A83B416DB2940A1960969* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>
struct Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5030BE59A7A14F14CC9013E1BDE715E6C997C14F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4A740E08BACCF78E67A573B2B5D3E5B75071959B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9A68CFFF9A6E40C029B1EA51EB6529524D7B0DD7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>
struct Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t21A8557CB801F8B96A48DAB4B65B0B05D69539C8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE80796C838DCFD73D7C3C94C8B9A7D78BA7A7613* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA5C9E930E813234EDEC61581E2383F72D5FE747B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>
struct Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D4243A9EDD470777C82109D0775BBE89817DED2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3734AAD728FEB87B3511CD7CA011DDE89F091C94* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFE3369B801AA0B2A1261726FE31E0DB405144109* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LMNT.Voice>
struct List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VoiceU5BU5D_t99621C4C1AF9AC57A1880CC7DCAC72F764EB666C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>>
struct Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// LMNT.Constants
struct Constants_tEC940136E606A8BF49401762B04A8BE719782700  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// TinyJson.JSONParser
struct JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63  : public RuntimeObject
{
};

// LMNT.LMNTLoader
struct LMNTLoader_t5B3336AD16D677F0E0059EC86FBDBF2CE9FB9210  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// LMNT.Voice
struct Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28  : public RuntimeObject
{
	// System.String LMNT.Voice::id
	String_t* ___id_0;
	// System.String LMNT.Voice::name
	String_t* ___name_1;
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
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

// LMNT.LMNTSpeech/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B  : public RuntimeObject
{
	// System.String LMNT.LMNTSpeech/<>c__DisplayClass9_0::name
	String_t* ___name_0;
};

// LMNT.LMNTSpeech/<Prefetch>d__7
struct U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D  : public RuntimeObject
{
	// System.Int32 LMNT.LMNTSpeech/<Prefetch>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LMNT.LMNTSpeech/<Prefetch>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LMNT.LMNTSpeech LMNT.LMNTSpeech/<Prefetch>d__7::<>4__this
	LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest LMNT.LMNTSpeech/<Prefetch>d__7::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_3;
};

// LMNT.LMNTSpeech/<Talk>d__8
struct U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51  : public RuntimeObject
{
	// System.Int32 LMNT.LMNTSpeech/<Talk>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LMNT.LMNTSpeech/<Talk>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LMNT.LMNTSpeech LMNT.LMNTSpeech/<Talk>d__8::<>4__this
	LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<LMNT.Voice>
struct Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.AudioType
struct AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B 
{
	// System.Int32 UnityEngine.AudioType::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
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

// System.Globalization.DateTimeStyles
struct DateTimeStyles_t68D2C41B347837759F064D04F256AC268AF50465 
{
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Globalization.NumberStyles
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;
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

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Predicate`1<LMNT.Voice>
struct Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerAudioClip::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// LMNT.DialogueTriggerScript
struct DialogueTriggerScript_t3618E346F46C77E73836756F59A65DD109182A3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator LMNT.DialogueTriggerScript::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// UnityEngine.AudioSource LMNT.DialogueTriggerScript::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
	// LMNT.LMNTSpeech LMNT.DialogueTriggerScript::speech
	LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* ___speech_6;
	// System.Boolean LMNT.DialogueTriggerScript::triggered
	bool ___triggered_7;
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

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<LMNT.Voice>
struct List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VoiceU5BU5D_t99621C4C1AF9AC57A1880CC7DCAC72F764EB666C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LMNT.Voice>

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>>

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<System.Object>

// LMNT.Constants
struct Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields
{
	// System.String LMNT.Constants::LMNT_PACKAGE_PATH
	String_t* ___LMNT_PACKAGE_PATH_0;
	// System.String LMNT.Constants::LMNT_LOGO_PATH
	String_t* ___LMNT_LOGO_PATH_1;
	// System.String LMNT.Constants::LMNT_SPEECH_INSPECTOR_XML
	String_t* ___LMNT_SPEECH_INSPECTOR_XML_2;
	// System.String LMNT.Constants::LMNT_SIGNUP_URL
	String_t* ___LMNT_SIGNUP_URL_3;
	// System.String LMNT.Constants::LMNT_SYNTHESIZE_URL
	String_t* ___LMNT_SYNTHESIZE_URL_4;
	// System.String LMNT.Constants::LMNT_VOICES_URL
	String_t* ___LMNT_VOICES_URL_5;
};

// LMNT.Constants

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// TinyJson.JSONParser

// TinyJson.JSONParser
struct JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields
{
	// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>> TinyJson.JSONParser::splitArrayPool
	Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* ___splitArrayPool_0;
	// System.Text.StringBuilder TinyJson.JSONParser::stringBuilder
	StringBuilder_t* ___stringBuilder_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>> TinyJson.JSONParser::fieldInfoCache
	Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C* ___fieldInfoCache_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>> TinyJson.JSONParser::propertyInfoCache
	Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D* ___propertyInfoCache_3;
};

// LMNT.LMNTLoader

// LMNT.LMNTLoader

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// LMNT.Voice

// LMNT.Voice

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.WWWForm

// LMNT.LMNTSpeech/<>c__DisplayClass9_0

// LMNT.LMNTSpeech/<>c__DisplayClass9_0

// LMNT.LMNTSpeech/<Prefetch>d__7

// LMNT.LMNTSpeech/<Prefetch>d__7

// LMNT.LMNTSpeech/<Talk>d__8

// LMNT.LMNTSpeech/<Talk>d__8

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<LMNT.Voice>

// System.Collections.Generic.List`1/Enumerator<LMNT.Voice>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// UnityEngine.AudioType

// UnityEngine.AudioType

// System.Reflection.BindingFlags

// System.Reflection.BindingFlags

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Globalization.DateTimeStyles

// System.Globalization.DateTimeStyles

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Globalization.NumberStyles

// System.Globalization.NumberStyles

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.StringSplitOptions

// System.StringSplitOptions

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.TextAsset

// UnityEngine.TextAsset

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

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Predicate`1<LMNT.Voice>

// System.Predicate`1<LMNT.Voice>

// UnityEngine.Networking.DownloadHandlerAudioClip

// UnityEngine.Networking.DownloadHandlerAudioClip

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// LMNT.DialogueTriggerScript

// LMNT.DialogueTriggerScript

// LMNT.LMNTSpeech

// LMNT.LMNTSpeech
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
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
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,T> TinyJson.JSONParser::CreateMemberNameDictionary<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JSONParser_CreateMemberNameDictionary_TisRuntimeObject_m61A1BED05B3E1D9BE4436F4D49BC98121735A19A_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_members, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>>::get_Count()
inline int32_t Stack_1_get_Count_m6F4EF551CB6AE5C656826777A7255C9FA2243E34_inline (Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>>::Pop()
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Stack_1_Pop_m2DDCE58F2AC3BA5B44D141712CB9D5C4871522DB (Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* __this, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 TinyJson.JSONParser::AppendUntilStringEnd(System.Boolean,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONParser_AppendUntilStringEnd_m1ED295749643F11380C7384EA284B1164C6A3FD5 (bool ___0_appendEscapeCharacter, int32_t ___1_startIdx, String_t* ___2_json, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_TryParse_m5F53514F97B4CF90C9F1D49D3794B52F6E07BBF3 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, uint32_t* ___3_result, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B (RuntimeObject* ___0_value, Type_t* ___1_conversionType, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
// System.Boolean System.Decimal::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___3_result, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::TryParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_TryParse_mDF8C58EBB8C43525DDD1A49AFD3D4002908CE143 (String_t* ___0_s, RuntimeObject* ___1_provider, int32_t ___2_styles, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___3_result, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12 (Type_t* ___0_enumType, String_t* ___1_value, bool ___2_ignoreCase, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> TinyJson.JSONParser::Split(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974 (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Object TinyJson.JSONParser::ParseValue(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONParser_ParseValue_m5FC7ED7252FA8BFB27BD00D99887E894250F5352 (Type_t* ___0_type, String_t* ___1_json, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.String>>::Push(T)
inline void Stack_1_Push_m7AE381851F4B706715D9E42310B600AEE8D4A339 (Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_types, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_parameters, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Object TinyJson.JSONParser::ParseAnonymousValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONParser_ParseAnonymousValue_m6CBBFD32B5CBA16DF578154FFC69DE6E68CCC44C (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Object TinyJson.JSONParser::ParseObject(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONParser_ParseObject_mEF2EDBE60B84A6D55A4F1A766278B90E5153C292 (Type_t* ___0_type, String_t* ___1_json, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_m8C1A38685D548E89FB8A05525B55261CC8D271B2 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, double* ___3_result, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m60B7886F110478FDB7CC0913515C4F93609691E5 (Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C* __this, Type_t* ___0_key, Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C*, Type_t*, Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Collections.Generic.Dictionary`2<System.String,T> TinyJson.JSONParser::CreateMemberNameDictionary<System.Reflection.FieldInfo>(T[])
inline Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* JSONParser_CreateMemberNameDictionary_TisFieldInfo_t_mFAA7CB4231D173A6F95CDC6E17ED5917054E156E (FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* ___0_members, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* (*) (FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, const RuntimeMethod*))JSONParser_CreateMemberNameDictionary_TisRuntimeObject_m61A1BED05B3E1D9BE4436F4D49BC98121735A19A_gshared)(___0_members, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7723E0E8D06A7FBD5A83ECC881E177035D21DEF0 (Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C* __this, Type_t* ___0_key, Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C*, Type_t*, Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m7C32919F330B76F25E5DE690006A4A32A0974284 (Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D* __this, Type_t* ___0_key, Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D*, Type_t*, Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Collections.Generic.Dictionary`2<System.String,T> TinyJson.JSONParser::CreateMemberNameDictionary<System.Reflection.PropertyInfo>(T[])
inline Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* JSONParser_CreateMemberNameDictionary_TisPropertyInfo_t_m9BCF6FB02FB9C3737EA1E1AE9D52D0B1E08AB115 (PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* ___0_members, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* (*) (PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, const RuntimeMethod*))JSONParser_CreateMemberNameDictionary_TisRuntimeObject_m61A1BED05B3E1D9BE4436F4D49BC98121735A19A_gshared)(___0_members, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC46AAFBE3C9C3D62ABA0A63CA49039A53CA88546 (Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D* __this, Type_t* ___0_key, Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D*, Type_t*, Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m81D77442429D875FE552CE199B7CC36D26EDCD9D (Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* __this, String_t* ___0_key, FieldInfo_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F*, String_t*, FieldInfo_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Reflection.PropertyInfo>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2B1EF86C9724A85118BE0E2A957CBCC5574B341E (Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* __this, String_t* ___0_key, PropertyInfo_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3*, String_t*, PropertyInfo_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<LMNT.LMNTSpeech>()
inline LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* Component_GetComponent_TisLMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391_m7D3E2753E352EAAF09CABAAC166CBD2CDACD7FBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator LMNT.LMNTSpeech::Prefetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMNTSpeech_Prefetch_mEAC4F2546333D0421151928DF9B7F1460B5FE09B (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LMNT.LMNTSpeech::Talk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMNTSpeech_Talk_mB2EB264A44A8E60698318B94384948301CE66655 (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void LMNT.LMNTLoader::SaveTextResource(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMNTLoader_SaveTextResource_m1B1B2017E3AE584678BEA5988D63DF42568F9C0F (String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LMNT.Voice>::.ctor()
inline void List_1__ctor_m86972BE9B4BD6C5DA195A166EC584F67C6E96E25 (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void LMNT.Voice::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voice__ctor_m9E51B6FAEFDCCFC2021F7011990F59AB293E3F6B (Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* __this, String_t* ___0_id, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LMNT.Voice>::Add(T)
inline void List_1_Add_m19C2258D8C707C577110F5AF2980AF768E379972_inline (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* __this, Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5*, Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LMNT.Voice>::GetEnumerator()
inline Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4 List_1_GetEnumerator_m02FD927358DA536D67346661E64BCAE9A18FEF1B (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4 (*) (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LMNT.Voice>::Dispose()
inline void Enumerator_Dispose_m0F4CFCAFEDF3C19BC4700C47E5E0C66B00C6DF4C (Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<LMNT.Voice>::get_Current()
inline Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* Enumerator_get_Current_mC497003525E343F83146A93913F4DF388AC4CE41_inline (Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4* __this, const RuntimeMethod* method)
{
	return ((  Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* (*) (Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<LMNT.Voice>::MoveNext()
inline bool Enumerator_MoveNext_m5EEACE657944DF779DA8A4A0AE0B53031F645F3E (Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.String LMNT.LMNTLoader::LoadApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LMNTLoader_LoadApiKey_m65A75F011723E9089A6651E3990069DC3CC5474A (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<LMNT.Voice> LMNT.LMNTLoader::LoadVoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* LMNTLoader_LoadVoices_mE17EB49930AEA8A8EC0E0C1750401CD853A70E4C (const RuntimeMethod* method) ;
// System.Void LMNT.LMNTSpeech/<Prefetch>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrefetchU3Ed__7__ctor_m3D8FBA3F1DB1EC86ACFBAF91F9B7A32BC584B76B (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void LMNT.LMNTSpeech/<Talk>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__8__ctor_m036ACF5AED3AB03778FE4ED368F784A861AC9BAF (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void LMNT.LMNTSpeech/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m80D98AA6E5E1134ACB228F2E28D947F6BA2EE4DB (U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<LMNT.Voice>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mD6C83B13757BF43D3D8C0A5F004A1F0D65CDA05C (Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Collections.Generic.List`1<LMNT.Voice>::Find(System.Predicate`1<T>)
inline Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* List_1_Find_mA0F389CBD750890E6DE45D5BD59DACA659EC807E (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* __this, Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4* ___0_match, const RuntimeMethod* method)
{
	return ((  Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* (*) (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5*, Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___0_match, method);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LMNT.LMNTSpeech/<Prefetch>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrefetchU3Ed__7_U3CU3Em__Finally1_mF135337E85A65AA50EB23B5B7C80D1A8A6CBE1B8 (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) ;
// System.Void LMNT.LMNTSpeech/<Prefetch>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrefetchU3Ed__7_System_IDisposable_Dispose_mBBBF18A1F22E4DA4D3A93CCA26DFD21A3E4F2F96 (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.String LMNT.LMNTSpeech::LookupByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LMNTSpeech_LookupByName_m3FE80F701623ADC0916C8EF6B7AA99CDE33C2EAC (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___0_fieldName, String_t* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___0_uri, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___1_formData, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerAudioClip::.ctor(System.String,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip__ctor_mB8C00870FDA938440C2E89BCAC682E636641B61F (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, String_t* ___0_url, int32_t ___1_audioType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Networking.DownloadHandlerAudioClip::get_audioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
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
// System.Int32 TinyJson.JSONParser::AppendUntilStringEnd(System.Boolean,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONParser_AppendUntilStringEnd_m1ED295749643F11380C7384EA284B1164C6A3FD5 (bool ___0_appendEscapeCharacter, int32_t ___1_startIdx, String_t* ___2_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// stringBuilder.Append(json[startIdx]);
		StringBuilder_t* L_0 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		String_t* L_1 = ___2_json;
		int32_t L_2 = ___1_startIdx;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, L_3, NULL);
		// for (int i = startIdx + 1; i < json.Length; i++)
		int32_t L_5 = ___1_startIdx;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0087;
	}

IL_0018:
	{
		// if (json[i] == '\\')
		String_t* L_6 = ___2_json;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0052;
		}
	}
	{
		// if (appendEscapeCharacter)
		bool L_9 = ___0_appendEscapeCharacter;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// stringBuilder.Append(json[i]);
		StringBuilder_t* L_10 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		String_t* L_11 = ___2_json;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, L_13, NULL);
	}

IL_0038:
	{
		// stringBuilder.Append(json[i + 1]);
		StringBuilder_t* L_15 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		String_t* L_16 = ___2_json;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		NullCheck(L_15);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, L_18, NULL);
		// i++;//Skip next character as it is escaped
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		goto IL_0083;
	}

IL_0052:
	{
		// else if (json[i] == '"')
		String_t* L_21 = ___2_json;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, L_22, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0071;
		}
	}
	{
		// stringBuilder.Append(json[i]);
		StringBuilder_t* L_24 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		String_t* L_25 = ___2_json;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, L_27, NULL);
		// return i;
		int32_t L_29 = V_0;
		return L_29;
	}

IL_0071:
	{
		// stringBuilder.Append(json[i]);
		StringBuilder_t* L_30 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		String_t* L_31 = ___2_json;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		Il2CppChar L_33;
		L_33 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_31, L_32, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, L_33, NULL);
	}

IL_0083:
	{
		// for (int i = startIdx + 1; i < json.Length; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0087:
	{
		// for (int i = startIdx + 1; i < json.Length; i++)
		int32_t L_36 = V_0;
		String_t* L_37 = ___2_json;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_0018;
		}
	}
	{
		// return json.Length - 1;
		String_t* L_39 = ___2_json;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}
}
// System.Collections.Generic.List`1<System.String> TinyJson.JSONParser::Split(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974 (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m2DDCE58F2AC3BA5B44D141712CB9D5C4871522DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m6F4EF551CB6AE5C656826777A7255C9FA2243E34_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_0 = NULL;
	{
		// List<string> splitArray = splitArrayPool.Count > 0 ? splitArrayPool.Pop() : new List<string>();
		Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* L_0 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___splitArrayPool_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_m6F4EF551CB6AE5C656826777A7255C9FA2243E34_inline(L_0, Stack_1_get_Count_m6F4EF551CB6AE5C656826777A7255C9FA2243E34_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0014:
	{
		Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* L_3 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___splitArrayPool_0;
		NullCheck(L_3);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4;
		L_4 = Stack_1_Pop_m2DDCE58F2AC3BA5B44D141712CB9D5C4871522DB(L_3, Stack_1_Pop_m2DDCE58F2AC3BA5B44D141712CB9D5C4871522DB_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		// splitArray.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_0;
		NullCheck(L_5);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_5, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// if (json.Length == 2)
		String_t* L_6 = ___0_json;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0030;
		}
	}
	{
		// return splitArray;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
		return L_8;
	}

IL_0030:
	{
		// int parseDepth = 0;
		V_1 = 0;
		// stringBuilder.Length = 0;
		StringBuilder_t* L_9 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		NullCheck(L_9);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_9, 0, NULL);
		// for (int i = 1; i < json.Length - 1; i++)
		V_2 = 1;
		goto IL_00cc;
	}

IL_0044:
	{
		// switch (json[i])
		String_t* L_10 = ___0_json;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_3 = L_12;
		Il2CppChar L_13 = V_3;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_0062;
		}
	}
	{
		Il2CppChar L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)34))))
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)44))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)58))))
		{
			goto IL_0096;
		}
	}
	{
		goto IL_00b6;
	}

IL_0062:
	{
		Il2CppChar L_17 = V_3;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_0073;
		}
	}
	{
		Il2CppChar L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)91))))
		{
			goto IL_007f;
		}
	}
	{
		Il2CppChar L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)93))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00b6;
	}

IL_0073:
	{
		Il2CppChar L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)123))))
		{
			goto IL_007f;
		}
	}
	{
		Il2CppChar L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)125))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00b6;
	}

IL_007f:
	{
		// parseDepth++;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// break;
		goto IL_00b6;
	}

IL_0085:
	{
		// parseDepth--;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		// break;
		goto IL_00b6;
	}

IL_008b:
	{
		// i = AppendUntilStringEnd(true, i, json);
		int32_t L_24 = V_2;
		String_t* L_25 = ___0_json;
		int32_t L_26;
		L_26 = JSONParser_AppendUntilStringEnd_m1ED295749643F11380C7384EA284B1164C6A3FD5((bool)1, L_24, L_25, NULL);
		V_2 = L_26;
		// continue;
		goto IL_00c8;
	}

IL_0096:
	{
		// if (parseDepth == 0)
		int32_t L_27 = V_1;
		if (L_27)
		{
			goto IL_00b6;
		}
	}
	{
		// splitArray.Add(stringBuilder.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = V_0;
		StringBuilder_t* L_29 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		NullCheck(L_28);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_28, L_30, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// stringBuilder.Length = 0;
		StringBuilder_t* L_31 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		NullCheck(L_31);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_31, 0, NULL);
		// continue;
		goto IL_00c8;
	}

IL_00b6:
	{
		// stringBuilder.Append(json[i]);
		StringBuilder_t* L_32 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		String_t* L_33 = ___0_json;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		Il2CppChar L_35;
		L_35 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, L_34, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, L_35, NULL);
	}

IL_00c8:
	{
		// for (int i = 1; i < json.Length - 1; i++)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00cc:
	{
		// for (int i = 1; i < json.Length - 1; i++)
		int32_t L_38 = V_2;
		String_t* L_39 = ___0_json;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_40, 1)))))
		{
			goto IL_0044;
		}
	}
	{
		// splitArray.Add(stringBuilder.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41 = V_0;
		StringBuilder_t* L_42 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___stringBuilder_1;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		NullCheck(L_41);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_41, L_43, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return splitArray;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_44 = V_0;
		return L_44;
	}
}
// System.Object TinyJson.JSONParser::ParseValue(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONParser_ParseValue_m5FC7ED7252FA8BFB27BD00D99887E894250F5352 (Type_t* ___0_type, String_t* ___1_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7AE381851F4B706715D9E42310B600AEE8D4A339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19240144EE0E95A2CE62725D3B246AFB4D3F0356);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC4D94B80872FF52918717109ADDC9E00A5FA84D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_4;
	memset((&V_4), 0, sizeof(V_4));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	Type_t* V_7 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_8 = NULL;
	RuntimeArray* V_9 = NULL;
	int32_t V_10 = 0;
	Type_t* V_11 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	Type_t* V_15 = NULL;
	Type_t* V_16 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_17 = NULL;
	RuntimeObject* V_18 = NULL;
	int32_t V_19 = 0;
	String_t* V_20 = NULL;
	RuntimeObject* V_21 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (type == typeof(string))
		Type_t* L_0 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_00ed;
		}
	}
	{
		// if (json.Length <= 2)
		String_t* L_4 = ___1_json;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_5) > ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		// return string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_6;
	}

IL_0024:
	{
		// StringBuilder parseStringBuilder = new StringBuilder(json.Length);
		String_t* L_7 = ___1_json;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		StringBuilder_t* L_9 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_9, L_8, NULL);
		V_0 = L_9;
		// for (int i = 1; i < json.Length - 1; ++i)
		V_1 = 1;
		goto IL_00d8;
	}

IL_0037:
	{
		// if (json[i] == '\\' && i + 1 < json.Length - 1)
		String_t* L_10 = ___1_json;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_13 = V_1;
		String_t* L_14 = ___1_json;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, 1)))))
		{
			goto IL_00c6;
		}
	}
	{
		// int j = "\"\\nrtbf/".IndexOf(json[i + 1]);
		String_t* L_16 = ___1_json;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		NullCheck(_stringLiteral19240144EE0E95A2CE62725D3B246AFB4D3F0356);
		int32_t L_19;
		L_19 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral19240144EE0E95A2CE62725D3B246AFB4D3F0356, L_18, NULL);
		V_2 = L_19;
		// if (j >= 0)
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// parseStringBuilder.Append("\"\\\n\r\t\b\f/"[j]);
		StringBuilder_t* L_21 = V_0;
		int32_t L_22 = V_2;
		NullCheck(_stringLiteralAC4D94B80872FF52918717109ADDC9E00A5FA84D);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralAC4D94B80872FF52918717109ADDC9E00A5FA84D, L_22, NULL);
		NullCheck(L_21);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, L_23, NULL);
		// ++i;
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// continue;
		goto IL_00d4;
	}

IL_0082:
	{
		// if (json[i + 1] == 'u' && i + 5 < json.Length - 1)
		String_t* L_26 = ___1_json;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, ((int32_t)il2cpp_codegen_add(L_27, 1)), NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_29 = V_1;
		String_t* L_30 = ___1_json;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_29, 5))) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_31, 1)))))
		{
			goto IL_00c6;
		}
	}
	{
		// UInt32 c = 0;
		V_3 = 0;
		// if (UInt32.TryParse(json.Substring(i + 2, 4), System.Globalization.NumberStyles.AllowHexSpecifier, null, out c))
		String_t* L_32 = ___1_json;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		String_t* L_34;
		L_34 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_32, ((int32_t)il2cpp_codegen_add(L_33, 2)), 4, NULL);
		bool L_35;
		L_35 = UInt32_TryParse_m5F53514F97B4CF90C9F1D49D3794B52F6E07BBF3(L_34, ((int32_t)512), (RuntimeObject*)NULL, (&V_3), NULL);
		if (!L_35)
		{
			goto IL_00c6;
		}
	}
	{
		// parseStringBuilder.Append((char)c);
		StringBuilder_t* L_36 = V_0;
		uint32_t L_37 = V_3;
		NullCheck(L_36);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_36, ((int32_t)(uint16_t)L_37), NULL);
		// i += 5;
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 5));
		// continue;
		goto IL_00d4;
	}

IL_00c6:
	{
		// parseStringBuilder.Append(json[i]);
		StringBuilder_t* L_40 = V_0;
		String_t* L_41 = ___1_json;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		Il2CppChar L_43;
		L_43 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_42, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, L_43, NULL);
	}

IL_00d4:
	{
		// for (int i = 1; i < json.Length - 1; ++i)
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00d8:
	{
		// for (int i = 1; i < json.Length - 1; ++i)
		int32_t L_46 = V_1;
		String_t* L_47 = ___1_json;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, 1)))))
		{
			goto IL_0037;
		}
	}
	{
		// return parseStringBuilder.ToString();
		StringBuilder_t* L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		return L_50;
	}

IL_00ed:
	{
		// if (type.IsPrimitive)
		Type_t* L_51 = ___0_type;
		NullCheck(L_51);
		bool L_52;
		L_52 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_51, NULL);
		if (!L_52)
		{
			goto IL_0102;
		}
	}
	{
		// var result = Convert.ChangeType(json, type, System.Globalization.CultureInfo.InvariantCulture);
		String_t* L_53 = ___1_json;
		Type_t* L_54 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_55;
		L_55 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_53, L_54, L_55, NULL);
		// return result;
		return L_56;
	}

IL_0102:
	{
		// if (type == typeof(decimal))
		Type_t* L_57 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_012f;
		}
	}
	{
		// decimal.TryParse(json, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out result);
		String_t* L_61 = ___1_json;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_62;
		L_62 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6(L_61, ((int32_t)167), L_62, (&V_4), NULL);
		// return result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_64 = V_4;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65 = L_64;
		RuntimeObject* L_66 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_65);
		return L_66;
	}

IL_012f:
	{
		// if (type == typeof(DateTime))
		Type_t* L_67 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_0167;
		}
	}
	{
		// DateTime.TryParse(json.Replace("\"",""), System.Globalization.CultureInfo.InvariantCulture, System.Globalization.DateTimeStyles.None, out result);
		String_t* L_71 = ___1_json;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_71, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_73;
		L_73 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = DateTime_TryParse_mDF8C58EBB8C43525DDD1A49AFD3D4002908CE143(L_72, L_73, 0, (&V_5), NULL);
		// return result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_75 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_76 = L_75;
		RuntimeObject* L_77 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_76);
		return L_77;
	}

IL_0167:
	{
		// if (json == "null")
		String_t* L_78 = ___1_json;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (!L_79)
		{
			goto IL_0176;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0176:
	{
		// if (type.IsEnum)
		Type_t* L_80 = ___0_type;
		NullCheck(L_80);
		bool L_81;
		L_81 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_80);
		if (!L_81)
		{
			goto IL_01b8;
		}
	}
	{
		// if (json[0] == '"')
		String_t* L_82 = ___1_json;
		NullCheck(L_82);
		Il2CppChar L_83;
		L_83 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_82, 0, NULL);
		if ((!(((uint32_t)L_83) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_019a;
		}
	}
	{
		// json = json.Substring(1, json.Length - 2);
		String_t* L_84 = ___1_json;
		String_t* L_85 = ___1_json;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_85, NULL);
		NullCheck(L_84);
		String_t* L_87;
		L_87 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_84, 1, ((int32_t)il2cpp_codegen_subtract(L_86, 2)), NULL);
		___1_json = L_87;
	}

IL_019a:
	{
	}
	try
	{// begin try (depth: 1)
		// return Enum.Parse(type, json, false);
		Type_t* L_88 = ___0_type;
		String_t* L_89 = ___1_json;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_90;
		L_90 = Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12(L_88, L_89, (bool)0, NULL);
		V_6 = L_90;
		goto IL_046d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01aa;
		}
		throw e;
	}

CATCH_01aa:
	{// begin catch(System.Object)
		RuntimeObject* L_91 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// catch
		// return 0;
		int32_t L_92 = 0;
		RuntimeObject* L_93 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_92);
		V_6 = L_93;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_046d;
	}// end catch (depth: 1)

IL_01b8:
	{
		// if (type.IsArray)
		Type_t* L_94 = ___0_type;
		NullCheck(L_94);
		bool L_95;
		L_95 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_94, NULL);
		if (!L_95)
		{
			goto IL_023d;
		}
	}
	{
		// Type arrayType = type.GetElementType();
		Type_t* L_96 = ___0_type;
		NullCheck(L_96);
		Type_t* L_97;
		L_97 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_96);
		V_7 = L_97;
		// if (json[0] != '[' || json[json.Length - 1] != ']')
		String_t* L_98 = ___1_json;
		NullCheck(L_98);
		Il2CppChar L_99;
		L_99 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_98, 0, NULL);
		if ((!(((uint32_t)L_99) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_01e5;
		}
	}
	{
		String_t* L_100 = ___1_json;
		String_t* L_101 = ___1_json;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_101, NULL);
		NullCheck(L_100);
		Il2CppChar L_103;
		L_103 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_100, ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NULL);
		if ((((int32_t)L_103) == ((int32_t)((int32_t)93))))
		{
			goto IL_01e7;
		}
	}

IL_01e5:
	{
		// return null;
		return NULL;
	}

IL_01e7:
	{
		// List<string> elems = Split(json);
		String_t* L_104 = ___1_json;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_105;
		L_105 = JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974(L_104, NULL);
		V_8 = L_105;
		// Array newArray = Array.CreateInstance(arrayType, elems.Count);
		Type_t* L_106 = V_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_107 = V_8;
		NullCheck(L_107);
		int32_t L_108;
		L_108 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_107, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		RuntimeArray* L_109;
		L_109 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_106, L_108, NULL);
		V_9 = L_109;
		// for (int i = 0; i < elems.Count; i++)
		V_10 = 0;
		goto IL_0223;
	}

IL_0204:
	{
		// newArray.SetValue(ParseValue(arrayType, elems[i]), i);
		RuntimeArray* L_110 = V_9;
		Type_t* L_111 = V_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_112 = V_8;
		int32_t L_113 = V_10;
		NullCheck(L_112);
		String_t* L_114;
		L_114 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_112, L_113, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_115;
		L_115 = JSONParser_ParseValue_m5FC7ED7252FA8BFB27BD00D99887E894250F5352(L_111, L_114, NULL);
		int32_t L_116 = V_10;
		NullCheck(L_110);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_110, L_115, L_116, NULL);
		// for (int i = 0; i < elems.Count; i++)
		int32_t L_117 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_0223:
	{
		// for (int i = 0; i < elems.Count; i++)
		int32_t L_118 = V_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_119 = V_8;
		NullCheck(L_119);
		int32_t L_120;
		L_120 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_119, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_118) < ((int32_t)L_120)))
		{
			goto IL_0204;
		}
	}
	{
		// splitArrayPool.Push(elems);
		Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* L_121 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___splitArrayPool_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_122 = V_8;
		NullCheck(L_121);
		Stack_1_Push_m7AE381851F4B706715D9E42310B600AEE8D4A339(L_121, L_122, Stack_1_Push_m7AE381851F4B706715D9E42310B600AEE8D4A339_RuntimeMethod_var);
		// return newArray;
		RuntimeArray* L_123 = V_9;
		return L_123;
	}

IL_023d:
	{
		// if (type.IsGenericType && type.GetGenericTypeDefinition() == typeof(List<>))
		Type_t* L_124 = ___0_type;
		NullCheck(L_124);
		bool L_125;
		L_125 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_124);
		if (!L_125)
		{
			goto IL_030a;
		}
	}
	{
		Type_t* L_126 = ___0_type;
		NullCheck(L_126);
		Type_t* L_127;
		L_127 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_126);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		bool L_130;
		L_130 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_127, L_129, NULL);
		if (!L_130)
		{
			goto IL_030a;
		}
	}
	{
		// Type listType = type.GetGenericArguments()[0];
		Type_t* L_131 = ___0_type;
		NullCheck(L_131);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_132;
		L_132 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_131);
		NullCheck(L_132);
		int32_t L_133 = 0;
		Type_t* L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		V_11 = L_134;
		// if (json[0] != '[' || json[json.Length - 1] != ']')
		String_t* L_135 = ___1_json;
		NullCheck(L_135);
		Il2CppChar L_136;
		L_136 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_135, 0, NULL);
		if ((!(((uint32_t)L_136) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0289;
		}
	}
	{
		String_t* L_137 = ___1_json;
		String_t* L_138 = ___1_json;
		NullCheck(L_138);
		int32_t L_139;
		L_139 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_138, NULL);
		NullCheck(L_137);
		Il2CppChar L_140;
		L_140 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_137, ((int32_t)il2cpp_codegen_subtract(L_139, 1)), NULL);
		if ((((int32_t)L_140) == ((int32_t)((int32_t)93))))
		{
			goto IL_028b;
		}
	}

IL_0289:
	{
		// return null;
		return NULL;
	}

IL_028b:
	{
		// List<string> elems = Split(json);
		String_t* L_141 = ___1_json;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_142;
		L_142 = JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974(L_141, NULL);
		V_12 = L_142;
		// var list = (IList)type.GetConstructor(new Type[] { typeof(int) }).Invoke(new object[] { elems.Count });
		Type_t* L_143 = ___0_type;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_144 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_145 = L_144;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_147;
		L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, L_147);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_147);
		NullCheck(L_143);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_148;
		L_148 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_143, L_145, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_149 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_150 = L_149;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_151 = V_12;
		NullCheck(L_151);
		int32_t L_152;
		L_152 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_151, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_153 = L_152;
		RuntimeObject* L_154 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_153);
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, L_154);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_154);
		NullCheck(L_148);
		RuntimeObject* L_155;
		L_155 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_148, L_150, NULL);
		V_13 = ((RuntimeObject*)Castclass((RuntimeObject*)L_155, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		// for (int i = 0; i < elems.Count; i++)
		V_14 = 0;
		goto IL_02f0;
	}

IL_02d2:
	{
		// list.Add(ParseValue(listType, elems[i]));
		RuntimeObject* L_156 = V_13;
		Type_t* L_157 = V_11;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_158 = V_12;
		int32_t L_159 = V_14;
		NullCheck(L_158);
		String_t* L_160;
		L_160 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_158, L_159, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_161;
		L_161 = JSONParser_ParseValue_m5FC7ED7252FA8BFB27BD00D99887E894250F5352(L_157, L_160, NULL);
		NullCheck(L_156);
		int32_t L_162;
		L_162 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_156, L_161);
		// for (int i = 0; i < elems.Count; i++)
		int32_t L_163 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_163, 1));
	}

IL_02f0:
	{
		// for (int i = 0; i < elems.Count; i++)
		int32_t L_164 = V_14;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_165 = V_12;
		NullCheck(L_165);
		int32_t L_166;
		L_166 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_165, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_164) < ((int32_t)L_166)))
		{
			goto IL_02d2;
		}
	}
	{
		// splitArrayPool.Push(elems);
		Stack_1_tB32136DCA573C737EA93188AE796912E66B1A497* L_167 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___splitArrayPool_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_168 = V_12;
		NullCheck(L_167);
		Stack_1_Push_m7AE381851F4B706715D9E42310B600AEE8D4A339(L_167, L_168, Stack_1_Push_m7AE381851F4B706715D9E42310B600AEE8D4A339_RuntimeMethod_var);
		// return list;
		RuntimeObject* L_169 = V_13;
		return L_169;
	}

IL_030a:
	{
		// if (type.IsGenericType && type.GetGenericTypeDefinition() == typeof(Dictionary<,>))
		Type_t* L_170 = ___0_type;
		NullCheck(L_170);
		bool L_171;
		L_171 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_170);
		if (!L_171)
		{
			goto IL_042d;
		}
	}
	{
		Type_t* L_172 = ___0_type;
		NullCheck(L_172);
		Type_t* L_173;
		L_173 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_172);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_174 = { reinterpret_cast<intptr_t> (Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_175;
		L_175 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_174, NULL);
		bool L_176;
		L_176 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_173, L_175, NULL);
		if (!L_176)
		{
			goto IL_042d;
		}
	}
	{
		// Type[] args = type.GetGenericArguments();
		Type_t* L_177 = ___0_type;
		NullCheck(L_177);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_178;
		L_178 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_177);
		// keyType = args[0];
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_179 = L_178;
		NullCheck(L_179);
		int32_t L_180 = 0;
		Type_t* L_181 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		V_15 = L_181;
		// valueType = args[1];
		NullCheck(L_179);
		int32_t L_182 = 1;
		Type_t* L_183 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_16 = L_183;
		// if (keyType != typeof(string))
		Type_t* L_184 = V_15;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_185 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_186;
		L_186 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_185, NULL);
		bool L_187;
		L_187 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_184, L_186, NULL);
		if (!L_187)
		{
			goto IL_0353;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0353:
	{
		// if (json[0] != '{' || json[json.Length - 1] != '}')
		String_t* L_188 = ___1_json;
		NullCheck(L_188);
		Il2CppChar L_189;
		L_189 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_188, 0, NULL);
		if ((!(((uint32_t)L_189) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0370;
		}
	}
	{
		String_t* L_190 = ___1_json;
		String_t* L_191 = ___1_json;
		NullCheck(L_191);
		int32_t L_192;
		L_192 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_191, NULL);
		NullCheck(L_190);
		Il2CppChar L_193;
		L_193 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_190, ((int32_t)il2cpp_codegen_subtract(L_192, 1)), NULL);
		if ((((int32_t)L_193) == ((int32_t)((int32_t)125))))
		{
			goto IL_0372;
		}
	}

IL_0370:
	{
		// return null;
		return NULL;
	}

IL_0372:
	{
		// List<string> elems = Split(json);
		String_t* L_194 = ___1_json;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_195;
		L_195 = JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974(L_194, NULL);
		V_17 = L_195;
		// if (elems.Count % 2 != 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_196 = V_17;
		NullCheck(L_196);
		int32_t L_197;
		L_197 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_196, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (!((int32_t)(L_197%2)))
		{
			goto IL_0387;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0387:
	{
		// var dictionary = (IDictionary)type.GetConstructor(new Type[] { typeof(int) }).Invoke(new object[] { elems.Count / 2 });
		Type_t* L_198 = ___0_type;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_199 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_200 = L_199;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_201 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_202;
		L_202 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_201, NULL);
		NullCheck(L_200);
		ArrayElementTypeCheck (L_200, L_202);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_202);
		NullCheck(L_198);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_203;
		L_203 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_198, L_200, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_204 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_205 = L_204;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_206 = V_17;
		NullCheck(L_206);
		int32_t L_207;
		L_207 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_206, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_208 = ((int32_t)(L_207/2));
		RuntimeObject* L_209 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_208);
		NullCheck(L_205);
		ArrayElementTypeCheck (L_205, L_209);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_209);
		NullCheck(L_203);
		RuntimeObject* L_210;
		L_210 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_203, L_205, NULL);
		V_18 = ((RuntimeObject*)Castclass((RuntimeObject*)L_210, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		// for (int i = 0; i < elems.Count; i += 2)
		V_19 = 0;
		goto IL_041f;
	}

IL_03c8:
	{
		// if (elems[i].Length <= 2)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_211 = V_17;
		int32_t L_212 = V_19;
		NullCheck(L_211);
		String_t* L_213;
		L_213 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_211, L_212, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_213);
		int32_t L_214;
		L_214 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_213, NULL);
		if ((((int32_t)L_214) <= ((int32_t)2)))
		{
			goto IL_0419;
		}
	}
	{
		// string keyValue = elems[i].Substring(1, elems[i].Length - 2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_215 = V_17;
		int32_t L_216 = V_19;
		NullCheck(L_215);
		String_t* L_217;
		L_217 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_215, L_216, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_218 = V_17;
		int32_t L_219 = V_19;
		NullCheck(L_218);
		String_t* L_220;
		L_220 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_218, L_219, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_220);
		int32_t L_221;
		L_221 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_220, NULL);
		NullCheck(L_217);
		String_t* L_222;
		L_222 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_217, 1, ((int32_t)il2cpp_codegen_subtract(L_221, 2)), NULL);
		V_20 = L_222;
		// object val = ParseValue(valueType, elems[i + 1]);
		Type_t* L_223 = V_16;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_224 = V_17;
		int32_t L_225 = V_19;
		NullCheck(L_224);
		String_t* L_226;
		L_226 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_224, ((int32_t)il2cpp_codegen_add(L_225, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_227;
		L_227 = JSONParser_ParseValue_m5FC7ED7252FA8BFB27BD00D99887E894250F5352(L_223, L_226, NULL);
		V_21 = L_227;
		// dictionary[keyValue] = val;
		RuntimeObject* L_228 = V_18;
		String_t* L_229 = V_20;
		RuntimeObject* L_230 = V_21;
		NullCheck(L_228);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_228, L_229, L_230);
	}

IL_0419:
	{
		// for (int i = 0; i < elems.Count; i += 2)
		int32_t L_231 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_231, 2));
	}

IL_041f:
	{
		// for (int i = 0; i < elems.Count; i += 2)
		int32_t L_232 = V_19;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_233 = V_17;
		NullCheck(L_233);
		int32_t L_234;
		L_234 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_233, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_232) < ((int32_t)L_234)))
		{
			goto IL_03c8;
		}
	}
	{
		// return dictionary;
		RuntimeObject* L_235 = V_18;
		return L_235;
	}

IL_042d:
	{
		// if (type == typeof(object))
		Type_t* L_236 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		bool L_239;
		L_239 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_236, L_238, NULL);
		if (!L_239)
		{
			goto IL_0446;
		}
	}
	{
		// return ParseAnonymousValue(json);
		String_t* L_240 = ___1_json;
		RuntimeObject* L_241;
		L_241 = JSONParser_ParseAnonymousValue_m6CBBFD32B5CBA16DF578154FFC69DE6E68CCC44C(L_240, NULL);
		return L_241;
	}

IL_0446:
	{
		// if (json[0] == '{' && json[json.Length - 1] == '}')
		String_t* L_242 = ___1_json;
		NullCheck(L_242);
		Il2CppChar L_243;
		L_243 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_242, 0, NULL);
		if ((!(((uint32_t)L_243) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_046b;
		}
	}
	{
		String_t* L_244 = ___1_json;
		String_t* L_245 = ___1_json;
		NullCheck(L_245);
		int32_t L_246;
		L_246 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_245, NULL);
		NullCheck(L_244);
		Il2CppChar L_247;
		L_247 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_244, ((int32_t)il2cpp_codegen_subtract(L_246, 1)), NULL);
		if ((!(((uint32_t)L_247) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_046b;
		}
	}
	{
		// return ParseObject(type, json);
		Type_t* L_248 = ___0_type;
		String_t* L_249 = ___1_json;
		RuntimeObject* L_250;
		L_250 = JSONParser_ParseObject_mEF2EDBE60B84A6D55A4F1A766278B90E5153C292(L_248, L_249, NULL);
		return L_250;
	}

IL_046b:
	{
		// return null;
		return NULL;
	}

IL_046d:
	{
		// }
		RuntimeObject* L_251 = V_6;
		return L_251;
	}
}
// System.Object TinyJson.JSONParser::ParseAnonymousValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONParser_ParseAnonymousValue_m6CBBFD32B5CBA16DF578154FFC69DE6E68CCC44C (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_4 = NULL;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	{
		// if (json.Length == 0)
		String_t* L_0 = ___0_json;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_000a:
	{
		// if (json[0] == '{' && json[json.Length - 1] == '}')
		String_t* L_2 = ___0_json;
		NullCheck(L_2);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, 0, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_4 = ___0_json;
		String_t* L_5 = ___0_json;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		NullCheck(L_4);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_008a;
		}
	}
	{
		// List<string> elems = Split(json);
		String_t* L_8 = ___0_json;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9;
		L_9 = JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974(L_8, NULL);
		V_0 = L_9;
		// if (elems.Count % 2 != 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_10, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (!((int32_t)(L_11%2)))
		{
			goto IL_003a;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_003a:
	{
		// var dict = new Dictionary<string, object>(elems.Count / 2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_12, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868(L_14, ((int32_t)(L_13/2)), Dictionary_2__ctor_mB381575D9E7BA6706F57C22D567610F51B5CD868_RuntimeMethod_var);
		V_1 = L_14;
		// for (int i = 0; i < elems.Count; i += 2)
		V_2 = 0;
		goto IL_007f;
	}

IL_004c:
	{
		// dict[elems[i].Substring(1, elems[i].Length - 2)] = ParseAnonymousValue(elems[i + 1]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = V_0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_16, L_17, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_19, L_20, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		NullCheck(L_18);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, 1, ((int32_t)il2cpp_codegen_subtract(L_22, 2)), NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_27;
		L_27 = JSONParser_ParseAnonymousValue_m6CBBFD32B5CBA16DF578154FFC69DE6E68CCC44C(L_26, NULL);
		NullCheck(L_15);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_15, L_23, L_27, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// for (int i = 0; i < elems.Count; i += 2)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 2));
	}

IL_007f:
	{
		// for (int i = 0; i < elems.Count; i += 2)
		int32_t L_29 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_30, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_004c;
		}
	}
	{
		// return dict;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = V_1;
		return L_32;
	}

IL_008a:
	{
		// if (json[0] == '[' && json[json.Length - 1] == ']')
		String_t* L_33 = ___0_json;
		NullCheck(L_33);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, 0, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_00e7;
		}
	}
	{
		String_t* L_35 = ___0_json;
		String_t* L_36 = ___0_json;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		NullCheck(L_35);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, ((int32_t)il2cpp_codegen_subtract(L_37, 1)), NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_00e7;
		}
	}
	{
		// List<string> items = Split(json);
		String_t* L_39 = ___0_json;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40;
		L_40 = JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974(L_39, NULL);
		V_3 = L_40;
		// var finalList = new List<object>(items.Count);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41 = V_3;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_41, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_43 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_43, L_42, List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		V_4 = L_43;
		// for (int i = 0; i < items.Count; i++)
		V_5 = 0;
		goto IL_00da;
	}

IL_00c0:
	{
		// finalList.Add(ParseAnonymousValue(items[i]));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_44 = V_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_45 = V_3;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		String_t* L_47;
		L_47 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_45, L_46, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_48;
		L_48 = JSONParser_ParseAnonymousValue_m6CBBFD32B5CBA16DF578154FFC69DE6E68CCC44C(L_47, NULL);
		NullCheck(L_44);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_44, L_48, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00da:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_50 = V_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_51 = V_3;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_51, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_00c0;
		}
	}
	{
		// return finalList;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_53 = V_4;
		return L_53;
	}

IL_00e7:
	{
		// if (json[0] == '"' && json[json.Length - 1] == '"')
		String_t* L_54 = ___0_json;
		NullCheck(L_54);
		Il2CppChar L_55;
		L_55 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_54, 0, NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0123;
		}
	}
	{
		String_t* L_56 = ___0_json;
		String_t* L_57 = ___0_json;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_57, NULL);
		NullCheck(L_56);
		Il2CppChar L_59;
		L_59 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_56, ((int32_t)il2cpp_codegen_subtract(L_58, 1)), NULL);
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0123;
		}
	}
	{
		// string str = json.Substring(1, json.Length - 2);
		String_t* L_60 = ___0_json;
		String_t* L_61 = ___0_json;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_61, NULL);
		NullCheck(L_60);
		String_t* L_63;
		L_63 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_60, 1, ((int32_t)il2cpp_codegen_subtract(L_62, 2)), NULL);
		// return str.Replace("\\", string.Empty);
		String_t* L_64 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_63);
		String_t* L_65;
		L_65 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_63, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, L_64, NULL);
		return L_65;
	}

IL_0123:
	{
		// if (char.IsDigit(json[0]) || json[0] == '-')
		String_t* L_66 = ___0_json;
		NullCheck(L_66);
		Il2CppChar L_67;
		L_67 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_66, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Char_IsDigit_m8C1A38685D548E89FB8A05525B55261CC8D271B2(L_67, NULL);
		if (L_68)
		{
			goto IL_013c;
		}
	}
	{
		String_t* L_69 = ___0_json;
		NullCheck(L_69);
		Il2CppChar L_70;
		L_70 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_69, 0, NULL);
		if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0175;
		}
	}

IL_013c:
	{
		// if (json.Contains("."))
		String_t* L_71 = ___0_json;
		NullCheck(L_71);
		bool L_72;
		L_72 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_71, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		if (!L_72)
		{
			goto IL_0164;
		}
	}
	{
		// double.TryParse(json, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out result);
		String_t* L_73 = ___0_json;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_74;
		L_74 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_75;
		L_75 = Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382(L_73, ((int32_t)167), L_74, (&V_6), NULL);
		// return result;
		double L_76 = V_6;
		double L_77 = L_76;
		RuntimeObject* L_78 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_77);
		return L_78;
	}

IL_0164:
	{
		// int.TryParse(json, out result);
		String_t* L_79 = ___0_json;
		bool L_80;
		L_80 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_79, (&V_7), NULL);
		// return result;
		int32_t L_81 = V_7;
		int32_t L_82 = L_81;
		RuntimeObject* L_83 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_82);
		return L_83;
	}

IL_0175:
	{
		// if (json == "true")
		String_t* L_84 = ___0_json;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_85)
		{
			goto IL_0189;
		}
	}
	{
		// return true;
		bool L_86 = ((bool)1);
		RuntimeObject* L_87 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_86);
		return L_87;
	}

IL_0189:
	{
		// if (json == "false")
		String_t* L_88 = ___0_json;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (!L_89)
		{
			goto IL_019d;
		}
	}
	{
		// return false;
		bool L_90 = ((bool)0);
		RuntimeObject* L_91 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_90);
		return L_91;
	}

IL_019d:
	{
		// return null;
		return NULL;
	}
}
// System.Object TinyJson.JSONParser::ParseObject(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONParser_ParseObject_mEF2EDBE60B84A6D55A4F1A766278B90E5153C292 (Type_t* ___0_type, String_t* ___1_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7723E0E8D06A7FBD5A83ECC881E177035D21DEF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC46AAFBE3C9C3D62ABA0A63CA49039A53CA88546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2B1EF86C9724A85118BE0E2A957CBCC5574B341E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m60B7886F110478FDB7CC0913515C4F93609691E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7C32919F330B76F25E5DE690006A4A32A0974284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m81D77442429D875FE552CE199B7CC36D26EDCD9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONParser_CreateMemberNameDictionary_TisFieldInfo_t_mFAA7CB4231D173A6F95CDC6E17ED5917054E156E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONParser_CreateMemberNameDictionary_TisPropertyInfo_t_m9BCF6FB02FB9C3737EA1E1AE9D52D0B1E08AB115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* V_2 = NULL;
	Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	FieldInfo_t* V_7 = NULL;
	PropertyInfo_t* V_8 = NULL;
	{
		// object instance = FormatterServices.GetUninitializedObject(type);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1(L_0, NULL);
		V_0 = L_1;
		// List<string> elems = Split(json);
		String_t* L_2 = ___1_json;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3;
		L_3 = JSONParser_Split_m43665A35C2AFDCFA765834293C0C5DF9C0569974(L_2, NULL);
		V_1 = L_3;
		// if (elems.Count % 2 != 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_4, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (!((int32_t)(L_5%2)))
		{
			goto IL_001a;
		}
	}
	{
		// return instance;
		RuntimeObject* L_6 = V_0;
		return L_6;
	}

IL_001a:
	{
		// if (!fieldInfoCache.TryGetValue(type, out nameToField))
		Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C* L_7 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___fieldInfoCache_2;
		Type_t* L_8 = ___0_type;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_m60B7886F110478FDB7CC0913515C4F93609691E5(L_7, L_8, (&V_2), Dictionary_2_TryGetValue_m60B7886F110478FDB7CC0913515C4F93609691E5_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0043;
		}
	}
	{
		// nameToField = CreateMemberNameDictionary(type.GetFields(BindingFlags.Instance | BindingFlags.Public | BindingFlags.FlattenHierarchy));
		Type_t* L_10 = ___0_type;
		NullCheck(L_10);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_11;
		L_11 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(86 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_10, ((int32_t)84));
		Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* L_12;
		L_12 = JSONParser_CreateMemberNameDictionary_TisFieldInfo_t_mFAA7CB4231D173A6F95CDC6E17ED5917054E156E(L_11, JSONParser_CreateMemberNameDictionary_TisFieldInfo_t_mFAA7CB4231D173A6F95CDC6E17ED5917054E156E_RuntimeMethod_var);
		V_2 = L_12;
		// fieldInfoCache.Add(type, nameToField);
		Dictionary_2_t58FDE44B12A775B4B7CF9C709035184F6889890C* L_13 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___fieldInfoCache_2;
		Type_t* L_14 = ___0_type;
		Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* L_15 = V_2;
		NullCheck(L_13);
		Dictionary_2_Add_m7723E0E8D06A7FBD5A83ECC881E177035D21DEF0(L_13, L_14, L_15, Dictionary_2_Add_m7723E0E8D06A7FBD5A83ECC881E177035D21DEF0_RuntimeMethod_var);
	}

IL_0043:
	{
		// if (!propertyInfoCache.TryGetValue(type, out nameToProperty))
		Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D* L_16 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___propertyInfoCache_3;
		Type_t* L_17 = ___0_type;
		NullCheck(L_16);
		bool L_18;
		L_18 = Dictionary_2_TryGetValue_m7C32919F330B76F25E5DE690006A4A32A0974284(L_16, L_17, (&V_3), Dictionary_2_TryGetValue_m7C32919F330B76F25E5DE690006A4A32A0974284_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		// nameToProperty = CreateMemberNameDictionary(type.GetProperties(BindingFlags.Instance | BindingFlags.Public | BindingFlags.FlattenHierarchy));
		Type_t* L_19 = ___0_type;
		NullCheck(L_19);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_20;
		L_20 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_19, ((int32_t)84));
		Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* L_21;
		L_21 = JSONParser_CreateMemberNameDictionary_TisPropertyInfo_t_m9BCF6FB02FB9C3737EA1E1AE9D52D0B1E08AB115(L_20, JSONParser_CreateMemberNameDictionary_TisPropertyInfo_t_m9BCF6FB02FB9C3737EA1E1AE9D52D0B1E08AB115_RuntimeMethod_var);
		V_3 = L_21;
		// propertyInfoCache.Add(type, nameToProperty);
		Dictionary_2_tA4A3541684586CF4B1BFB58963339F8543EC041D* L_22 = ((JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONParser_tDC461CFB5B7935BD5CD0B17003907CE7F3311B63_il2cpp_TypeInfo_var))->___propertyInfoCache_3;
		Type_t* L_23 = ___0_type;
		Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* L_24 = V_3;
		NullCheck(L_22);
		Dictionary_2_Add_mC46AAFBE3C9C3D62ABA0A63CA49039A53CA88546(L_22, L_23, L_24, Dictionary_2_Add_mC46AAFBE3C9C3D62ABA0A63CA49039A53CA88546_RuntimeMethod_var);
	}

IL_006c:
	{
		// for (int i = 0; i < elems.Count; i += 2)
		V_4 = 0;
		goto IL_00fc;
	}

IL_0074:
	{
		// if (elems[i].Length <= 2)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = V_1;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		String_t* L_27;
		L_27 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_25, L_26, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		if ((((int32_t)L_28) <= ((int32_t)2)))
		{
			goto IL_00f6;
		}
	}
	{
		// string key = elems[i].Substring(1, elems[i].Length - 2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29 = V_1;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		String_t* L_31;
		L_31 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_29, L_30, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = V_1;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		String_t* L_34;
		L_34 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_32, L_33, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_34, NULL);
		NullCheck(L_31);
		String_t* L_36;
		L_36 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_31, 1, ((int32_t)il2cpp_codegen_subtract(L_35, 2)), NULL);
		V_5 = L_36;
		// string value = elems[i + 1];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = V_1;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		String_t* L_39;
		L_39 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_6 = L_39;
		// if (nameToField.TryGetValue(key, out fieldInfo))
		Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F* L_40 = V_2;
		String_t* L_41 = V_5;
		NullCheck(L_40);
		bool L_42;
		L_42 = Dictionary_2_TryGetValue_m81D77442429D875FE552CE199B7CC36D26EDCD9D(L_40, L_41, (&V_7), Dictionary_2_TryGetValue_m81D77442429D875FE552CE199B7CC36D26EDCD9D_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_00d3;
		}
	}
	{
		// fieldInfo.SetValue(instance, ParseValue(fieldInfo.FieldType, value));
		FieldInfo_t* L_43 = V_7;
		RuntimeObject* L_44 = V_0;
		FieldInfo_t* L_45 = V_7;
		NullCheck(L_45);
		Type_t* L_46;
		L_46 = VirtualFuncInvoker0< Type_t* >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_45);
		String_t* L_47 = V_6;
		RuntimeObject* L_48;
		L_48 = JSONParser_ParseValue_m5FC7ED7252FA8BFB27BD00D99887E894250F5352(L_46, L_47, NULL);
		NullCheck(L_43);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_43, L_44, L_48, NULL);
		goto IL_00f6;
	}

IL_00d3:
	{
		// else if (nameToProperty.TryGetValue(key, out propertyInfo))
		Dictionary_2_t02DCEB7FD18940A6FE53A190203E1B88474360E3* L_49 = V_3;
		String_t* L_50 = V_5;
		NullCheck(L_49);
		bool L_51;
		L_51 = Dictionary_2_TryGetValue_m2B1EF86C9724A85118BE0E2A957CBCC5574B341E(L_49, L_50, (&V_8), Dictionary_2_TryGetValue_m2B1EF86C9724A85118BE0E2A957CBCC5574B341E_RuntimeMethod_var);
		if (!L_51)
		{
			goto IL_00f6;
		}
	}
	{
		// propertyInfo.SetValue(instance, ParseValue(propertyInfo.PropertyType, value), null);
		PropertyInfo_t* L_52 = V_8;
		RuntimeObject* L_53 = V_0;
		PropertyInfo_t* L_54 = V_8;
		NullCheck(L_54);
		Type_t* L_55;
		L_55 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_54);
		String_t* L_56 = V_6;
		RuntimeObject* L_57;
		L_57 = JSONParser_ParseValue_m5FC7ED7252FA8BFB27BD00D99887E894250F5352(L_55, L_56, NULL);
		NullCheck(L_52);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_52, L_53, L_57, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
	}

IL_00f6:
	{
		// for (int i = 0; i < elems.Count; i += 2)
		int32_t L_58 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_58, 2));
	}

IL_00fc:
	{
		// for (int i = 0; i < elems.Count; i += 2)
		int32_t L_59 = V_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_60, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_0074;
		}
	}
	{
		// return instance;
		RuntimeObject* L_62 = V_0;
		return L_62;
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
// System.Void LMNT.Constants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__cctor_m3999F015766C578F93D21457DAC020303A98E941 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07A2058D68DD1D5634E3CC1D97DE2CA94430E8AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2262DAB86B8602F6D5D389FE47C1629A7F221598);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23BB1856D25C7A2132FDEBAAD7E4928C53F8D9EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43244ECF1D4E94FF13A63C61A912D80D4E4F1A9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D3891CCA27AD74255B952B980294DD0921B3A75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78C93EAA616C38B126599C6A831F7D5673098AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string LMNT_PACKAGE_PATH = "Packages/com.lmnt.unity";
		((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_PACKAGE_PATH_0 = _stringLiteral2262DAB86B8602F6D5D389FE47C1629A7F221598;
		Il2CppCodeGenWriteBarrier((void**)(&((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_PACKAGE_PATH_0), (void*)_stringLiteral2262DAB86B8602F6D5D389FE47C1629A7F221598);
		// public static readonly string LMNT_LOGO_PATH = "Packages/com.lmnt.unity/Textures/lmnt_logo.png";
		((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_LOGO_PATH_1 = _stringLiteralB78C93EAA616C38B126599C6A831F7D5673098AB;
		Il2CppCodeGenWriteBarrier((void**)(&((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_LOGO_PATH_1), (void*)_stringLiteralB78C93EAA616C38B126599C6A831F7D5673098AB);
		// public static readonly string LMNT_SPEECH_INSPECTOR_XML = "Packages/com.lmnt.unity/Editor/LMNT Speech Inspector.uxml";
		((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SPEECH_INSPECTOR_XML_2 = _stringLiteral43244ECF1D4E94FF13A63C61A912D80D4E4F1A9A;
		Il2CppCodeGenWriteBarrier((void**)(&((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SPEECH_INSPECTOR_XML_2), (void*)_stringLiteral43244ECF1D4E94FF13A63C61A912D80D4E4F1A9A);
		// public static readonly string LMNT_SIGNUP_URL = "https://r.lmnt.com/unity/signup";
		((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SIGNUP_URL_3 = _stringLiteral23BB1856D25C7A2132FDEBAAD7E4928C53F8D9EF;
		Il2CppCodeGenWriteBarrier((void**)(&((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SIGNUP_URL_3), (void*)_stringLiteral23BB1856D25C7A2132FDEBAAD7E4928C53F8D9EF);
		// public static readonly string LMNT_SYNTHESIZE_URL = "https://api.lmnt.com/speech/beta/synthesize";
		((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SYNTHESIZE_URL_4 = _stringLiteral07A2058D68DD1D5634E3CC1D97DE2CA94430E8AC;
		Il2CppCodeGenWriteBarrier((void**)(&((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SYNTHESIZE_URL_4), (void*)_stringLiteral07A2058D68DD1D5634E3CC1D97DE2CA94430E8AC);
		// public static readonly string LMNT_VOICES_URL = "https://api.lmnt.com/speech/beta/voices";
		((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_VOICES_URL_5 = _stringLiteral9D3891CCA27AD74255B952B980294DD0921B3A75;
		Il2CppCodeGenWriteBarrier((void**)(&((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_VOICES_URL_5), (void*)_stringLiteral9D3891CCA27AD74255B952B980294DD0921B3A75);
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
// System.Void LMNT.DialogueTriggerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTriggerScript_Start_mE1A9B234E3A7837378976E8FF125CCA0FF64B1B9 (DialogueTriggerScript_t3618E346F46C77E73836756F59A65DD109182A3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391_m7D3E2753E352EAAF09CABAAC166CBD2CDACD7FBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_5), (void*)L_1);
		// speech = GetComponent<LMNTSpeech>();
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_2;
		L_2 = Component_GetComponent_TisLMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391_m7D3E2753E352EAAF09CABAAC166CBD2CDACD7FBA(__this, Component_GetComponent_TisLMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391_m7D3E2753E352EAAF09CABAAC166CBD2CDACD7FBA_RuntimeMethod_var);
		__this->___speech_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speech_6), (void*)L_2);
		// StartCoroutine(speech.Prefetch());
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_3 = __this->___speech_6;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = LMNTSpeech_Prefetch_mEAC4F2546333D0421151928DF9B7F1460B5FE09B(L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// triggered = false;
		__this->___triggered_7 = (bool)0;
		// }
		return;
	}
}
// System.Void LMNT.DialogueTriggerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTriggerScript_Update_mAE26C732155FFDA73F2905AB88E33980DC032C72 (DialogueTriggerScript_t3618E346F46C77E73836756F59A65DD109182A3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E5564C898E8A01EAA0DA3773C932FFDDB6362C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("q") || Input.GetKeyDown("escape")) {
		bool L_0;
		L_0 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140, NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}

IL_0018:
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_001d:
	{
		// if (!audioSource.isPlaying) {
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// triggered = false;
		__this->___triggered_7 = (bool)0;
	}

IL_0031:
	{
		// if (triggered) {
		bool L_4 = __this->___triggered_7;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		return;
	}

IL_003a:
	{
		// if (Input.GetKeyDown("return") || Input.GetKeyDown("enter")) {
		bool L_5;
		L_5 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499, NULL);
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}

IL_0052:
	{
		// StartCoroutine(speech.Talk());
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_7 = __this->___speech_6;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = LMNTSpeech_Talk_mB2EB264A44A8E60698318B94384948301CE66655(L_7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
	}

IL_0064:
	{
		// if (audioSource.isPlaying) {
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audioSource_5;
		NullCheck(L_10);
		bool L_11;
		L_11 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_10, NULL);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		// animator.SetTrigger("Talk");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_4;
		NullCheck(L_12);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteral61E5564C898E8A01EAA0DA3773C932FFDDB6362C, NULL);
		// triggered = true;
		__this->___triggered_7 = (bool)1;
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void LMNT.DialogueTriggerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTriggerScript__ctor_mB5F475FCCC50365FA308B7E06EC26B52F1B852D9 (DialogueTriggerScript_t3618E346F46C77E73836756F59A65DD109182A3D* __this, const RuntimeMethod* method) 
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
// System.String LMNT.LMNTLoader::LoadApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LMNTLoader_LoadApiKey_m65A75F011723E9089A6651E3990069DC3CC5474A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D5D51F9BD71ACD63A66BBAB6A727010285F0D79);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_0 = NULL;
	{
		// var currentKey = Resources.Load<TextAsset>("LMNT_API_Key");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral8D5D51F9BD71ACD63A66BBAB6A727010285F0D79, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		V_0 = L_0;
		// if (currentKey != null) {
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return currentKey.ToString();
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}

IL_001b:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void LMNT.LMNTLoader::StoreApiKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMNTLoader_StoreApiKey_m3838AFDCA6B1C8A4983D2333960FC58807720C52 (String_t* ___0_apiKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D5D51F9BD71ACD63A66BBAB6A727010285F0D79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveTextResource("LMNT_API_Key", apiKey);
		String_t* L_0 = ___0_apiKey;
		LMNTLoader_SaveTextResource_m1B1B2017E3AE584678BEA5988D63DF42568F9C0F(_stringLiteral8D5D51F9BD71ACD63A66BBAB6A727010285F0D79, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<LMNT.Voice> LMNT.LMNTLoader::LoadVoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* LMNTLoader_LoadVoices_mE17EB49930AEA8A8EC0E0C1750401CD853A70E4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m19C2258D8C707C577110F5AF2980AF768E379972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86972BE9B4BD6C5DA195A166EC584F67C6E96E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E5FC535BDBBB7940B784BFD2717DD4933816845);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* V_0 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	{
		// List<Voice> voiceList = new List<Voice>();
		List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* L_0 = (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5*)il2cpp_codegen_object_new(List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m86972BE9B4BD6C5DA195A166EC584F67C6E96E25(L_0, List_1__ctor_m86972BE9B4BD6C5DA195A166EC584F67C6E96E25_RuntimeMethod_var);
		V_0 = L_0;
		// var voicesFile = Resources.Load<TextAsset>("LMNT_Voices");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1;
		L_1 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral1E5FC535BDBBB7940B784BFD2717DD4933816845, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		V_1 = L_1;
		// if (voicesFile == null) {
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return voiceList;
		List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		// string[] lines = voicesFile.ToString().Split('\n');
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_6, ((int32_t)10), 0, NULL);
		// foreach (string line in lines) {
		V_2 = L_7;
		V_3 = 0;
		goto IL_0060;
	}

IL_002f:
	{
		// foreach (string line in lines) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (line.Length == 0) {
		String_t* L_12 = V_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// string[] fields = line.Split('|');
		String_t* L_14 = V_4;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)124), 0, NULL);
		V_5 = L_15;
		// voiceList.Add(new Voice(fields[0], fields[1]));
		List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* L_16 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_5;
		NullCheck(L_17);
		int32_t L_18 = 0;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* L_23 = (Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28*)il2cpp_codegen_object_new(Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Voice__ctor_m9E51B6FAEFDCCFC2021F7011990F59AB293E3F6B(L_23, L_19, L_22, NULL);
		NullCheck(L_16);
		List_1_Add_m19C2258D8C707C577110F5AF2980AF768E379972_inline(L_16, L_23, List_1_Add_m19C2258D8C707C577110F5AF2980AF768E379972_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0060:
	{
		// foreach (string line in lines) {
		int32_t L_25 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_2;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		// return voiceList;
		List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* L_27 = V_0;
		return L_27;
	}
}
// System.Void LMNT.LMNTLoader::StoreVoices(System.Collections.Generic.List`1<LMNT.Voice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMNTLoader_StoreVoices_mC8B6C2562F93891F7504D4DE39B8C1FC35189379 (List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* ___0_voiceList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4CFCAFEDF3C19BC4700C47E5E0C66B00C6DF4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5EEACE657944DF779DA8A4A0AE0B53031F645F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC497003525E343F83146A93913F4DF388AC4CE41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m02FD927358DA536D67346661E64BCAE9A18FEF1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E5FC535BDBBB7940B784BFD2717DD4933816845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* V_2 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// foreach (Voice v in voiceList) {
		List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* L_1 = ___0_voiceList;
		NullCheck(L_1);
		Enumerator_t69137261A150E9AE7DFF1BACCBFB9FA5677B61F4 L_2;
		L_2 = List_1_GetEnumerator_m02FD927358DA536D67346661E64BCAE9A18FEF1B(L_1, List_1_GetEnumerator_m02FD927358DA536D67346661E64BCAE9A18FEF1B_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0F4CFCAFEDF3C19BC4700C47E5E0C66B00C6DF4C((&V_1), Enumerator_Dispose_m0F4CFCAFEDF3C19BC4700C47E5E0C66B00C6DF4C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_000f_1:
			{
				// foreach (Voice v in voiceList) {
				Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* L_3;
				L_3 = Enumerator_get_Current_mC497003525E343F83146A93913F4DF388AC4CE41_inline((&V_1), Enumerator_get_Current_mC497003525E343F83146A93913F4DF388AC4CE41_RuntimeMethod_var);
				V_2 = L_3;
				// sb.Append($"{v.id}|{v.name}\n");
				StringBuilder_t* L_4 = V_0;
				Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6 = L_5->___id_0;
				Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8 = L_7->___name_1;
				String_t* L_9;
				L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_6, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_8, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				NullCheck(L_4);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_9, NULL);
			}

IL_0039_1:
			{
				// foreach (Voice v in voiceList) {
				bool L_11;
				L_11 = Enumerator_MoveNext_m5EEACE657944DF779DA8A4A0AE0B53031F645F3E((&V_1), Enumerator_MoveNext_m5EEACE657944DF779DA8A4A0AE0B53031F645F3E_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// SaveTextResource("LMNT_Voices", sb.ToString());
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		LMNTLoader_SaveTextResource_m1B1B2017E3AE584678BEA5988D63DF42568F9C0F(_stringLiteral1E5FC535BDBBB7940B784BFD2717DD4933816845, L_13, NULL);
		// }
		return;
	}
}
// System.Void LMNT.LMNTLoader::SaveTextResource(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMNTLoader_SaveTextResource_m1B1B2017E3AE584678BEA5988D63DF42568F9C0F (String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) 
{
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
// System.Void LMNT.LMNTSpeech::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMNTSpeech_Awake_m730508F97DCDA4A5FFCC337CF2F5629D09000BB6 (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->____audioSource_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_4), (void*)L_1);
		// if (_audioSource == null) {
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____audioSource_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// _audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_4, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->____audioSource_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_4), (void*)L_5);
	}

IL_0030:
	{
		// _apiKey = LMNTLoader.LoadApiKey();
		String_t* L_6;
		L_6 = LMNTLoader_LoadApiKey_m65A75F011723E9089A6651E3990069DC3CC5474A(NULL);
		__this->____apiKey_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____apiKey_5), (void*)L_6);
		// _voiceList = LMNTLoader.LoadVoices();
		List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* L_7;
		L_7 = LMNTLoader_LoadVoices_mE17EB49930AEA8A8EC0E0C1750401CD853A70E4C(NULL);
		__this->____voiceList_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voiceList_6), (void*)L_7);
		// }
		return;
	}
}
// System.Collections.IEnumerator LMNT.LMNTSpeech::Prefetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMNTSpeech_Prefetch_mEAC4F2546333D0421151928DF9B7F1460B5FE09B (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* L_0 = (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D*)il2cpp_codegen_object_new(U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPrefetchU3Ed__7__ctor_m3D8FBA3F1DB1EC86ACFBAF91F9B7A32BC584B76B(L_0, 0, NULL);
		U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator LMNT.LMNTSpeech::Talk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMNTSpeech_Talk_mB2EB264A44A8E60698318B94384948301CE66655 (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* L_0 = (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51*)il2cpp_codegen_object_new(U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTalkU3Ed__8__ctor_m036ACF5AED3AB03778FE4ED368F784A861AC9BAF(L_0, 0, NULL);
		U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.String LMNT.LMNTSpeech::LookupByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LMNTSpeech_LookupByName_m3FE80F701623ADC0916C8EF6B7AA99CDE33C2EAC (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mA0F389CBD750890E6DE45D5BD59DACA659EC807E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CLookupByNameU3Eb__0_m8329F1B946AAD1FEDD4F9927566D4589619EFA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B* L_0 = (U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m80D98AA6E5E1134ACB228F2E28D947F6BA2EE4DB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B* L_1 = V_0;
		String_t* L_2 = ___0_name;
		NullCheck(L_1);
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// return _voiceList.Find(v => v.name == name).id;
		List_1_tC523C8ED7B3FB18B8B7109C42710BED4968A21E5* L_3 = __this->____voiceList_6;
		U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B* L_4 = V_0;
		Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4* L_5 = (Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4*)il2cpp_codegen_object_new(Predicate_1_tB45FEB0065328C37DF2F9D76DA4794B4FBE583B4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD6C83B13757BF43D3D8C0A5F004A1F0D65CDA05C(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CLookupByNameU3Eb__0_m8329F1B946AAD1FEDD4F9927566D4589619EFA6C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* L_6;
		L_6 = List_1_Find_mA0F389CBD750890E6DE45D5BD59DACA659EC807E(L_3, L_5, List_1_Find_mA0F389CBD750890E6DE45D5BD59DACA659EC807E_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7 = L_6->___id_0;
		return L_7;
	}
}
// System.Void LMNT.LMNTSpeech::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMNTSpeech__ctor_mD119199CC1C96684D8EE9B338AE155BD4F1AB42F (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean LMNT.LMNTSpeech::<Talk>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LMNTSpeech_U3CTalkU3Eb__8_0_mFF863A94630B491B1512251DAFDD31E51EABE017 (LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => _audioSource.clip != null);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_4;
		NullCheck(L_0);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
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
// System.Void LMNT.LMNTSpeech/<Prefetch>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrefetchU3Ed__7__ctor_m3D8FBA3F1DB1EC86ACFBAF91F9B7A32BC584B76B (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LMNT.LMNTSpeech/<Prefetch>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrefetchU3Ed__7_System_IDisposable_Dispose_mBBBF18A1F22E4DA4D3A93CCA26DFD21A3E4F2F96 (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CPrefetchU3Ed__7_U3CU3Em__Finally1_mF135337E85A65AA50EB23B5B7C80D1A8A6CBE1B8(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean LMNT.LMNTSpeech/<Prefetch>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrefetchU3Ed__7_MoveNext_mA1FE34D41A8A91D531CCB11AE8094D5681447B57 (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD97254DD54136F246674D6A6A6B8A8CB28A5C81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6956C0457E95B8CBD14BD3DFD1620BA97DA6267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD1FCB47CE32D812E307B20709FF87D2D3BC3D2B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* V_2 = NULL;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0115:
			{// begin fault (depth: 1)
				U3CPrefetchU3Ed__7_System_IDisposable_Dispose_mBBBF18A1F22E4DA4D3A93CCA26DFD21A3E4F2F96(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_00e6_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_011c;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// if (_handler != null) {
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_4 = V_2;
				NullCheck(L_4);
				DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_5 = L_4->____handler_7;
				if (!L_5)
				{
					goto IL_0035_1;
				}
			}
			{
				// yield break;
				V_0 = (bool)0;
				goto IL_011c;
			}

IL_0035_1:
			{
				// WWWForm form = new WWWForm();
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_6 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_6, NULL);
				V_3 = L_6;
				// form.AddField("voice", LookupByName(voice));
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_7 = V_3;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_8 = V_2;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10 = L_9->___voice_8;
				NullCheck(L_8);
				String_t* L_11;
				L_11 = LMNTSpeech_LookupByName_m3FE80F701623ADC0916C8EF6B7AA99CDE33C2EAC(L_8, L_10, NULL);
				NullCheck(L_7);
				WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_7, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, L_11, NULL);
				// form.AddField("text", dialogue);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_12 = V_3;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14 = L_13->___dialogue_9;
				NullCheck(L_12);
				WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_12, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, L_14, NULL);
				// using (UnityWebRequest request = UnityWebRequest.Post(Constants.LMNT_SYNTHESIZE_URL, form)) {
				il2cpp_codegen_runtime_class_init_inline(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var);
				String_t* L_15 = ((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SYNTHESIZE_URL_4;
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_16 = V_3;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17;
				L_17 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_15, L_16, NULL);
				__this->___U3CrequestU3E5__2_3 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_3), (void*)L_17);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// _handler = new DownloadHandlerAudioClip(Constants.LMNT_SYNTHESIZE_URL, AudioType.WAV);
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_18 = V_2;
				String_t* L_19 = ((Constants_tEC940136E606A8BF49401762B04A8BE719782700_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tEC940136E606A8BF49401762B04A8BE719782700_il2cpp_TypeInfo_var))->___LMNT_SYNTHESIZE_URL_4;
				DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_20 = (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*)il2cpp_codegen_object_new(DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				DownloadHandlerAudioClip__ctor_mB8C00870FDA938440C2E89BCAC682E636641B61F(L_20, L_19, ((int32_t)20), NULL);
				NullCheck(L_18);
				L_18->____handler_7 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&L_18->____handler_7), (void*)L_20);
				// request.SetRequestHeader("X-API-Key", _apiKey);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CrequestU3E5__2_3;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_22 = V_2;
				NullCheck(L_22);
				String_t* L_23 = L_22->____apiKey_5;
				NullCheck(L_21);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_21, _stringLiteralFD1FCB47CE32D812E307B20709FF87D2D3BC3D2B, L_23, NULL);
				// request.SetRequestHeader("X-Client", "unity/0.1.0");
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CrequestU3E5__2_3;
				NullCheck(L_24);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_24, _stringLiteralE6956C0457E95B8CBD14BD3DFD1620BA97DA6267, _stringLiteralBD97254DD54136F246674D6A6A6B8A8CB28A5C81, NULL);
				// request.downloadHandler = _handler;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = __this->___U3CrequestU3E5__2_3;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_26 = V_2;
				NullCheck(L_26);
				DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_27 = L_26->____handler_7;
				NullCheck(L_25);
				UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_25, L_27, NULL);
				// yield return request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_28 = __this->___U3CrequestU3E5__2_3;
				NullCheck(L_28);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_29;
				L_29 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_28, NULL);
				__this->___U3CU3E2__current_1 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_011c;
			}

IL_00e6_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// _audioSource.clip = _handler.audioClip;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_30 = V_2;
				NullCheck(L_30);
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_31 = L_30->____audioSource_4;
				LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_32 = V_2;
				NullCheck(L_32);
				DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_33 = L_32->____handler_7;
				NullCheck(L_33);
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_34;
				L_34 = DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262(L_33, NULL);
				NullCheck(L_31);
				AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_31, L_34, NULL);
				// }
				U3CPrefetchU3Ed__7_U3CU3Em__Finally1_mF135337E85A65AA50EB23B5B7C80D1A8A6CBE1B8(__this, NULL);
				__this->___U3CrequestU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_011c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		bool L_35 = V_0;
		return L_35;
	}
}
// System.Void LMNT.LMNTSpeech/<Prefetch>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrefetchU3Ed__7_U3CU3Em__Finally1_mF135337E85A65AA50EB23B5B7C80D1A8A6CBE1B8 (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__2_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__2_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object LMNT.LMNTSpeech/<Prefetch>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrefetchU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m54895CA304C3B4A8EDAF58A8A3D0F375A26DF940 (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LMNT.LMNTSpeech/<Prefetch>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrefetchU3Ed__7_System_Collections_IEnumerator_Reset_m4C7E1A89AD5884FFEDB784949313C7783D4F0D2C (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPrefetchU3Ed__7_System_Collections_IEnumerator_Reset_m4C7E1A89AD5884FFEDB784949313C7783D4F0D2C_RuntimeMethod_var)));
	}
}
// System.Object LMNT.LMNTSpeech/<Prefetch>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrefetchU3Ed__7_System_Collections_IEnumerator_get_Current_m28E812E2509215F923AA836263791F8F7C67F7DC (U3CPrefetchU3Ed__7_tB5DE37B67CFC5ED7F0ACB47C1F61F477EC68180D* __this, const RuntimeMethod* method) 
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
// System.Void LMNT.LMNTSpeech/<Talk>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__8__ctor_m036ACF5AED3AB03778FE4ED368F784A861AC9BAF (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LMNT.LMNTSpeech/<Talk>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__8_System_IDisposable_Dispose_m2E77770D5769DE7E2B04FC687DFEE730B843BBD3 (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LMNT.LMNTSpeech/<Talk>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTalkU3Ed__8_MoveNext_m9A02534126A6ECD1C3AC8E8376BBFE92518270AC (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LMNTSpeech_U3CTalkU3Eb__8_0_mFF863A94630B491B1512251DAFDD31E51EABE017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_handler == null) {
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_4 = V_1;
		NullCheck(L_4);
		DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_5 = L_4->____handler_7;
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		// StartCoroutine(Prefetch());
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_6 = V_1;
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = LMNTSpeech_Prefetch_mEAC4F2546333D0421151928DF9B7F1460B5FE09B(L_7, NULL);
		NullCheck(L_6);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_6, L_8, NULL);
	}

IL_0033:
	{
		// if (_audioSource.clip == null) {
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_10 = V_1;
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = L_10->____audioSource_4;
		NullCheck(L_11);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12;
		L_12 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		// yield return new WaitUntil(() => _audioSource.clip != null);
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_14 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_15 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_15, L_14, (intptr_t)((void*)LMNTSpeech_U3CTalkU3Eb__8_0_mFF863A94630B491B1512251DAFDD31E51EABE017_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_16 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_16, L_15, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006d:
	{
		// _audioSource.Play();
		LMNTSpeech_tAD4F8DE6F5C1E61E20BF42B9E992D5427B437391* L_17 = V_1;
		NullCheck(L_17);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = L_17->____audioSource_4;
		NullCheck(L_18);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_18, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LMNT.LMNTSpeech/<Talk>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTalkU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9DF27B447191E0E0DC0833040AD5B44B37D964E7 (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LMNT.LMNTSpeech/<Talk>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__8_System_Collections_IEnumerator_Reset_m223F965366F863452ACAB8435879241BD043412D (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTalkU3Ed__8_System_Collections_IEnumerator_Reset_m223F965366F863452ACAB8435879241BD043412D_RuntimeMethod_var)));
	}
}
// System.Object LMNT.LMNTSpeech/<Talk>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTalkU3Ed__8_System_Collections_IEnumerator_get_Current_m7FEA8B74338C831027C27861E021C1582BE0BE1B (U3CTalkU3Ed__8_tEA048EBA7520711AD212797B8AF285E3ADCB3F51* __this, const RuntimeMethod* method) 
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
// System.Void LMNT.LMNTSpeech/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m80D98AA6E5E1134ACB228F2E28D947F6BA2EE4DB (U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LMNT.LMNTSpeech/<>c__DisplayClass9_0::<LookupByName>b__0(LMNT.Voice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CLookupByNameU3Eb__0_m8329F1B946AAD1FEDD4F9927566D4589619EFA6C (U3CU3Ec__DisplayClass9_0_tECA8A6B6FD1E80005A1A33DF28458B3F36DB468B* __this, Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* ___0_v, const RuntimeMethod* method) 
{
	{
		// return _voiceList.Find(v => v.name == name).id;
		Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* L_0 = ___0_v;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_1;
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void LMNT.Voice::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voice__ctor_m9E51B6FAEFDCCFC2021F7011990F59AB293E3F6B (Voice_t54371FD4396C2A5D121CBD2E7C3F0FC6CA587F28* __this, String_t* ___0_id, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// public Voice(string id, string name) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.id = id;
		String_t* L_0 = ___0_id;
		__this->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)L_0);
		// this.name = name;
		String_t* L_1 = ___1_name;
		__this->___name_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_1);
		// }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
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
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
