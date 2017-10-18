#ifndef _Aspose_Pdf_Facades_AutoFiller_h_
#define _Aspose_Pdf_Facades_AutoFiller_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/io/memory_stream.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Facades/IFacade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to receive data from database or other datasource, fills them into the designed fields of the template pdf and at last generates new pdf file or stream.
/// It has two template file input modes:input as a stream or a pdf file.
/// It has four types of output modes:one merged stream, one merged file, many small streams, many small files.
/// It can recieve literal data contained in a System.Data.DataTable.
/// </summary>
/// <example>
/// <code>
///	[C#]
/// //Note: mail.pdf is a template pdf which has seven text fields. NorthWind.mdb is the microsoft access db.
/// ////Common part: Get the data from the database NorthWind.mdb fill it into the DataTable.
///	OleDbCommand mQueryCommand;
///	OleDbDataAdapter mDbDataAdapter;
///	OleDbConnection mDbConnection;
///	//Construct the data table.
///	DataTable mDataTable = new DataTable("MailMerge");
///	DataColumnCollection columns = mDataTable.Columns;
///	columns.Add("CompanyName",typeof(string));
///	columns.Add("ContactName",typeof(string));
///	columns.Add("Address",typeof(string));
///	columns.Add("PostalCode",typeof(string));
///	columns.Add("City",typeof(string));
///	columns.Add("Country",typeof(string));
///	columns.Add("Heading",typeof(string));
///	//Connect to the database source and query the data.
///	mDbConnection = new OleDbConnection();
///	mDbConnection.ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + 
///	DbPath + "NorthWind.mdb";
///	mQueryCommand = new OleDbCommand();
///	mQueryCommand.Connection = mDbConnection;
///	mDbConnection.Open();
///	mQueryCommand.CommandText = "select CompanyName, ContactName, Address, PostalCode, City, Country from Customers;";
///	mDbDataAdapter = new OleDbDataAdapter(mQueryCommand);
///	mDbDataAdapter.Fill(mDataTable);
///	for (int i = 0; i&lt;mDataTable.Rows.Count;i++)
///	{
///		mDataTable.Rows[i][mDataTable.Columns.Count - 1] = "Dear " + mDataTable.Rows[i][0].ToString() + ",";
///		System.Console.WriteLine("postalCode:" + mDataTable.Rows[i][3].ToString());
///		System.Console.WriteLine("Heading:" + mDataTable.Rows[i][mDataTable.Columns.Count - 1].ToString());
///	}
///	mDbDataAdapter.Dispose();
///	mDbConnection.Close();
///	////End of Common part.
///	////case one:
///	////Input template pdf is a pdf file and output is a big merged stream.		
///	AutoFiller autoFiller = new AutoFiller();
///	autoFiller.InputFileName = "mail.pdf";
///	autoFiller.OutputStream = Response.OutputStream;
///	autoFiller.ImportDataTable(mDataTable);
///	autoFiller.Save();
///	////case two:
///	////Input template pdf is a pdf file and output is a lot of small files.
///	AutoFiller autoFiller = new AutoFiller();
///	autoFiller.InputFileName = "mail.pdf";
///	autoFiller.GeneratingPath = ".\\";
///	autoFiller.BasicFileName = "outputFile";
///	autoFiller.ImportDataTable(mDataTable);
///	autoFiller.Save();
///	[Visual Basic]
///	'Note: mail.pdf is a template pdf which has seven text fields. NorthWind.mdb is the microsoft access db.
///	'Common part: Get the data from the database NorthWind.mdb fill it into the DataTable. 
///	mQueryCommand As OleDbCommand = Nothing
///	mDbDataAdapter As OleDbDataAdapter = Nothing
///	mDbConnection As OleDbConnection = Nothing
///	mDataTable As DataTable = Nothing
///	mPath As String = Nothing
///	mTemplatePdf As String = Nothing
///	'Construct the data table.
///	mDataTable = New DataTable("MailMerge")
///	Dim columns As DataColumnCollection = mDataTable.Columns
///	'Create columns for the datatable. 
///	'Every column's  name should be the same as one field's name of the templatePdf.
///	columns.Add("CompanyName", Type.GetType("System.String"))
///	columns.Add("ContactName", Type.GetType("System.String"))
///	columns.Add("Address", Type.GetType("System.String"))
///	columns.Add("PostalCode", Type.GetType("System.String"))
///	columns.Add("City", Type.GetType("System.String"))
///	columns.Add("Country", Type.GetType("System.String"))
///	columns.Add("Heading", Type.GetType("System.String"))
///	'Connect to the database source and query the data.
///	mDbConnection = New OleDbConnection
///	mDbConnection.ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + DbPath + "NorthWind.mdb"
///	mQueryCommand = New OleDbCommand
///	mQueryCommand.Connection = mDbConnection
///	mDbConnection.Open()
///	'Query the data and insert into the datatable.
///	mQueryCommand.CommandText = "select CompanyName, ContactName, Address, PostalCode, City, Country from Customers;"
///	mDbDataAdapter = New OleDbDataAdapter(mQueryCommand)
///	mDbDataAdapter.Fill(mDataTable)
///	'Construct the last column  of the Datatable.
///	Dim i As Integer
///	For i = 0 To mDataTable.Rows.Count - 1 Step i + 1
///		mDataTable.Rows(i)(mDataTable.Columns.Count - 1) = "Dear " + mDataTable.Rows(i)(0).ToString() + ","
///		System.Console.WriteLine("postalCode:" + mDataTable.Rows(i)(3).ToString())
///		System.Console.WriteLine("Heading:" + mDataTable.Rows(i)(mDataTable.Columns.Count - 1).ToString())
///	Next
///	mDbDataAdapter.Dispose()
///	mDbConnection.Close()
///	'End of Common part.
///	'case one:
///	'Input template pdf is a pdf file and output is a big merged stream.
///	Dim autoFiller As AutoFiller = New AutoFiller
///	autoFiller.InputFileName = "mail.pdf"
///	autoFiller.OutputStream = Response.OutputStream
///	autoFiller.ImportDataTable(mDataTable)
///	autoFiller.Save()
///	'case two:
///	'Input template pdf is a pdf file and output is a lot of small files.
///	Dim autoFiller As AutoFiller = New AutoFiller
///	autoFiller.InputFileName = "mail.pdf"
///	autoFiller.GeneratingPath = ".\";
///	autoFiller.BasicFileName = "outputFile"
///	autoFiller.ImportDataTable(mDataTable)
///	autoFiller.Save()
/// </code>
/// </example>
class ASPOSE_PDF_SHARED_API AutoFiller FINAL : public Aspose::Pdf::Facades::ISaveableFacade
{
    typedef AutoFiller ThisType;
    typedef Aspose::Pdf::Facades::ISaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    void set_UnFlattenFields(System::ArrayPtr<System::String> value);
    System::SharedPtr<System::IO::Stream> get_OutputStream();
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    System::ArrayPtr<System::SharedPtr<System::IO::Stream>> get_OutputStreams();
    void set_OutputStreams(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> value);
    System::SharedPtr<System::IO::Stream> get_InputStream();
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    System::String get_InputFileName();
    void set_InputFileName(System::String value);
    System::String get_OutputFileName();
    void set_OutputFileName(System::String value);
    System::String get_GeneratingPath();
    void set_GeneratingPath(System::String value);
    System::String get_BasicFileName();
    void set_BasicFileName(System::String value);
    
    void Save();
    void Save(System::String destFile);
    void Save(System::SharedPtr<System::IO::Stream> destStream);
    void BindPdf(System::String srcFile);
    void BindPdf(System::SharedPtr<System::IO::Stream> srcStream);
    void BindPdf(System::SharedPtr<Document> srcDoc);
    void Close();
    void Dispose();
    
    virtual ~AutoFiller();
    
    AutoFiller();
    
protected:

    bool UseConcatenationAnyway;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AutoFiller"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool genMultiPdfs;
    System::ArrayPtr<System::SharedPtr<Form>> forms;
    System::SharedPtr<System::IO::Stream> outputStream;
    System::ArrayPtr<System::SharedPtr<System::IO::Stream>> outputStreams;
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> midtermStreams;
    System::SharedPtr<System::IO::Stream> inputStream;
    System::String inputFileName;
    System::String outputFileName;
    System::String generatingPath;
    System::String basicFileName;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> unFlattenFields;
    bool mIsDisposed;
    
    bool IsFlattenField(System::String fieldName);
    void CopyStream(System::SharedPtr<System::IO::Stream> src, System::SharedPtr<System::IO::Stream> dest);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_AutoFiller_h_

