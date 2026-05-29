pub trait VtkColorSeries {
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn set_color_scheme(&mut self, scheme: core::ffi::c_int) -> ();
    fn set_color_scheme_by_name(&mut self, schemeName: vtkStdString) -> core::ffi::c_int;
    fn get_number_of_color_schemes(&mut self) -> core::ffi::c_int;
    fn get_color_scheme_name(&mut self) -> *mut core::ffi::c_void;
    fn set_color_scheme_name(&mut self, name: vtkStdString) -> ();
    fn get_color_scheme(&mut self) -> core::ffi::c_int;
    fn get_number_of_colors(&mut self) -> core::ffi::c_int;
    fn set_number_of_colors(&mut self, numColors: core::ffi::c_int) -> ();
    fn get_color(&mut self, index: core::ffi::c_int) -> *mut core::ffi::c_void;
    fn get_color_repeating(&mut self, index: core::ffi::c_int) -> *mut core::ffi::c_void;
    fn set_color(&mut self, index: core::ffi::c_int, color: vtkColor3ub) -> ();
    fn add_color(&mut self, color: vtkColor3ub) -> ();
    fn insert_color(&mut self, index: core::ffi::c_int, color: vtkColor3ub) -> ();
    fn remove_color(&mut self, index: core::ffi::c_int) -> ();
    fn clear_colors(&mut self) -> ();
    fn deep_copy(&mut self, chartColors: *mut core::ffi::c_void) -> ();
    fn build_lookup_table(
        &mut self,
        lkup: *mut core::ffi::c_void,
        lutIndexing: core::ffi::c_int,
    ) -> ();
    fn create_lookup_table(
        &mut self,
        lutIndexing: core::ffi::c_int,
    ) -> *mut core::ffi::c_void;
}
pub trait VtkNamedColors {
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void;
    fn new_instance(&mut self) -> *mut core::ffi::c_void;
    fn new(&mut self) -> *mut core::ffi::c_void;
    fn get_number_of_colors(&mut self) -> core::ffi::c_int;
    fn reset_colors(&mut self) -> ();
    fn color_exists(&mut self, name: vtkStdString) -> bool;
    fn get_color_4_ub(&mut self, name: vtkStdString) -> *mut core::ffi::c_void;
    fn get_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_uchar,
        g: core::ffi::c_uchar,
        b: core::ffi::c_uchar,
        a: core::ffi::c_uchar,
    ) -> ();
    fn get_color(&mut self, name: vtkStdString, rgba: core::ffi::c_uchar) -> ();
    fn get_color(&mut self, name: vtkStdString, rgba: *mut core::ffi::c_void) -> ();
    fn get_color_4_d(&mut self, name: vtkStdString) -> *mut core::ffi::c_void;
    fn get_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_double,
        g: core::ffi::c_double,
        b: core::ffi::c_double,
        a: core::ffi::c_double,
    ) -> ();
    fn get_color(&mut self, name: vtkStdString, rgba: core::ffi::c_double) -> ();
    fn get_color(&mut self, name: vtkStdString, rgba: *mut core::ffi::c_void) -> ();
    fn get_color_3_ub(&mut self, name: vtkStdString) -> *mut core::ffi::c_void;
    fn get_color_3_d(&mut self, name: vtkStdString) -> *mut core::ffi::c_void;
    fn get_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_double,
        g: core::ffi::c_double,
        b: core::ffi::c_double,
    ) -> ();
    fn get_color_rgb(&mut self, name: vtkStdString, rgb: core::ffi::c_double) -> ();
    fn get_color(&mut self, name: vtkStdString, rgb: *mut core::ffi::c_void) -> ();
    fn get_color(&mut self, name: vtkStdString, rgb: *mut core::ffi::c_void) -> ();
    fn set_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_uchar,
        g: core::ffi::c_uchar,
        b: core::ffi::c_uchar,
        a: core::ffi::c_uchar,
    ) -> ();
    fn set_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_double,
        g: core::ffi::c_double,
        b: core::ffi::c_double,
        a: core::ffi::c_double,
    ) -> ();
    fn set_color(&mut self, name: vtkStdString, rgba: core::ffi::c_uchar) -> ();
    fn set_color(&mut self, name: vtkStdString, rgba: vtkColor4ub) -> ();
    fn set_color(&mut self, name: vtkStdString, rgb: vtkColor3ub) -> ();
    fn set_color(&mut self, name: vtkStdString, rgba: core::ffi::c_double) -> ();
    fn set_color(&mut self, name: vtkStdString, rgba: vtkColor4d) -> ();
    fn set_color(&mut self, name: vtkStdString, rgb: vtkColor3d) -> ();
    fn remove_color(&mut self, name: vtkStdString) -> ();
    fn get_color_names(&mut self) -> *mut core::ffi::c_void;
    fn get_color_names(&mut self, colorNames: *mut core::ffi::c_void) -> ();
    fn get_synonyms(&mut self) -> *mut core::ffi::c_void;
    fn html_color_to_rgba(
        &mut self,
        colorString: vtkStdString,
    ) -> *mut core::ffi::c_void;
    fn html_color_to_rgb(&mut self, colorString: vtkStdString) -> *mut core::ffi::c_void;
    fn rgb_to_html_color(&mut self, rgb: vtkColor3ub) -> *mut core::ffi::c_void;
    fn rgba_to_html_color(&mut self, rgba: vtkColor4ub) -> *mut core::ffi::c_void;
    fn set_color(&mut self, name: vtkStdString, htmlString: vtkStdString) -> ();
}
impl VtkColorSeries for vtkColorSeries {
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_color_series_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_color_series_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_color_series_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_color_series_new_instance(self.0) }
    }
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_color_series_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_color_series_new(self.0) }
    }
    fn set_color_scheme(&mut self, scheme: core::ffi::c_int) -> () {
        unsafe extern "C" {
            fn vtk_color_series_set_color_scheme(
                sself: *mut core::ffi::c_void,
                scheme: core::ffi::c_int,
            );
        }
        unsafe { vtk_color_series_set_color_scheme(self.0, scheme) }
    }
    fn set_color_scheme_by_name(
        &mut self,
        schemeName: vtkStdString,
    ) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_color_series_set_color_scheme_by_name(
                sself: *mut core::ffi::c_void,
                schemeName: vtkStdString,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_color_series_set_color_scheme_by_name(self.0, schemeName) }
    }
    fn get_number_of_color_schemes(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_color_series_get_number_of_color_schemes(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_color_series_get_number_of_color_schemes(self.0) }
    }
    fn get_color_scheme_name(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_color_series_get_color_scheme_name(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_color_series_get_color_scheme_name(self.0) }
    }
    fn set_color_scheme_name(&mut self, name: vtkStdString) -> () {
        unsafe extern "C" {
            fn vtk_color_series_set_color_scheme_name(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
            );
        }
        unsafe { vtk_color_series_set_color_scheme_name(self.0, name) }
    }
    fn get_color_scheme(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_color_series_get_color_scheme(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_color_series_get_color_scheme(self.0) }
    }
    fn get_number_of_colors(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_color_series_get_number_of_colors(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_color_series_get_number_of_colors(self.0) }
    }
    fn set_number_of_colors(&mut self, numColors: core::ffi::c_int) -> () {
        unsafe extern "C" {
            fn vtk_color_series_set_number_of_colors(
                sself: *mut core::ffi::c_void,
                numColors: core::ffi::c_int,
            );
        }
        unsafe { vtk_color_series_set_number_of_colors(self.0, numColors) }
    }
    fn get_color(&mut self, index: core::ffi::c_int) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_color_series_get_color(
                sself: *mut core::ffi::c_void,
                index: core::ffi::c_int,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_color_series_get_color(self.0, index) }
    }
    fn get_color_repeating(
        &mut self,
        index: core::ffi::c_int,
    ) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_color_series_get_color_repeating(
                sself: *mut core::ffi::c_void,
                index: core::ffi::c_int,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_color_series_get_color_repeating(self.0, index) }
    }
    fn set_color(&mut self, index: core::ffi::c_int, color: vtkColor3ub) -> () {
        unsafe extern "C" {
            fn vtk_color_series_set_color(
                sself: *mut core::ffi::c_void,
                index: core::ffi::c_int,
                color: vtkColor3ub,
            );
        }
        unsafe { vtk_color_series_set_color(self.0, index, color) }
    }
    fn add_color(&mut self, color: vtkColor3ub) -> () {
        unsafe extern "C" {
            fn vtk_color_series_add_color(
                sself: *mut core::ffi::c_void,
                color: vtkColor3ub,
            );
        }
        unsafe { vtk_color_series_add_color(self.0, color) }
    }
    fn insert_color(&mut self, index: core::ffi::c_int, color: vtkColor3ub) -> () {
        unsafe extern "C" {
            fn vtk_color_series_insert_color(
                sself: *mut core::ffi::c_void,
                index: core::ffi::c_int,
                color: vtkColor3ub,
            );
        }
        unsafe { vtk_color_series_insert_color(self.0, index, color) }
    }
    fn remove_color(&mut self, index: core::ffi::c_int) -> () {
        unsafe extern "C" {
            fn vtk_color_series_remove_color(
                sself: *mut core::ffi::c_void,
                index: core::ffi::c_int,
            );
        }
        unsafe { vtk_color_series_remove_color(self.0, index) }
    }
    fn clear_colors(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_color_series_clear_colors(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_color_series_clear_colors(self.0) }
    }
    fn deep_copy(&mut self, chartColors: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_color_series_deep_copy(
                sself: *mut core::ffi::c_void,
                chartColors: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_color_series_deep_copy(self.0, chartColors) }
    }
    fn build_lookup_table(
        &mut self,
        lkup: *mut core::ffi::c_void,
        lutIndexing: core::ffi::c_int,
    ) -> () {
        unsafe extern "C" {
            fn vtk_color_series_build_lookup_table(
                sself: *mut core::ffi::c_void,
                lkup: *mut core::ffi::c_void,
                lutIndexing: core::ffi::c_int,
            );
        }
        unsafe { vtk_color_series_build_lookup_table(self.0, lkup, lutIndexing) }
    }
    fn create_lookup_table(
        &mut self,
        lutIndexing: core::ffi::c_int,
    ) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_color_series_create_lookup_table(
                sself: *mut core::ffi::c_void,
                lutIndexing: core::ffi::c_int,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_color_series_create_lookup_table(self.0, lutIndexing) }
    }
}
impl VtkNamedColors for vtkNamedColors {
    fn safe_down_cast(&mut self, o: *mut core::ffi::c_void) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_safe_down_cast(
                sself: *mut core::ffi::c_void,
                o: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_safe_down_cast(self.0, o) }
    }
    fn new_instance(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_new_instance(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_new_instance(self.0) }
    }
    fn new(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_new(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_new(self.0) }
    }
    fn get_number_of_colors(&mut self) -> core::ffi::c_int {
        unsafe extern "C" {
            fn vtk_named_colors_get_number_of_colors(
                sself: *mut core::ffi::c_void,
            ) -> core::ffi::c_int;
        }
        unsafe { vtk_named_colors_get_number_of_colors(self.0) }
    }
    fn reset_colors(&mut self) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_reset_colors(sself: *mut core::ffi::c_void);
        }
        unsafe { vtk_named_colors_reset_colors(self.0) }
    }
    fn color_exists(&mut self, name: vtkStdString) -> bool {
        unsafe extern "C" {
            fn vtk_named_colors_color_exists(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
            ) -> bool;
        }
        unsafe { vtk_named_colors_color_exists(self.0, name) }
    }
    fn get_color_4_ub(&mut self, name: vtkStdString) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_get_color_4_ub(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_get_color_4_ub(self.0, name) }
    }
    fn get_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_uchar,
        g: core::ffi::c_uchar,
        b: core::ffi::c_uchar,
        a: core::ffi::c_uchar,
    ) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                r: core::ffi::c_uchar,
                g: core::ffi::c_uchar,
                b: core::ffi::c_uchar,
                a: core::ffi::c_uchar,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, r, g, b, a) }
    }
    fn get_color(&mut self, name: vtkStdString, rgba: core::ffi::c_uchar) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: core::ffi::c_uchar,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, rgba) }
    }
    fn get_color(&mut self, name: vtkStdString, rgba: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, rgba) }
    }
    fn get_color_4_d(&mut self, name: vtkStdString) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_get_color_4_d(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_get_color_4_d(self.0, name) }
    }
    fn get_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_double,
        g: core::ffi::c_double,
        b: core::ffi::c_double,
        a: core::ffi::c_double,
    ) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                r: core::ffi::c_double,
                g: core::ffi::c_double,
                b: core::ffi::c_double,
                a: core::ffi::c_double,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, r, g, b, a) }
    }
    fn get_color(&mut self, name: vtkStdString, rgba: core::ffi::c_double) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: core::ffi::c_double,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, rgba) }
    }
    fn get_color(&mut self, name: vtkStdString, rgba: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, rgba) }
    }
    fn get_color_3_ub(&mut self, name: vtkStdString) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_get_color_3_ub(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_get_color_3_ub(self.0, name) }
    }
    fn get_color_3_d(&mut self, name: vtkStdString) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_get_color_3_d(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_get_color_3_d(self.0, name) }
    }
    fn get_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_double,
        g: core::ffi::c_double,
        b: core::ffi::c_double,
    ) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                r: core::ffi::c_double,
                g: core::ffi::c_double,
                b: core::ffi::c_double,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, r, g, b) }
    }
    fn get_color_rgb(&mut self, name: vtkStdString, rgb: core::ffi::c_double) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color_rgb(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgb: core::ffi::c_double,
            );
        }
        unsafe { vtk_named_colors_get_color_rgb(self.0, name, rgb) }
    }
    fn get_color(&mut self, name: vtkStdString, rgb: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgb: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, rgb) }
    }
    fn get_color(&mut self, name: vtkStdString, rgb: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgb: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_named_colors_get_color(self.0, name, rgb) }
    }
    fn set_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_uchar,
        g: core::ffi::c_uchar,
        b: core::ffi::c_uchar,
        a: core::ffi::c_uchar,
    ) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                r: core::ffi::c_uchar,
                g: core::ffi::c_uchar,
                b: core::ffi::c_uchar,
                a: core::ffi::c_uchar,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, r, g, b, a) }
    }
    fn set_color(
        &mut self,
        name: vtkStdString,
        r: core::ffi::c_double,
        g: core::ffi::c_double,
        b: core::ffi::c_double,
        a: core::ffi::c_double,
    ) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                r: core::ffi::c_double,
                g: core::ffi::c_double,
                b: core::ffi::c_double,
                a: core::ffi::c_double,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, r, g, b, a) }
    }
    fn set_color(&mut self, name: vtkStdString, rgba: core::ffi::c_uchar) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: core::ffi::c_uchar,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, rgba) }
    }
    fn set_color(&mut self, name: vtkStdString, rgba: vtkColor4ub) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: vtkColor4ub,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, rgba) }
    }
    fn set_color(&mut self, name: vtkStdString, rgb: vtkColor3ub) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgb: vtkColor3ub,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, rgb) }
    }
    fn set_color(&mut self, name: vtkStdString, rgba: core::ffi::c_double) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: core::ffi::c_double,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, rgba) }
    }
    fn set_color(&mut self, name: vtkStdString, rgba: vtkColor4d) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgba: vtkColor4d,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, rgba) }
    }
    fn set_color(&mut self, name: vtkStdString, rgb: vtkColor3d) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                rgb: vtkColor3d,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, rgb) }
    }
    fn remove_color(&mut self, name: vtkStdString) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_remove_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
            );
        }
        unsafe { vtk_named_colors_remove_color(self.0, name) }
    }
    fn get_color_names(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_get_color_names(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_get_color_names(self.0) }
    }
    fn get_color_names(&mut self, colorNames: *mut core::ffi::c_void) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_get_color_names(
                sself: *mut core::ffi::c_void,
                colorNames: *mut core::ffi::c_void,
            );
        }
        unsafe { vtk_named_colors_get_color_names(self.0, colorNames) }
    }
    fn get_synonyms(&mut self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_get_synonyms(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_get_synonyms(self.0) }
    }
    fn html_color_to_rgba(
        &mut self,
        colorString: vtkStdString,
    ) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_html_color_to_rgba(
                sself: *mut core::ffi::c_void,
                colorString: vtkStdString,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_html_color_to_rgba(self.0, colorString) }
    }
    fn html_color_to_rgb(
        &mut self,
        colorString: vtkStdString,
    ) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_html_color_to_rgb(
                sself: *mut core::ffi::c_void,
                colorString: vtkStdString,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_html_color_to_rgb(self.0, colorString) }
    }
    fn rgb_to_html_color(&mut self, rgb: vtkColor3ub) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_rgb_to_html_color(
                sself: *mut core::ffi::c_void,
                rgb: vtkColor3ub,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_rgb_to_html_color(self.0, rgb) }
    }
    fn rgba_to_html_color(&mut self, rgba: vtkColor4ub) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtk_named_colors_rgba_to_html_color(
                sself: *mut core::ffi::c_void,
                rgba: vtkColor4ub,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtk_named_colors_rgba_to_html_color(self.0, rgba) }
    }
    fn set_color(&mut self, name: vtkStdString, htmlString: vtkStdString) -> () {
        unsafe extern "C" {
            fn vtk_named_colors_set_color(
                sself: *mut core::ffi::c_void,
                name: vtkStdString,
                htmlString: vtkStdString,
            );
        }
        unsafe { vtk_named_colors_set_color(self.0, name, htmlString) }
    }
}
/// stores a list of colors.
///
///
///
/// The vtkColorSeries stores palettes of colors. There are several default
/// palettes (or schemes) available and functions to control several aspects
/// of what colors are returned. In essence a color scheme is set and then
/// the number of colors and individual color values may be requested.
///
/// For a web page showcasing the default palettes, see:
/// <a
/// href="https://htmlpreview.github.io/?https://github.com/Kitware/vtk-examples/blob/gh-pages/VTKColorSeriesPatches.html">VTKColorSeriesPatches</a>;
/// <a
/// href="https://kitware.github.io/vtk-examples/site/Python/Visualization/ColorSeriesPatches/">ColorSeriesPatches</a>
/// was used to generate this table.
///
/// It is also possible to add schemes beyond the default palettes.
/// Whenever \a SetColorScheme is called with a string for which no palette
/// already exists, a new, empty palette is created.
/// You may then use \a SetNumberOfColors and \a SetColor to populate the
/// palette.
/// You may not extend default palettes by calling functions that alter
/// a scheme; if called while a predefined palette is in use, they
/// will create a new non-default scheme and populate it with the current
/// palette before continuing.
///
/// The "Brewer" palettes are courtesy of
/// Cynthia A. Brewer (Dept. of Geography, Pennsylvania State University)
/// and under the Apache License. See the source code for details.
#[allow(non_camel_case_types)]
pub struct vtkColorSeries(*mut core::ffi::c_void);
impl vtkColorSeries {
    /// Creates a new [vtkColorSeries] wrapped inside `vtkNew`
    #[doc(alias = "vtkColorSeries")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkColorSeries_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkColorSeries_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkColorSeries_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkColorSeries_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkColorSeries {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkColorSeries {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkColorSeries_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkColorSeries_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkColorSeries_create_drop() {
    let obj = vtkColorSeries::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkColorSeries(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
/// A class holding colors and their names.
///
///
/// For a web page showcasing VTK Named Colors and their RGB values, see:
/// <a
/// href="https://htmlpreview.github.io/?https://github.com/Kitware/vtk-examples/blob/gh-pages/VTKNamedColorPatches.html">VTKNamedColorPatches</a>;
/// <a
/// href="https://kitware.github.io/vtk-examples/site/Python/Visualization/NamedColorPatches/">NamedColorPatches</a>
/// was used to generate this table.
///
/// Color names are case insensitive and are stored as lower-case names
/// along with a 4-element array whose elements are red, green, blue and alpha,
/// in that order, corresponding to the RGBA value of the color.
///
/// It is assumed that if the RGBA values are unsigned char then each element
/// lies in the range 0...255 and if the RGBA values are double then each
/// element lies in the range 0...1.
///
/// The colors and names are those in <a href="https://en.wikipedia.org/wiki/Web_colors">Web
/// colors</a> that are derived from the CSS3 specification: <a
/// href="https://www.w3.org/TR/css-color-3/">CSS Color Module Level 3</a> In this table
/// common synonyms such as cyan/aqua and magenta/fuchsia are also included.
///
/// Also included in this class are names and colors taken from
/// <em>Wrapping/Python/vtkmodules/util/colors.py</em> that were originally taken from
/// <em>Wrapping/Tcl/vtktesting/colors.tcl</em> (no longer in the VTK source files - deleted
/// 06-Dec-2017).
///
/// Web colors and names in <a href="https://en.wikipedia.org/wiki/Web_colors">Web colors</a> take
/// precedence over those in <em>colors.py</em>. One consequence of this
/// is that while <em>colors.py</em> specifies green as equivalent to
/// (0,255,0), the web color standard defines it as (0,128,0).
///
/// The \a SetColor methods will overwrite existing colors if the name of the
/// color being set matches an existing color. Note that ColorExists() can be
/// used to test for existence of the color being set.
///
/// In the case of the \a GetColor methods returning doubles, alternative versions,
/// identified by the letters RGB in the names, are provided.
/// These get functions return just the red, green and blue components of
/// a color.
///
/// The class also provides methods for defining a color through an HTML color
/// string. The following formats are supported:
///
/// - \#RGB                 (3-digit hexadecimal number, where #4F2 is a shortcut for #44FF22)
/// - \#RRGGBB              (6-digit hexadecimal number)
/// - rgb(r, g, b)          (where r, g, b are in 0..255 or percentage values)
/// - rgba(r, g, b, a)      (where r, g, b, are in 0..255 or percentage values, a is in 0.0..1.0)
/// - a CSS3 color name     (e.g. "steelblue")
#[allow(non_camel_case_types)]
pub struct vtkNamedColors(*mut core::ffi::c_void);
impl vtkNamedColors {
    /// Creates a new [vtkNamedColors] wrapped inside `vtkNew`
    #[doc(alias = "vtkNamedColors")]
    pub fn new() -> Self {
        unsafe extern "C" {
            fn vtkNamedColors_new() -> *mut core::ffi::c_void;
        }
        Self(unsafe { &mut *vtkNamedColors_new() })
    }
    #[cfg(test)]
    unsafe fn _get_ptr(&self) -> *mut core::ffi::c_void {
        unsafe extern "C" {
            fn vtkNamedColors_get_ptr(
                sself: *mut core::ffi::c_void,
            ) -> *mut core::ffi::c_void;
        }
        unsafe { vtkNamedColors_get_ptr(self.0) }
    }
}
impl std::default::Default for vtkNamedColors {
    fn default() -> Self {
        Self::new()
    }
}
impl Drop for vtkNamedColors {
    fn drop(&mut self) {
        unsafe extern "C" {
            fn vtkNamedColors_destructor(sself: *mut core::ffi::c_void);
        }
        unsafe { vtkNamedColors_destructor(self.0) }
        self.0 = core::ptr::null_mut();
    }
}
#[test]
fn test_vtkNamedColors_create_drop() {
    let obj = vtkNamedColors::new();
    let ptr = obj.0;
    assert!(!ptr.is_null());
    assert!(unsafe { !obj._get_ptr().is_null() });
    drop(obj);
    let new_obj = vtkNamedColors(ptr);
    assert!(unsafe { new_obj._get_ptr().is_null() });
}
