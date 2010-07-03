/* $Id$ */

/*
 * Copyright (c) 2010 SURFnet bv
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*****************************************************************************
 ObjectFileTests.h

 Contains test cases to test the object file implementation
 *****************************************************************************/

#ifndef _SOFTHSM_V2_OBJECTFILETESTS_H
#define _SOFTHSM_V2_OBJECTFILETESTS_H

#include <cppunit/extensions/HelperMacros.h>

class ObjectFileTests : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(ObjectFileTests);
	CPPUNIT_TEST(testBoolAttr);
	CPPUNIT_TEST(testULongAttr);
	CPPUNIT_TEST(testByteStrAttr);
	CPPUNIT_TEST(testMixedAttr);
	CPPUNIT_TEST(testDoubleAttr);
	CPPUNIT_TEST(testRefresh);
	CPPUNIT_TEST(testCorruptFile);
	CPPUNIT_TEST_SUITE_END();

public:
	void testBoolAttr();
	void testULongAttr();
	void testByteStrAttr();
	void testMixedAttr();
	void testDoubleAttr();
	void testRefresh();
	void testCorruptFile();

	void setUp();
	void tearDown();
};

#endif // !_SOFTHSM_V2_OBJECTFILETESTS_H

