// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#pragma once

#include "djinni_support.hpp"
#include "parcelable_optional_set.hpp"

namespace djinni_generated {

class NativeParcelableOptionalSet final {
public:
    using CppType = ::testsuite::ParcelableOptionalSet;
    using JniType = jobject;

    using Boxed = NativeParcelableOptionalSet;

    ~NativeParcelableOptionalSet();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeParcelableOptionalSet();
    friend ::djinni::JniClass<NativeParcelableOptionalSet>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/ParcelableOptionalSet") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashSet;)V") };
    const jfieldID field_mOptionalSet { ::djinni::jniGetFieldID(clazz.get(), "mOptionalSet", "Ljava/util/HashSet;") };
};

}  // namespace djinni_generated
