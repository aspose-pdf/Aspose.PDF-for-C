#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DStream; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class PdfStream; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DContent.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DContent : public System::Object
{
    typedef PDF3DContent ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DStream;
    
public:

    /// <summary>
    /// Gets the extension .
    /// </summary>
    /// <value>The extension.</value>
    System::String get_Extension();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DContent"/> class.
    /// </summary>
    PDF3DContent();
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DContent"/> class.
    /// </summary>
    /// <param name="filename">The filename.</param>
    /// <exception cref="ArgumentException">Unknown 3D Artwork type</exception>
    PDF3DContent(System::String filename);
    
    /// <summary>
    /// Loads 3D content with the specified filename.
    /// </summary>
    /// <param name="filename">The filename.</param>
    /// <exception cref="ArgumentException">Unknown 3D content type</exception>
    void Load(System::String filename);
    /// <summary>
    /// Loads 3D content with the specified filename as PRC format.
    /// </summary>
    /// <param name="filename">The filename.</param>
    void LoadAsPRC(System::String filename);
    /// <summary>
    /// Loads 3D content with the specified filename as U3D format.
    /// </summary>
    /// <param name="filename">The filename.</param>
    void LoadAsU3D(System::String filename);
    /// <summary>
    /// Loads 3D content from stream as PRC format.
    /// </summary>
    /// <param name="stream">The 3D content stream.</param>
    void LoadAsPRC(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Loads 3D content from stream as U3D format.
    /// </summary>
    /// <param name="stream">The 3D content stream.</param>
    void LoadAsU3D(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Loads 3D content from byte array as PRC format.
    /// </summary>
    /// <param name="stream">The stream.</param>
    void LoadAsPRC(System::ArrayPtr<uint8_t> stream);
    /// <summary>
    /// Loads 3D content from byte array as U3D format.
    /// </summary>
    /// <param name="stream">The stream.</param>
    void LoadAsU3D(System::ArrayPtr<uint8_t> stream);
    /// <summary>
    /// Saves 3D content to file.
    /// </summary>
    /// <param name="filename">The file name.</param>
    /// <exception cref="ArgumentException">3DArtwork content format is PRC or U3D.</exception>
    void SaveToFile(System::String filename);
    /// <summary>
    /// Gets 3D content as stream.
    /// </summary>
    /// <returns>Stream.</returns>
    System::SharedPtr<System::IO::Stream> GetAsStream();
    /// <summary>
    /// Gets 3D content as byte array.
    /// </summary>
    /// <returns>System.Byte[].</returns>
    System::ArrayPtr<uint8_t> GetAsByteArray();
    
protected:

    System::SharedPtr<PDF3DStream> Pdf3DStream;
    System::ArrayPtr<uint8_t> Data;
    
    PDF3DContent(System::SharedPtr<Aspose::Pdf::Engine::Data::PdfStream> stream);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::PdfStream> _stream;
    System::String _extension;
    
    static System::ArrayPtr<uint8_t> ReadFully(System::SharedPtr<System::IO::Stream> input);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


