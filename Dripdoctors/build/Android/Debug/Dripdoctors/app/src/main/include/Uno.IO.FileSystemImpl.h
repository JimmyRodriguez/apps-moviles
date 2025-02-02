// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\IO\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct FileSystemImpl;}}}
namespace uBase { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// internal static class FileSystemImpl :1558
// {
uClassType* FileSystemImpl_typeof();
void FileSystemImpl__CppXliOpen_fn(uString* filename, int* filemode, uBase::Stream** __retval);
void FileSystemImpl__CppXliOpenRead_fn(uString* filename, uBase::Stream** __retval);
void FileSystemImpl__DeleteFile_fn(uString* filename);
void FileSystemImpl__GetUserDirectory_fn(int* dir, uString** __retval);
void FileSystemImpl__IsFile_fn(uString* filename, bool* __retval);
void FileSystemImpl__ReadAllBytes_fn(uString* filename, uArray** __retval);
void FileSystemImpl__ReadAllText_fn(uString* filename, uString** __retval);
void FileSystemImpl__WriteAllBytes_fn(uString* filename, uArray* bytes);
void FileSystemImpl__WriteAllText_fn(uString* filename, uString* text);

struct FileSystemImpl : uObject
{
    static uBase::Stream* CppXliOpen(uString* filename, int filemode);
    static uBase::Stream* CppXliOpenRead(uString* filename);
    static void DeleteFile(uString* filename);
    static uString* GetUserDirectory(int dir);
    static bool IsFile(uString* filename);
    static uArray* ReadAllBytes(uString* filename);
    static uString* ReadAllText(uString* filename);
    static void WriteAllBytes(uString* filename, uArray* bytes);
    static void WriteAllText(uString* filename, uString* text);
};
// }

}}} // ::g::Uno::IO
