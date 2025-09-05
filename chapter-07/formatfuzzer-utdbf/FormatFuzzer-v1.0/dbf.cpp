#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <unordered_map>
#include "bt.h"


class char_class {
	int small;
	std::vector<char> known_values;
	char value;
public:
	int64 _startof = 0;
	std::size_t _sizeof = sizeof(char);
	char operator () () { return value; }
	char_class(int small, std::vector<char> known_values = {}) : small(small), known_values(known_values) {}

	char generate() {
		_startof = FTell();
		if (known_values.empty()) {
			value = file_acc.file_integer(sizeof(char), 0, small);
		} else {
			value = file_acc.file_integer(sizeof(char), 0, known_values);
		}
		return value;
	}

	char generate(std::vector<char> possible_values) {
		_startof = FTell();
		value = file_acc.file_integer(sizeof(char), 0, possible_values);
		return value;
	}
};



class DATE_OF_LAST_UPDATE {
	std::vector<DATE_OF_LAST_UPDATE*>& instances;

	char yy_var;
	char mm_var;
	char dd_var;

public:
	bool yy_exists = false;
	bool mm_exists = false;
	bool dd_exists = false;

	char yy() {
		assert_cond(yy_exists, "struct field yy does not exist");
		return yy_var;
	}
	char mm() {
		assert_cond(mm_exists, "struct field mm does not exist");
		return mm_var;
	}
	char dd() {
		assert_cond(dd_exists, "struct field dd does not exist");
		return dd_var;
	}

	unsigned char generated = 0;
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	DATE_OF_LAST_UPDATE& operator () () { return *instances.back(); }
	DATE_OF_LAST_UPDATE* operator [] (int index) {
		assert_cond((unsigned)index < instances.size(), "instance index out of bounds");
		return instances[index];
	}
	DATE_OF_LAST_UPDATE(std::vector<DATE_OF_LAST_UPDATE*>& instances) : instances(instances) { instances.push_back(this); }
	~DATE_OF_LAST_UPDATE() {
		if (generated == 2)
			return;
		while (instances.size()) {
			DATE_OF_LAST_UPDATE* instance = instances.back();
			instances.pop_back();
			if (instance->generated == 2)
				delete instance;
		}
	}
	DATE_OF_LAST_UPDATE* generate();
};



class int_class {
	int small;
	std::vector<int> known_values;
	int value;
public:
	int64 _startof = 0;
	std::size_t _sizeof = sizeof(int);
	int operator () () { return value; }
	int_class(int small, std::vector<int> known_values = {}) : small(small), known_values(known_values) {}

	int generate() {
		_startof = FTell();
		if (known_values.empty()) {
			value = file_acc.file_integer(sizeof(int), 0, small);
		} else {
			value = file_acc.file_integer(sizeof(int), 0, known_values);
		}
		return value;
	}

	int generate(std::vector<int> possible_values) {
		_startof = FTell();
		value = file_acc.file_integer(sizeof(int), 0, possible_values);
		return value;
	}
};



class short_class {
	int small;
	std::vector<short> known_values;
	short value;
public:
	int64 _startof = 0;
	std::size_t _sizeof = sizeof(short);
	short operator () () { return value; }
	short_class(int small, std::vector<short> known_values = {}) : small(small), known_values(known_values) {}

	short generate() {
		_startof = FTell();
		if (known_values.empty()) {
			value = file_acc.file_integer(sizeof(short), 0, small);
		} else {
			value = file_acc.file_integer(sizeof(short), 0, known_values);
		}
		return value;
	}

	short generate(std::vector<short> possible_values) {
		_startof = FTell();
		value = file_acc.file_integer(sizeof(short), 0, possible_values);
		return value;
	}
};



class char_array_class {
	char_class& element;
	std::vector<std::string> known_values;
	std::unordered_map<int, std::vector<char>> element_known_values;
	std::string value;
public:
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	std::string operator () () { return value; }
	char operator [] (int index) {
		assert_cond((unsigned)index < value.size(), "array index out of bounds");
		return value[index];
	}
	char_array_class(char_class& element, std::unordered_map<int, std::vector<char>> element_known_values = {})
		: element(element), element_known_values(element_known_values) {}
	char_array_class(char_class& element, std::vector<std::string> known_values)
		: element(element), known_values(known_values) {}

	std::string generate(unsigned size, std::vector<std::string> possible_values = {}) {
		check_array_length(size);
		_startof = FTell();
		value = "";
		if (possible_values.size()) {
			value = file_acc.file_string(possible_values);
			assert(value.length() == size);
			_sizeof = size;
			return value;
		}
		if (known_values.size()) {
			value = file_acc.file_string(known_values);
			assert(value.length() == size);
			_sizeof = size;
			return value;
		}
		if (!element_known_values.size()) {
			if (size == 0)
				 return "";
			value = file_acc.file_string(size);
			_sizeof = size;
			return value;
		}
		for (unsigned i = 0; i < size; ++i) {
			auto known = element_known_values.find(i);
			if (known == element_known_values.end()) {
				value.push_back(element.generate());
				_sizeof += element._sizeof;
			} else {
				value.push_back(file_acc.file_integer(sizeof(char), 0, known->second));
				_sizeof += sizeof(char);
			}
		}
		return value;
	}
};



class int_array_class {
	int_class& element;
	std::unordered_map<int, std::vector<int>> element_known_values;
	std::vector<int> value;
public:
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	std::vector<int> operator () () { return value; }
	int operator [] (int index) {
		assert_cond((unsigned)index < value.size(), "array index out of bounds");
		return value[index];
	}
	int_array_class(int_class& element, std::unordered_map<int, std::vector<int>> element_known_values = {})
		: element(element), element_known_values(element_known_values) {}

	std::vector<int> generate(unsigned size) {
		check_array_length(size);
		_startof = FTell();
		value = {};
		for (unsigned i = 0; i < size; ++i) {
			auto known = element_known_values.find(i);
			if (known == element_known_values.end()) {
				value.push_back(element.generate());
				_sizeof += element._sizeof;
			} else {
				value.push_back(file_acc.file_integer(sizeof(int), 0, known->second));
				_sizeof += sizeof(int);
			}
		}
		return value;
	}
};



class HEADER {
	std::vector<HEADER*>& instances;

	char version_var;
	DATE_OF_LAST_UPDATE* DateOfLastUpdate_var;
	int numberOfRecords_var;
	short lengthOfHeaderStructure_var;
	short lengthOfEachRecord_var;
	std::string reserved_var;
	char incompleteTrasaction_var;
	char encryptionFlag_var;
	int freeRecordThread_var;
	std::vector<int> reserved1_var;
	char mdxFlag_var;
	char languageDriver_var;
	short reserved2_var;

public:
	bool version_exists = false;
	bool DateOfLastUpdate_exists = false;
	bool numberOfRecords_exists = false;
	bool lengthOfHeaderStructure_exists = false;
	bool lengthOfEachRecord_exists = false;
	bool reserved_exists = false;
	bool incompleteTrasaction_exists = false;
	bool encryptionFlag_exists = false;
	bool freeRecordThread_exists = false;
	bool reserved1_exists = false;
	bool mdxFlag_exists = false;
	bool languageDriver_exists = false;
	bool reserved2_exists = false;

	char version() {
		assert_cond(version_exists, "struct field version does not exist");
		return version_var;
	}
	DATE_OF_LAST_UPDATE& DateOfLastUpdate() {
		assert_cond(DateOfLastUpdate_exists, "struct field DateOfLastUpdate does not exist");
		return *DateOfLastUpdate_var;
	}
	int numberOfRecords() {
		assert_cond(numberOfRecords_exists, "struct field numberOfRecords does not exist");
		return numberOfRecords_var;
	}
	short lengthOfHeaderStructure() {
		assert_cond(lengthOfHeaderStructure_exists, "struct field lengthOfHeaderStructure does not exist");
		return lengthOfHeaderStructure_var;
	}
	short lengthOfEachRecord() {
		assert_cond(lengthOfEachRecord_exists, "struct field lengthOfEachRecord does not exist");
		return lengthOfEachRecord_var;
	}
	std::string reserved() {
		assert_cond(reserved_exists, "struct field reserved does not exist");
		return reserved_var;
	}
	char incompleteTrasaction() {
		assert_cond(incompleteTrasaction_exists, "struct field incompleteTrasaction does not exist");
		return incompleteTrasaction_var;
	}
	char encryptionFlag() {
		assert_cond(encryptionFlag_exists, "struct field encryptionFlag does not exist");
		return encryptionFlag_var;
	}
	int freeRecordThread() {
		assert_cond(freeRecordThread_exists, "struct field freeRecordThread does not exist");
		return freeRecordThread_var;
	}
	std::vector<int> reserved1() {
		assert_cond(reserved1_exists, "struct field reserved1 does not exist");
		return reserved1_var;
	}
	char mdxFlag() {
		assert_cond(mdxFlag_exists, "struct field mdxFlag does not exist");
		return mdxFlag_var;
	}
	char languageDriver() {
		assert_cond(languageDriver_exists, "struct field languageDriver does not exist");
		return languageDriver_var;
	}
	short reserved2() {
		assert_cond(reserved2_exists, "struct field reserved2 does not exist");
		return reserved2_var;
	}

	unsigned char generated = 0;
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	HEADER& operator () () { return *instances.back(); }
	HEADER* operator [] (int index) {
		assert_cond((unsigned)index < instances.size(), "instance index out of bounds");
		return instances[index];
	}
	HEADER(std::vector<HEADER*>& instances) : instances(instances) { instances.push_back(this); }
	~HEADER() {
		if (generated == 2)
			return;
		while (instances.size()) {
			HEADER* instance = instances.back();
			instances.pop_back();
			if (instance->generated == 2)
				delete instance;
		}
	}
	HEADER* generate();
};



class FIELD {
	std::vector<FIELD*>& instances;

	std::string fieldName_var;
	char fieldType_var;
	int fieldDataAddress_var;
	char fieldLength_var;
	char decimalCount_var;
	short reserved_var;
	char workAreaId_var;
	short reserved1_var;
	char flags_var;
	std::string reserved2_var;
	char indexFieldFlag_var;

public:
	bool fieldName_exists = false;
	bool fieldType_exists = false;
	bool fieldDataAddress_exists = false;
	bool fieldLength_exists = false;
	bool decimalCount_exists = false;
	bool reserved_exists = false;
	bool workAreaId_exists = false;
	bool reserved1_exists = false;
	bool flags_exists = false;
	bool reserved2_exists = false;
	bool indexFieldFlag_exists = false;

	std::string fieldName() {
		assert_cond(fieldName_exists, "struct field fieldName does not exist");
		return fieldName_var;
	}
	char fieldType() {
		assert_cond(fieldType_exists, "struct field fieldType does not exist");
		return fieldType_var;
	}
	int fieldDataAddress() {
		assert_cond(fieldDataAddress_exists, "struct field fieldDataAddress does not exist");
		return fieldDataAddress_var;
	}
	char fieldLength() {
		assert_cond(fieldLength_exists, "struct field fieldLength does not exist");
		return fieldLength_var;
	}
	char decimalCount() {
		assert_cond(decimalCount_exists, "struct field decimalCount does not exist");
		return decimalCount_var;
	}
	short reserved() {
		assert_cond(reserved_exists, "struct field reserved does not exist");
		return reserved_var;
	}
	char workAreaId() {
		assert_cond(workAreaId_exists, "struct field workAreaId does not exist");
		return workAreaId_var;
	}
	short reserved1() {
		assert_cond(reserved1_exists, "struct field reserved1 does not exist");
		return reserved1_var;
	}
	char flags() {
		assert_cond(flags_exists, "struct field flags does not exist");
		return flags_var;
	}
	std::string reserved2() {
		assert_cond(reserved2_exists, "struct field reserved2 does not exist");
		return reserved2_var;
	}
	char indexFieldFlag() {
		assert_cond(indexFieldFlag_exists, "struct field indexFieldFlag does not exist");
		return indexFieldFlag_var;
	}

	unsigned char generated = 0;
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	FIELD& operator () () { return *instances.back(); }
	FIELD* operator [] (int index) {
		assert_cond((unsigned)index < instances.size(), "instance index out of bounds");
		return instances[index];
	}
	FIELD(std::vector<FIELD*>& instances) : instances(instances) { instances.push_back(this); }
	~FIELD() {
		if (generated == 2)
			return;
		while (instances.size()) {
			FIELD* instance = instances.back();
			instances.pop_back();
			if (instance->generated == 2)
				delete instance;
		}
	}
	FIELD* generate();
};



class FIELD_array_class {
	FIELD& element;
	std::vector<FIELD*> value;
public:
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	std::vector<FIELD*> operator () () { return value; }
	FIELD operator [] (int index) {
		assert_cond((unsigned)index < value.size(), "array index out of bounds");
		return *value[index];
	}
	FIELD_array_class(FIELD& element) : element(element) {}

	std::vector<FIELD*> generate(unsigned size) {
		check_array_length(size);
		_startof = FTell();
		value = {};
		for (unsigned i = 0; i < size; ++i) {
			value.push_back(element.generate());
			_sizeof += element._sizeof;
		}
		return value;
	}
};



class RECORD {
	std::vector<RECORD*>& instances;

	char deletedFlag_var;
	std::string fields_var;

public:
	bool deletedFlag_exists = false;
	bool fields_exists = false;

	char deletedFlag() {
		assert_cond(deletedFlag_exists, "struct field deletedFlag does not exist");
		return deletedFlag_var;
	}
	std::string fields() {
		assert_cond(fields_exists, "struct field fields does not exist");
		return fields_var;
	}

	unsigned char generated = 0;
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	RECORD& operator () () { return *instances.back(); }
	RECORD* operator [] (int index) {
		assert_cond((unsigned)index < instances.size(), "instance index out of bounds");
		return instances[index];
	}
	RECORD(std::vector<RECORD*>& instances) : instances(instances) { instances.push_back(this); }
	~RECORD() {
		if (generated == 2)
			return;
		while (instances.size()) {
			RECORD* instance = instances.back();
			instances.pop_back();
			if (instance->generated == 2)
				delete instance;
		}
	}
	RECORD* generate();
};



class RECORD_array_class {
	RECORD& element;
	std::vector<RECORD*> value;
public:
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	std::vector<RECORD*> operator () () { return value; }
	RECORD operator [] (int index) {
		assert_cond((unsigned)index < value.size(), "array index out of bounds");
		return *value[index];
	}
	RECORD_array_class(RECORD& element) : element(element) {}

	std::vector<RECORD*> generate(unsigned size) {
		check_array_length(size);
		_startof = FTell();
		value = {};
		for (unsigned i = 0; i < size; ++i) {
			value.push_back(element.generate());
			_sizeof += element._sizeof;
		}
		return value;
	}
};



class DBF {
	std::vector<DBF*>& instances;

	HEADER* header_var;
	std::vector<FIELD*> field_var;
	char Terminator_var;
	std::vector<RECORD*> record_var;
	char EndOfFile_var;

public:
	bool header_exists = false;
	bool field_exists = false;
	bool Terminator_exists = false;
	bool record_exists = false;
	bool EndOfFile_exists = false;

	HEADER& header() {
		assert_cond(header_exists, "struct field header does not exist");
		return *header_var;
	}
	std::vector<FIELD*> field() {
		assert_cond(field_exists, "struct field field does not exist");
		return field_var;
	}
	char Terminator() {
		assert_cond(Terminator_exists, "struct field Terminator does not exist");
		return Terminator_var;
	}
	std::vector<RECORD*> record() {
		assert_cond(record_exists, "struct field record does not exist");
		return record_var;
	}
	char EndOfFile() {
		assert_cond(EndOfFile_exists, "struct field EndOfFile does not exist");
		return EndOfFile_var;
	}

	unsigned char generated = 0;
	int64 _startof = 0;
	std::size_t _sizeof = 0;
	DBF& operator () () { return *instances.back(); }
	DBF* operator [] (int index) {
		assert_cond((unsigned)index < instances.size(), "instance index out of bounds");
		return instances[index];
	}
	DBF(std::vector<DBF*>& instances) : instances(instances) { instances.push_back(this); }
	~DBF() {
		if (generated == 2)
			return;
		while (instances.size()) {
			DBF* instance = instances.back();
			instances.pop_back();
			if (instance->generated == 2)
				delete instance;
		}
	}
	DBF* generate();
};

std::vector<byte> ReadByteInitValues;
std::vector<ubyte> ReadUByteInitValues;
std::vector<short> ReadShortInitValues;
std::vector<ushort> ReadUShortInitValues;
std::vector<int> ReadIntInitValues;
std::vector<uint> ReadUIntInitValues;
std::vector<int64> ReadQuadInitValues;
std::vector<uint64> ReadUQuadInitValues;
std::vector<int64> ReadInt64InitValues;
std::vector<uint64> ReadUInt64InitValues;
std::vector<hfloat> ReadHFloatInitValues;
std::vector<float> ReadFloatInitValues;
std::vector<double> ReadDoubleInitValues;
std::vector<std::string> ReadBytesInitValues;


std::vector<DATE_OF_LAST_UPDATE*> DATE_OF_LAST_UPDATE_DateOfLastUpdate_instances;
std::vector<HEADER*> HEADER_header_instances;
std::vector<FIELD*> FIELD_field_element_instances;
std::vector<RECORD*> RECORD_record_element_instances;
std::vector<DBF*> DBF_dbf_instances;


std::unordered_map<std::string, std::string> variable_types = { { "version", "char_class" }, { "yy", "char_class" }, { "mm", "char_class" }, { "dd", "char_class" }, { "DateOfLastUpdate", "DATE_OF_LAST_UPDATE" }, { "numberOfRecords", "int_class" }, { "lengthOfHeaderStructure", "short_class" }, { "lengthOfEachRecord", "short_class" }, { "reserved", "char_array_class" }, { "incompleteTrasaction", "char_class" }, { "encryptionFlag", "char_class" }, { "freeRecordThread", "int_class" }, { "reserved1", "int_array_class" }, { "mdxFlag", "char_class" }, { "languageDriver", "char_class" }, { "reserved2", "short_class" }, { "header", "HEADER" }, { "fieldName", "char_array_class" }, { "fieldType", "char_class" }, { "fieldDataAddress", "int_class" }, { "fieldLength", "char_class" }, { "decimalCount", "char_class" }, { "reserved_", "short_class" }, { "workAreaId", "char_class" }, { "reserved1_", "short_class" }, { "flags", "char_class" }, { "reserved2_", "char_array_class" }, { "indexFieldFlag", "char_class" }, { "field", "FIELD_array_class" }, { "Terminator", "char_class" }, { "deletedFlag", "char_class" }, { "fields", "char_array_class" }, { "record", "RECORD_array_class" }, { "EndOfFile", "char_class" }, { "dbf", "DBF" } };

std::vector<std::vector<int>> integer_ranges = { { 1, 16 } };

class globals_class {
public:
	char_class version;
	char_class yy;
	char_class mm;
	char_class dd;
	DATE_OF_LAST_UPDATE DateOfLastUpdate;
	int_class numberOfRecords;
	short_class lengthOfHeaderStructure;
	short_class lengthOfEachRecord;
	char_class reserved_element;
	char_array_class reserved;
	char_class incompleteTrasaction;
	char_class encryptionFlag;
	int_class freeRecordThread;
	int_class reserved1_element;
	int_array_class reserved1;
	char_class mdxFlag;
	char_class languageDriver;
	short_class reserved2;
	HEADER header;
	char_class fieldName_element;
	char_array_class fieldName;
	char_class fieldType;
	int_class fieldDataAddress;
	char_class fieldLength;
	char_class decimalCount;
	short_class reserved_;
	char_class workAreaId;
	short_class reserved1_;
	char_class flags;
	char_class reserved2__element;
	char_array_class reserved2_;
	char_class indexFieldFlag;
	FIELD field_element;
	FIELD_array_class field;
	char_class Terminator;
	char_class deletedFlag;
	char_class fields_element;
	char_array_class fields;
	RECORD record_element;
	RECORD_array_class record;
	char_class EndOfFile;
	DBF dbf;


	globals_class() :
		version(1),
		yy(1),
		mm(1),
		dd(1),
		DateOfLastUpdate(DATE_OF_LAST_UPDATE_DateOfLastUpdate_instances),
		numberOfRecords(1),
		lengthOfHeaderStructure(1),
		lengthOfEachRecord(1),
		reserved_element(false),
		reserved(reserved_element),
		incompleteTrasaction(1),
		encryptionFlag(1),
		freeRecordThread(1),
		reserved1_element(false),
		reserved1(reserved1_element),
		mdxFlag(1),
		languageDriver(1),
		reserved2(1),
		header(HEADER_header_instances),
		fieldName_element(false),
		fieldName(fieldName_element),
		fieldType(1),
		fieldDataAddress(1),
		fieldLength(1),
		decimalCount(1),
		reserved_(1),
		workAreaId(1),
		reserved1_(1),
		flags(1),
		reserved2__element(false),
		reserved2_(reserved2__element),
		indexFieldFlag(1),
		field_element(FIELD_field_element_instances),
		field(field_element),
		Terminator(1),
		deletedFlag(1),
		fields_element(false),
		fields(fields_element),
		record_element(RECORD_record_element_instances),
		record(record_element),
		EndOfFile(1),
		dbf(DBF_dbf_instances)
	{}
};

globals_class* g;


DATE_OF_LAST_UPDATE* DATE_OF_LAST_UPDATE::generate() {
	if (generated == 1) {
		DATE_OF_LAST_UPDATE* new_instance = new DATE_OF_LAST_UPDATE(instances);
		new_instance->generated = 2;
		return new_instance->generate();
	}
	if (!generated)
		generated = 1;
	_startof = FTell();

	GENERATE_VAR(yy, ::g->yy.generate());
	GENERATE_VAR(mm, ::g->mm.generate());
	GENERATE_VAR(dd, ::g->dd.generate());

	_sizeof = FTell() - _startof;
	return this;
}


HEADER* HEADER::generate() {
	if (generated == 1) {
		HEADER* new_instance = new HEADER(instances);
		new_instance->generated = 2;
		return new_instance->generate();
	}
	if (!generated)
		generated = 1;
	_startof = FTell();

	GENERATE_VAR(version, ::g->version.generate());
	GENERATE_VAR(DateOfLastUpdate, ::g->DateOfLastUpdate.generate());
	GENERATE_VAR(numberOfRecords, ::g->numberOfRecords.generate());
	GENERATE_VAR(lengthOfHeaderStructure, ::g->lengthOfHeaderStructure.generate());
	GENERATE_VAR(lengthOfEachRecord, ::g->lengthOfEachRecord.generate());
	GENERATE_VAR(reserved, ::g->reserved.generate(2));
	GENERATE_VAR(incompleteTrasaction, ::g->incompleteTrasaction.generate());
	GENERATE_VAR(encryptionFlag, ::g->encryptionFlag.generate());
	GENERATE_VAR(freeRecordThread, ::g->freeRecordThread.generate());
	GENERATE_VAR(reserved1, ::g->reserved1.generate(2));
	GENERATE_VAR(mdxFlag, ::g->mdxFlag.generate());
	GENERATE_VAR(languageDriver, ::g->languageDriver.generate());
	GENERATE_VAR(reserved2, ::g->reserved2.generate());

	_sizeof = FTell() - _startof;
	return this;
}


FIELD* FIELD::generate() {
	if (generated == 1) {
		FIELD* new_instance = new FIELD(instances);
		new_instance->generated = 2;
		return new_instance->generate();
	}
	if (!generated)
		generated = 1;
	_startof = FTell();

	GENERATE_VAR(fieldName, ::g->fieldName.generate(11));
	GENERATE_VAR(fieldType, ::g->fieldType.generate({ 'C', 'D', 'F', 'L', 'M', 'N' }));
	GENERATE_VAR(fieldType, ::g->fieldType.generate());
	GENERATE_VAR(fieldDataAddress, ::g->fieldDataAddress.generate());
	GENERATE_VAR(fieldLength, ::g->fieldLength.generate());
	GENERATE_VAR(decimalCount, ::g->decimalCount.generate());
	GENERATE_VAR(reserved, ::g->reserved_.generate());
	GENERATE_VAR(workAreaId, ::g->workAreaId.generate());
	GENERATE_VAR(reserved1, ::g->reserved1_.generate());
	GENERATE_VAR(flags, ::g->flags.generate());
	GENERATE_VAR(reserved2, ::g->reserved2_.generate(7));
	GENERATE_VAR(indexFieldFlag, ::g->indexFieldFlag.generate());

	_sizeof = FTell() - _startof;
	return this;
}


RECORD* RECORD::generate() {
	if (generated == 1) {
		RECORD* new_instance = new RECORD(instances);
		new_instance->generated = 2;
		return new_instance->generate();
	}
	if (!generated)
		generated = 1;
	_startof = FTell();

	GENERATE_VAR(deletedFlag, ::g->deletedFlag.generate());
	GENERATE_VAR(fields, ::g->fields.generate((::g->header().lengthOfEachRecord() - 1)));

	_sizeof = FTell() - _startof;
	return this;
}


DBF* DBF::generate() {
	if (generated == 1) {
		DBF* new_instance = new DBF(instances);
		new_instance->generated = 2;
		return new_instance->generate();
	}
	if (!generated)
		generated = 1;
	_startof = FTell();

	GENERATE_VAR(header, ::g->header.generate());
	GENERATE_VAR(field, ::g->field.generate(((header().lengthOfHeaderStructure() - 33) / 32)));
	GENERATE_VAR(Terminator, ::g->Terminator.generate());
	GENERATE_VAR(record, ::g->record.generate(header().numberOfRecords()));
	GENERATE_VAR(EndOfFile, ::g->EndOfFile.generate({ 0x1A }));

	_sizeof = FTell() - _startof;
	return this;
}



void generate_file() {
	::g = new globals_class();

	GENERATE(dbf, ::g->dbf.generate());

	file_acc.finish();
	delete_globals();
}

void delete_globals() { delete ::g; }

