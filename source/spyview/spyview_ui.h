// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef spyview_ui_h
#define spyview_ui_h
#include <FL/Fl.H>
#include "ImageWindow.H"
#include "ImageData.H"
#include "spyview.H"
#include <math.h>
#include <vector>
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *control;
#include <FL/Fl_Choice.H>
extern void filech_cb(Fl_Choice*, void*);
extern Fl_Choice *filech;
#include <FL/Fl_Light_Button.H>
extern Fl_Light_Button *plothistb;
extern Fl_Light_Button *plotcmapb;
#include <FL/Fl_Value_Input.H>
extern Fl_Value_Input *centerv;
#include <FL/Fl_Slider.H>
extern Fl_Slider *centerslider;
#include <FL/Fl_Roller.H>
extern Fl_Roller *centerroller;
extern Fl_Value_Input *centerv_units;
extern Fl_Value_Input *widthv;
extern Fl_Slider *widthslider;
extern Fl_Roller *widthroller;
extern Fl_Value_Input *widthv_units;
extern Fl_Value_Input *minv;
extern Fl_Slider *minslider;
extern Fl_Roller *minroller;
extern Fl_Value_Input *minv_units;
extern Fl_Value_Input *maxv;
extern Fl_Slider *maxslider;
extern Fl_Roller *maxroller;
extern Fl_Value_Input *maxv_units;
extern Fl_Value_Input *gammav;
extern Fl_Slider *gammaslider;
extern Fl_Roller *gammaroller;
extern Fl_Light_Button *squareb;
#include <FL/Fl_Button.H>
extern void cmapch_cb(Fl_Choice*, void*);
extern Fl_Choice *cmapch;
extern Fl_Light_Button *invertb;
extern Fl_Light_Button *negateb;
extern Fl_Button *normb;
extern Fl_Value_Input *bpbox;
extern Fl_Value_Input *wpbox;
#include <FL/Fl_Input.H>
extern Fl_Input *savebox;
extern void saveb_cb(Fl_Button*, void*);
extern Fl_Button *saveb;
extern Fl_Button *dismissb;
extern Fl_Button *exitb;
extern Fl_Button *xsecb;
extern Fl_Button *location_bar;
#include <FL/Fl_Output.H>
extern Fl_Output *help_bar;
#include <FL/Fl_Box.H>
extern Fl_Box *colormap_placeholder;
extern void save_cmap_cb(Fl_Button*, void*);
extern Fl_Button *exportb;
extern Fl_Value_Input *xzoom_value;
extern Fl_Value_Input *yzoom_value;
extern Fl_Slider *cmap_min;
extern Fl_Slider *cmap_max;
#include <FL/Fl_Value_Output.H>
extern Fl_Value_Output *xsize;
extern Fl_Value_Output *ysize;
extern Fl_Value_Input *gcenterv;
extern Fl_Slider *gcenterslider;
extern Fl_Roller *gcenterroller;
extern Fl_Choice *export_type;
extern void cmapedit_cb(Fl_Button*, void*);
extern ImageWindow *iw;
extern Fl_Double_Window *procwin;
extern Fl_Output *proc_description;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *enable_filter;
#include <FL/Fl_Group.H>
#include <FL/Fl_Browser.H>
extern Fl_Browser *options;
extern Fl_Browser *pqueue;
extern Fl_Double_Window *normwin;
#include <FL/Fl_Round_Button.H>
extern Fl_Round_Button *keep_zoom;
extern Fl_Round_Button *keep_size;
extern Fl_Round_Button *reset_zoom;
extern Fl_Check_Button *norm_on_load;
extern Fl_Round_Button *a_quant;
extern Fl_Round_Button *man_quant;
extern Fl_Value_Input *a_quant_percent;
extern Fl_Group *manual_quant;
extern Fl_Value_Input *qmin;
extern Fl_Value_Input *qmax;
extern Fl_Round_Button *dat_type_mat;
extern Fl_Round_Button *dat_type_gp;
extern Fl_Round_Button *gp_type_col;
extern Fl_Round_Button *gp_type_index;
extern Fl_Round_Button *dat_type_delft;
extern Fl_Check_Button *gp_parse_txt;
extern Fl_Check_Button *gp_delft_raw;
extern Fl_Round_Button *dat_type_meta;
extern Fl_Check_Button *gp_delft_set;
extern Fl_Button *requantize;
extern Fl_Value_Input *gp_col;
extern Fl_Double_Window *unitswin;
extern Fl_Value_Input *xmin;
extern Fl_Value_Input *xmax;
extern Fl_Input *xunitname;
extern Fl_Value_Input *ymin;
extern Fl_Value_Input *ymax;
extern Fl_Input *yunitname;
extern Fl_Value_Input *zmin;
extern Fl_Value_Input *zmax;
extern Fl_Input *zunitname;
extern Fl_Input *gpusing;
extern Fl_Input *gpwith;
extern Fl_Choice *axis_type;
extern Fl_Light_Button *xrange;
extern Fl_Double_Window *xsecwin;
extern Fl_Group *units3d;
extern Fl_Input *mtx_xname;
extern Fl_Input *mtx_yname;
extern Fl_Input *mtx_zname;
extern Fl_Value_Input *mtx_xmin;
extern Fl_Value_Input *mtx_ymin;
extern Fl_Value_Input *mtx_zmin;
extern Fl_Value_Input *mtx_xmax;
extern Fl_Value_Input *mtx_ymax;
extern Fl_Value_Input *mtx_zmax;
extern Fl_Value_Output *mtx_x;
extern Fl_Value_Output *mtx_y;
extern Fl_Value_Output *mtx_z;
extern Fl_Group *controls3d;
extern Fl_Value_Input *indexbox;
extern Fl_Slider *indexslider;
extern Fl_Roller *indexroller;
extern Fl_Value_Output *index_value;
extern Fl_Choice *dim;
extern Fl_Light_Button *mtx_label;
extern Fl_Double_Window *reload_window;
extern void reload_cb(Fl_Input*, void*);
extern Fl_Input *reload_text;
extern Fl_Round_Button *replaceb;
extern Fl_Double_Window *cmapedwin;
#include <FL/Fl_Value_Slider.H>
extern Fl_Value_Slider *cmrot;
extern Fl_Button *m60;
extern Fl_Roller *cmrot_roller;
extern Fl_Button *p60;
extern Fl_Double_Window *location_window;
extern Fl_Output *location_x;
extern Fl_Output *location_y;
extern Fl_Output *location_data;
extern Fl_Input *location_fmt;
extern Fl_Group *zoom_group;
extern Fl_Output *zx1v;
extern Fl_Output *zx2v;
extern Fl_Output *zy2v;
extern Fl_Output *zy1v;
extern Fl_Value_Output *zx1;
extern Fl_Value_Output *zx2;
extern Fl_Value_Output *zy2;
extern Fl_Value_Output *zy1;
extern Fl_Value_Output *x_col;
extern Fl_Value_Output *y_row;
extern Fl_Output *data_name;
extern Fl_Double_Window *helpwin;
#include <FL/Fl_Text_Display.H>
extern Fl_Text_Display *help_text;
extern Fl_Double_Window *plane_win;
extern Fl_Light_Button *planeb;
extern Fl_Button *fitplane;
extern Fl_Button *zeroplane;
extern Fl_Value_Input *plane_a;
extern Fl_Slider *plane_aslider;
extern Fl_Roller *plane_aroller;
extern Fl_Value_Input *plane_b;
extern Fl_Slider *plane_bslider;
extern Fl_Roller *plane_broller;
extern "C" { void make_window(); }
extern Fl_Menu_Item menu_export_type[];
extern Fl_Menu_Item menu_axis_type[];
extern Fl_Menu_Item menu_dim[];
extern std::vector<Fl_Input *> proc_parameters;
extern Fl_Browser *last_proc_side; // Last side clicked on in the proc window;
extern std::vector<Fl_Check_Button *> proc_bool_parameters;
extern std::vector<Fl_Choice *> proc_choice_parameters;
extern std::vector<Fl_Button *> proc_button_parameters;
void reload_data();
#endif
