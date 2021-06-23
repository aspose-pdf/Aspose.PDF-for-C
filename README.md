![Nuget](https://img.shields.io/nuget/v/Aspose.pdf.Cpp) ![Nuget](https://img.shields.io/nuget/dt/Aspose.pdf.Cpp) ![GitHub](https://img.shields.io/github/license/aspose-pdf/Aspose.PDF-for-C)
# C++ API to Process & Manipulate PDF Files

[Aspose.PDF for C++](https://products.aspose.com/pdf/cpp) is a native C++ library that allows to create, process, manipulate and convert PDF documents without installing Adobe Acrobat®.

<p align="center">
  <a title="Download ZIP" href="https://github.com/aspose-pdf/Aspose.Pdf-for-c/archive/master.zip">
    <img src="http://i.imgur.com/hwNhrGZ.png" />
  </a>
</p>

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn and explore the API features.



## `Aspose::Pdf` (DOM) Features

- [Embed the font information into PDF file](https://docs.aspose.com/pdf/cpp/formatting-pdf-document/).
- Set zoom factor of PDF file.
- Set a particular page to be displayed when the PDF document is opened.
- [Convert PDF documents](https://docs.aspose.com/pdf/cpp/convert-pdf-files/) to other [supported file formats](https://docs.aspose.com/pdf/cpp/supported-file-formats/).
- Work with all the [attachments of the PDF](https://docs.aspose.com/pdf/cpp/working-with-attachments/) file.
- [Add images to PDF](https://docs.aspose.com/pdf/cpp/working-with-images/) document.
- [Change password of a PDF](https://docs.aspose.com/pdf/cpp/change-passwords-and-decrypt-pdf-document/).
- [Search a particular phrase](https://docs.aspose.com/pdf/cpp/search-and-get-text-from-pages-of-a-pdf-document/) and change its style in PDF file.

## `Aspose::Pdf::Facades` Features

- Add, update, delete, import, export and extract annotations of a PDF document.
- [Add bookmarks and child bookmarks to PDF](https://docs.aspose.com/pdf/cpp/add-and-delete-bookmarks/) files.
- [Configure various access privileges for the PDF](https://docs.aspose.com/pdf/cpp/encrypt-decrypt-and-set-privileges-on-pdf-documents/).
- Extract text from all pages of a PDF file.

## Read & Write PDF

**Fixed Layout:** PDF, PDF/A

## Save PDF Documents As

**Microsoft Word:** DOC, DOCX\
**Images:** JPEG, PNG, BMP, SVG\
**Other:** TeX.

## Get Started with Aspose.PDF for C++

Are you ready to give Aspose.PDF for C++ a try? Simply execute `Install-Package Aspose.PDF.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.PDF for C++ and want to upgrade the version, please execute `Update-Package Aspose.PDF.Cpp` to get the latest version.

## Extract Text from a PDF Document

```c++
auto extractor = MakeObject<Facades::PdfExtractor>();
extractor->BindPdf(u"template.pdf");
extractor->ExtractText();

auto memStream = MakeObject<IO::MemoryStream>();
extractor->GetText(memStream);
auto unicode = System::Text::Encoding::get_Unicode();

String allText = unicode->GetString(memStream->ToArray());
Console::WriteLine(allText);
```

## Convert PDF to DOC Format

One of the most popular feature of Aspose.PDF for C++ is to convert PDF documents to other formats without needing to understand the underlying structure of the resultant format. Give the following snippet a try with your own sample.

```c++
auto doc = MakeObject<Document>(u"template.pdf");
doc->Save(u"output.doc", MakeObject<DocSaveOptions>());
```

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/pdf/cpp) | [Docs](https://docs.aspose.com/pdf/cpp/) | [Demos](https://products.aspose.app/pdf/family) | [API Reference](https://apireference.aspose.com/pdf/cpp) | [Examples](https://github.com/aspose-pdf/Aspose.Pdf-for-C) | [Blog](https://blog.aspose.com/category/pdf/) | [Search](https://search.aspose.com/) | [Free Support](https://forum.aspose.com/c/pdf) |  [Temporary License](https://purchase.aspose.com/temporary-license)
