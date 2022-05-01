/* EditorPrefs_copyToInstance.h
 *
 * Copyright (C) 2013,2015-2018,2021,2022 Paul Boersma
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

/* for C++ files; see EditorPrefs.h */

#undef EditorPrefs_begin
#undef prefs_add_int
#undef prefs_add_int_with_data
#undef prefs_override_int
#undef prefs_add_integer
#undef prefs_add_integer_with_data
#undef prefs_override_integer
#undef prefs_add_bool
#undef prefs_add_bool_with_data
#undef prefs_override_bool
#undef EditorClassPrefs_addDouble
#undef EditorClassPrefs_overrideDouble
#undef EditorInstancePrefs_addDouble
#undef EditorInstancePrefs_overrideDouble
#undef prefs_add_enum
#undef prefs_add_enum_with_data
#undef prefs_override_enum
#undef prefs_add_string
#undef prefs_add_string_with_data
#undef prefs_override_string
#undef EditorPrefs_end

#define EditorPrefs_begin(Klas) \
	void struct##Klas :: v_copyPreferencesToInstance () { \
		Klas##_Parent :: v_copyPreferencesToInstance ();

#define prefs_add_int(Klas,name,version,default)
#define prefs_add_int_with_data(Klas,name,version,default)  our p_##name = our pref_##name ();
#define prefs_override_int(Klas,name,version,default)

#define prefs_add_integer(Klas,name,version,default)
#define prefs_add_integer_with_data(Klas,name,version,default)  our p_##name = our pref_##name ();
#define prefs_override_integer(Klas,name,version,default)

#define prefs_add_bool(Klas,name,version,default)
#define prefs_add_bool_with_data(Klas,name,version,default)  our p_##name = our pref_##name ();
#define prefs_override_bool(Klas,name,version,default)

#define EditorClassPrefs_addDouble(Klas,name,version,default)
#define EditorClassPrefs_overrideDouble(Klas,name,version,default)
#define EditorInstancePrefs_addDouble(Klas,name,version,default)  our _copyPrefToInstance_##name ();
#define EditorInstancePrefs_overrideDouble(Klas,name,version,default)

#define prefs_add_enum(Klas,name,version,enumerated,default)
#define prefs_add_enum_with_data(Klas,name,version,enumerated,default)  our p_##name = our pref_##name ();
#define prefs_override_enum(Klas,name,version,enumerated,default)

#define prefs_add_string(Klas,name,version,default)
#define prefs_add_string_with_data(Klas,name,version,default)  str32cpy (& our p_##name [0], our pref_##name ());
#define prefs_override_string(Klas,name,version,default)

#define EditorPrefs_end(Klas) \
	}

/* End of file EditorPrefs_copyToInstance.h */
