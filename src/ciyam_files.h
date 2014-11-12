// Copyright (c) 2013-2014 CIYAM Developers
//
// Distributed under the MIT/X11 software license, please refer to the file license.txt
// in the root project directory or http://www.opensource.org/licenses/mit-license.php.

#ifndef CIYAM_FILES_H
#  define CIYAM_FILES_H

#  ifndef HAS_PRECOMPILED_STD_HEADERS
#     include <string>
#  endif

#  include "ptypes.h"

#  ifdef CIYAM_BASE_IMPL
#     define CLASS_BASE_DECL_SPEC DYNAMIC_EXPORT
#  else
#     define CLASS_BASE_DECL_SPEC DYNAMIC_IMPORT
#  endif

class tcp_socket;

size_t CLASS_BASE_DECL_SPEC get_total_files( );
int64_t CLASS_BASE_DECL_SPEC get_total_bytes( );

std::string CLASS_BASE_DECL_SPEC get_file_stats( );

void CLASS_BASE_DECL_SPEC init_files_area( );

bool CLASS_BASE_DECL_SPEC has_file( const std::string& hash );

int64_t CLASS_BASE_DECL_SPEC file_bytes( const std::string& hash );

void CLASS_BASE_DECL_SPEC create_raw_file( const std::string& data );

void CLASS_BASE_DECL_SPEC tag_del( const std::string& name );
void CLASS_BASE_DECL_SPEC tag_file( const std::string& name, const std::string& hash );

std::string CLASS_BASE_DECL_SPEC get_hash_tags( const std::string& hash );

std::string CLASS_BASE_DECL_SPEC tag_file_hash( const std::string& name );

std::string CLASS_BASE_DECL_SPEC list_file_tags( const std::string& pat );

std::string CLASS_BASE_DECL_SPEC hash_two_with_token_separator(
 const std::string& hash1, const std::string& hash2, const std::string& separator );

void CLASS_BASE_DECL_SPEC fetch_file( const std::string& hash, tcp_socket& socket );
void CLASS_BASE_DECL_SPEC store_file( const std::string& hash, tcp_socket& socket, const char* p_tag = 0 );

void CLASS_BASE_DECL_SPEC fetch_temp_file( const std::string& name, tcp_socket& socket );
void CLASS_BASE_DECL_SPEC store_temp_file( const std::string& name, tcp_socket& socket );

bool CLASS_BASE_DECL_SPEC temp_file_is_identical( const std::string& temp_name, const std::string& hash );

#endif
