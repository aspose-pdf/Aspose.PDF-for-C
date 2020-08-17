---
title: Aspose.PDF for CPP 20.5 Release Notes
type: docs
weight: 80
url: /cpp/aspose-pdf-for-cpp-20-5-release-notes/
---

{{% alert color="primary" %}}

This page contains release notes information for Aspose.PDF for C++ 20.5.

{{% /alert %}}

This new version of Aspose.PDF for C++ has codebase of Aspose.PDF for .NET 20.5 and includes improvements such as:

 * System::Xml namespace implementation was improved and extended. This includes implementing previously unsupported types and methods and establishing the basis for document signature support.
 * Javascripts in form's fields are available now
 * Saving pdf document to TeX format has been implemented

## **Improvements and Changes**

|**Key**|**Summary**|**Category**|
| :- | :- | :- |
|PDFCPP-1189|Translate javascript project|Enhancement|
|PDFCPP-1263|Build simply Qt application with the Aspose.PDF.Cpp library|Enhancement|
|PDFCPP-1264|Fix XslCompiledTransform to support XmlReader.|Enhancement|
|PDFCPP-1265|Support of TeX format|Enhancement|
|PDFCPP-1269|Implement Linq Where	|Enhancement|
|PDFCPP-1189|Translate javascript project	|Enhancement|
|PDFCPP-1270|Get passed Javascript tests|Enhancement|
|PDFCPP-1253|Investigation of memory consuming due conversion ApsToDoc|Bug|
|PDFCPP-1254|Investigation of memory consuming due conversion TextFragments|Bug|
|PDFCPP-1271|Fix Asposecpplib - GetType() for boxed enums works incorrectly|Bug|
|PDFCPP-1272|Fix Asposecpplib - IO.File.ReadAllText() does not detect utf8 encoding automatically|Bug|
|PDFCPP-1281|Trying to get a working application without installing additional fonts on the Linux system.|Bug|
|PDFCPP-1283|Fix support embedded resources in CsToCppPorter|Bug|

## **Public API and Backward Incompatible Changes**

### **Other Changes**

 * XslCompiledTransform::Transform(const SharedPtr<XmlReader>& input, const SharedPtr<XmlWriter>& results) was implemented.
 * GetType() was fixed for boxed enums.
 * File::ReadAllText() now detects UTF-8 encoding automatically.
 * A bug was fixed in porter placing output files above the project root if corresponding input files are placed above project root.
 * Relative paths are now generated for embedded resources instead of absolute ones.
 * TypeInfo::get_Assembly(), TypeInfo::IsInstanceOfType() methods were implemented.
 * TypeInfo::get_Assembly() works in conjunction with registering type by ASSEMBLY_TYPE_DECL, ASSEMBLY_TYPE_IMPL macros. For example:
