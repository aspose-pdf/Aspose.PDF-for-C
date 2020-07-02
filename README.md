## Aspose.PDF for C++

[Aspose.PDF for C++](https://https://products.aspose.com/pdf/cpp) allows developers to create [PDF](https://wiki.fileformat.com/view/pdf/) documents, whether simple or complex, on the fly programmatically.

<p align="center">
  <a title="Download ZIP" href="https://github.com/aspose-pdf/Aspose.Pdf-for-c/archive/master.zip">
    <img src="http://i.imgur.com/hwNhrGZ.png" />
  </a>
</p>

This repository contains [Examples](Examples) for [Aspose.PDF for C++](https://https://products.aspose.com/pdf/cpp) to help you learn and write your own applications.

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn and explore the API features

# C++ API to Process & Manipulate PDF Files

[Aspose.PDF for C++](https://products.aspose.com/pdf/cpp) is a native C++ library that allows to create, process, manipulate and convert PDF documents without installing Adobe Acrobat®.

## `Aspose::Pdf` (DOM) Processing Features

- [Set how PDF pages display](https://docs.aspose.com/display/pdfcpp/Formatting+PDF+Document#FormattingPDFDocument-Get/SetDocumentWindowandPageDisplayProperties) in the application.
- [Embed the font information into PDF file](https://docs.aspose.com/display/pdfcpp/Formatting+PDF+Document#FormattingPDFDocument-EmbeddingFontswhilecreatingPDF).
- [Set zoom factor of PDF file](https://docs.aspose.com/display/pdfcpp/Formatting+PDF+Document#FormattingPDFDocument-SetZoomFactorofPDFFile).
- [Set a particular page to be displayed](https://docs.aspose.com/display/pdfcpp/Formatting+PDF+Document#FormattingPDFDocument-SetParticularPagetoDisplaywhenDocumentisopened) when the PDF document is opened.
- [Convert PDF documents](https://docs.aspose.com/display/pdfcpp/Convert+PDF+Files) to other [supported file formats](https://docs.aspose.com/display/pdfcpp/Supported+File+Formats).
- Work with all the [attachments of the PDF](https://docs.aspose.com/display/pdfcpp/Working+with+Attachments) file.
- [Add images to PDF](https://docs.aspose.com/display/pdfcpp/Working+with+Images) document.
- [Change password of a PDF](https://docs.aspose.com/display/pdfcpp/Change+Passwords+and+Decrypt+PDF+Document#ChangePasswordsandDecryptPDFDocument-ChangePasswordofaPDFdocument) file.
- [Decrypt a PDF document](https://docs.aspose.com/display/pdfcpp/Change+Passwords+and+Decrypt+PDF+Document#ChangePasswordsandDecryptPDFDocument-DecryptaPDFDocument).
- [Search a particular phrase](https://docs.aspose.com/display/pdfcpp/Search+and+Get+Text+from+Pages+of+a+PDF+Document) and change its style in PDF file.

## `Aspose::Pdf::Facades` Processing Features

- Add, update, delete, import, export and extract [annotations of a PDF document](https://docs.aspose.com/pages/viewpage.action?pageId=51479113).
- [Add bookmarks and child bookmarks to PDF](https://docs.aspose.com/display/pdfcpp/Add+and+Delete+Bookmarks) files.
- [Configure various access privileges for the PDF](https://docs.aspose.com/display/pdfcpp/Encrypt%2C+Decrypt+and+set+Privileges+on+PDF+documents) document.
- [Extract text from all pages of a PDF](https://docs.aspose.com/pages/viewpage.action?pageId=51479222) file.

## Read & Write PDF & Other Formats

**Fixed Layout:** PDF, PDF/A

## Save PDF Documents As

**Microsoft Word:** DOC, DOCX\
**Images:** JPEG, PNG, BMP, SVG\
**Other:** TeX.

## Getting Started with Aspose.PDF for C++

Are you ready to give Aspose.PDF for C++ a try? Simply execute `Install-Package Aspose.PDF.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.PDF for C++ and want to upgrade the version, please execute `Update-Package Aspose.PDF.Cpp` to get the latest version.

## Extract Text from a PDF Document with C++

Try the below code snippet to see how Aspose.PDF for C++ performs in your environment or check the [GitHub Repository](https://github.com/aspose-pdf/Aspose.Pdf-for-C) for other common usage scenarios.

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

One of the most popular feature of Aspose.PDF for C++ is to convert PDF documents to other formats without needing to understand the underlying structure of the resultant format. Give the following snippet a try with your own sample:

```c++
auto doc = MakeObject<Document>(u"template.pdf");
doc->Save(u"output.doc", MakeObject<DocSaveOptions>());
```

[Product Page](https://products.aspose.com/pdf/cpp) | [Docs](https://docs.aspose.com/display/pdfcpp/Home) | [Demos](https://products.aspose.app/pdf/family) | [API Reference](https://apireference.aspose.com/pdf/cpp) | [Examples](https://github.com/aspose-pdf/Aspose.Pdf-for-C) | [Blog](https://blog.aspose.com/category/pdf/) | [Free Support](https://forum.aspose.com/c/pdf) |  [Temporary License](https://purchase.aspose.com/temporary-license)
