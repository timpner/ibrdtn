/*
 * TestBundleID.h
 *
 * Copyright (C) 2013 IBR, TU Braunschweig
 *
 * Written-by: Johannes Morgenroth <morgenroth@ibr.cs.tu-bs.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <ibrdtn/data/BundleList.h>

#ifndef TESTBUNDLEID_H_
#define TESTBUNDLEID_H_

class TestBundleID : public CPPUNIT_NS :: TestFixture
{
	CPPUNIT_TEST_SUITE (TestBundleID);
	CPPUNIT_TEST (rawTest);
	CPPUNIT_TEST (performanceTest);
	CPPUNIT_TEST_SUITE_END ();

public:
	void setUp (void);
	void tearDown (void);

protected:
	void performanceTest(void);
	void rawTest(void);
};

#endif /* TESTBUNDLEID_H_ */
