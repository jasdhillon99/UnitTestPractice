/**
 * Unit Tests for Password class
 **/

#include "Password.h"
#include <gtest/gtest.h>

class PasswordTest : public ::testing::Test {
protected:
  PasswordTest() {}          // constructor runs before each test
  virtual ~PasswordTest() {} // destructor cleans up after tests
  virtual void SetUp() {}    // sets up before each test (after constructor)
  virtual void TearDown() {} // clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password) {
  Password my_password;
  int actual = my_password.count_leading_characters("Z");
  ASSERT_EQ(1, actual);
}

TEST(PasswordTest, mixed_case_password) {
  Password my_password;
  int actual = my_password.count_leading_characters("ZZz");
  ASSERT_EQ(2, actual);
}
TEST(PasswordTest, empty) {
  Password my_password;
  int actual = my_password.count_leading_characters("");
  ASSERT_EQ(0, actual);
}
TEST(PasswordTest, spaces) {
  Password my_password;
  int actual = my_password.count_leading_characters("   ");
  ASSERT_EQ(0, actual);
}

TEST(PasswordTest, space_before_pass) {
  Password my_password;
  int actual = my_password.count_leading_characters(" ZZ");
  ASSERT_EQ(2, actual);
}
TEST(PasswordTest, space_inbetween_pass) {
  Password my_password;
  int actual = my_password.count_leading_characters("Z Z");
  ASSERT_EQ(2, actual);
}

TEST(PasswordTest, unique_char){
	Password my_passwordl
	int actual = mypassword.unique_characters("aBa");
	ASSERT_EQ(2, actual);
}
