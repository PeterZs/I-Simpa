
//Généré par generate_enum_def.py le Fri Jul 25 15:28:55 2014
#include "element_pywrap.hpp"
#include "data_manager/element.h"
#include "data_manager/python_interface/instanceManager.hpp"
#ifdef USE_PYTHON
#include <boost/python/enum.hpp>


using namespace boost::python;

void export_enum()
{
    enum_<Element::IDEVENT>("idevent")
		.value("IDEVENT_DELETE_ELEMENT",Element::IDEVENT_DELETE_ELEMENT)
		.value("IDEVENT_RENAME_ELEMENT",Element::IDEVENT_RENAME_ELEMENT)
		.value("IDEVENT_COPIER",Element::IDEVENT_COPIER)
		.value("IDEVENT_COLLER",Element::IDEVENT_COLLER)
		.value("IDEVENT_NEW_SURFACE_GROUP",Element::IDEVENT_NEW_SURFACE_GROUP)
		.value("IDEVENT_GETPROPERTIES",Element::IDEVENT_GETPROPERTIES)
		.value("IDEVENT_SELECT_TREE_ITEM",Element::IDEVENT_SELECT_TREE_ITEM)
		.value("IDEVENT_NEW_RECEPTEUR_P",Element::IDEVENT_NEW_RECEPTEUR_P)
		.value("IDEVENT_SELECT_POSITION",Element::IDEVENT_SELECT_POSITION)
		.value("IDEVENT_NEW_SOURCE",Element::IDEVENT_NEW_SOURCE)
		.value("IDEVENT_NEW_RECEPTEUR_S",Element::IDEVENT_NEW_RECEPTEUR_S)
		.value("IDEVENT_NEW_USERFREQ",Element::IDEVENT_NEW_USERFREQ)
		.value("IDEVENT_NEW_ENCOMBREMENT",Element::IDEVENT_NEW_ENCOMBREMENT)
		.value("IDEVENT_NEW_ENCOMBREMENT_CUBOIDE",Element::IDEVENT_NEW_ENCOMBREMENT_CUBOIDE)
		.value("IDEVENT_NEW_USERMAT",Element::IDEVENT_NEW_USERMAT)
		.value("IDEVENT_NEW_MATERIAL_GROUP",Element::IDEVENT_NEW_MATERIAL_GROUP)
		.value("IDEVENT_RUN_CALCULATION",Element::IDEVENT_RUN_CALCULATION)
		.value("IDEVENT_IMPORT_MATERIAL",Element::IDEVENT_IMPORT_MATERIAL)
		.value("IDEVENT_LOAD_PARTICLE_SIMULATION",Element::IDEVENT_LOAD_PARTICLE_SIMULATION)
		.value("IDEVENT_LOAD_PARTICLE_SIMULATION_PATH",Element::IDEVENT_LOAD_PARTICLE_SIMULATION_PATH)
		.value("IDEVENT_RELOAD_FOLDER",Element::IDEVENT_RELOAD_FOLDER)
		.value("IDEVENT_DELETE_FOLDER",Element::IDEVENT_DELETE_FOLDER)
		.value("IDEVENT_LOAD_RECEPTEURSS_SIMULATION_BY_TIMESTEP",Element::IDEVENT_LOAD_RECEPTEURSS_SIMULATION_BY_TIMESTEP)
		.value("IDEVENT_LOAD_RECEPTEURSS_SIMULATION_BY_TIMESTEP_SUM",Element::IDEVENT_LOAD_RECEPTEURSS_SIMULATION_BY_TIMESTEP_SUM)
		.value("IDEVENT_LOAD_RECEPTEURSS_SIMULATION_SUM",Element::IDEVENT_LOAD_RECEPTEURSS_SIMULATION_SUM)
		.value("IDEVENT_INVERT_FACE_ORIENTATION",Element::IDEVENT_INVERT_FACE_ORIENTATION)
		.value("IDEVENT_EMPTY_POINTER_VERTEX_GROUP",Element::IDEVENT_EMPTY_POINTER_VERTEX_GROUP)
		.value("IDEVENT_RECP_COMPUTE_ACOUSTIC_PARAMETERS",Element::IDEVENT_RECP_COMPUTE_ACOUSTIC_PARAMETERS)
		.value("IDEVENT_RECEPTEURS_COMPUTE_TR",Element::IDEVENT_RECEPTEURS_COMPUTE_TR)
		.value("IDEVENT_RECEPTEURS_COMPUTE_EDT",Element::IDEVENT_RECEPTEURS_COMPUTE_EDT)
		.value("IDEVENT_RECEPTEURS_COMPUTE_CLARITY",Element::IDEVENT_RECEPTEURS_COMPUTE_CLARITY)
		.value("IDEVENT_RECEPTEURS_COMPUTE_DEFINITION",Element::IDEVENT_RECEPTEURS_COMPUTE_DEFINITION)
		.value("IDEVENT_RECEPTEURS_COMPUTE_TS",Element::IDEVENT_RECEPTEURS_COMPUTE_TS)
		.value("IDEVENT_RECEPTEURS_COMPUTE_ST",Element::IDEVENT_RECEPTEURS_COMPUTE_ST)
		.value("IDEVENT_REPORT_PARTICULES_MAKE_GABE",Element::IDEVENT_REPORT_PARTICULES_MAKE_GABE)
		.value("IDEVENT_BFREQ_PRESELECTION_NONE",Element::IDEVENT_BFREQ_PRESELECTION_NONE)
		.value("IDEVENT_BFREQ_PRESELECTION_THIRD_BAND",Element::IDEVENT_BFREQ_PRESELECTION_THIRD_BAND)
		.value("IDEVENT_BFREQ_PRESELECTION_BAND",Element::IDEVENT_BFREQ_PRESELECTION_BAND)
		.value("IDEVENT_BFREQ_PRESELECTION_BUILDING_THIRD_BAND",Element::IDEVENT_BFREQ_PRESELECTION_BUILDING_THIRD_BAND)
		.value("IDEVENT_BFREQ_PRESELECTION_BUILDING_BAND",Element::IDEVENT_BFREQ_PRESELECTION_BUILDING_BAND)
		.value("IDEVENT_RECP_COMPUTE_ADVANCED_ACOUSTIC_PARAMETERS",Element::IDEVENT_RECP_COMPUTE_ADVANCED_ACOUSTIC_PARAMETERS)
		.value("IDEVENT_NEW_RECEPTEURP_GROUP",Element::IDEVENT_NEW_RECEPTEURP_GROUP)
		.value("IDEVENT_NEW_SOURCE_GROUP",Element::IDEVENT_NEW_SOURCE_GROUP)
		.value("IDEVENT_NEW_SURFACE_GROUP_FROM_SELECTION",Element::IDEVENT_NEW_SURFACE_GROUP_FROM_SELECTION)
		.value("IDEVENT_LOAD_RECEPTEURSP_SIMULATION",Element::IDEVENT_LOAD_RECEPTEURSP_SIMULATION)
		.value("IDEVENT_BUILD_VOLUMES_FROM_TRIMESH",Element::IDEVENT_BUILD_VOLUMES_FROM_TRIMESH)
		.value("IDEVENT_NEW_VOLUME",Element::IDEVENT_NEW_VOLUME)
		.value("IDEVENT_OPEN_FOLDER",Element::IDEVENT_OPEN_FOLDER)
		.value("IDEVENT_CONVERT_VOL_TO_FITTING",Element::IDEVENT_CONVERT_VOL_TO_FITTING)
		.value("IDEVENT_NEW_RECEPTEUR_S_COUPE",Element::IDEVENT_NEW_RECEPTEUR_S_COUPE)
		.value("IDEVENT_BFREQ_PRESELECTION_ALL",Element::IDEVENT_BFREQ_PRESELECTION_ALL)
		.value("IDEVENT_LAST_FIXED",Element::IDEVENT_LAST_FIXED)
		;

    enum_<Element::ELEMENT_TYPE>("element_type")
		.value("ELEMENT_TYPE_CORE_ROOT",Element::ELEMENT_TYPE_CORE_ROOT)
		.value("ELEMENT_TYPE_RESULT_ROOT",Element::ELEMENT_TYPE_RESULT_ROOT)
		.value("ELEMENT_TYPE_SCENE_ROOT",Element::ELEMENT_TYPE_SCENE_ROOT)
		.value("ELEMENT_TYPE_SCENE_PROJET_CONFIGURATION",Element::ELEMENT_TYPE_SCENE_PROJET_CONFIGURATION)
		.value("ELEMENT_TYPE_SCENE_GROUPESURFACES",Element::ELEMENT_TYPE_SCENE_GROUPESURFACES)
		.value("ELEMENT_TYPE_SCENE_GROUPESURFACES_GROUPE",Element::ELEMENT_TYPE_SCENE_GROUPESURFACES_GROUPE)
		.value("ELEMENT_TYPE_SCENE_GROUPESURFACES_GROUPE_VERTEX",Element::ELEMENT_TYPE_SCENE_GROUPESURFACES_GROUPE_VERTEX)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSP",Element::ELEMENT_TYPE_SCENE_RECEPTEURSP)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSP_RECEPTEUR",Element::ELEMENT_TYPE_SCENE_RECEPTEURSP_RECEPTEUR)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSP_RECEPTEUR_PROPRIETES",Element::ELEMENT_TYPE_SCENE_RECEPTEURSP_RECEPTEUR_PROPRIETES)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSP_RECEPTEUR_RENDU",Element::ELEMENT_TYPE_SCENE_RECEPTEURSP_RECEPTEUR_RENDU)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSS",Element::ELEMENT_TYPE_SCENE_RECEPTEURSS)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEUR",Element::ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEUR)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEUR_PROPRIETES",Element::ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEUR_PROPRIETES)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEUR_RENDU",Element::ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEUR_RENDU)
		.value("ELEMENT_TYPE_SCENE_SOURCES",Element::ELEMENT_TYPE_SCENE_SOURCES)
		.value("ELEMENT_TYPE_SCENE_SOURCES_SOURCE",Element::ELEMENT_TYPE_SCENE_SOURCES_SOURCE)
		.value("ELEMENT_TYPE_SCENE_SOURCES_SOURCE_PROPRIETES",Element::ELEMENT_TYPE_SCENE_SOURCES_SOURCE_PROPRIETES)
		.value("ELEMENT_TYPE_SCENE_SOURCES_SOURCE_PUISSANCE",Element::ELEMENT_TYPE_SCENE_SOURCES_SOURCE_PUISSANCE)
		.value("ELEMENT_TYPE_SCENE_SOURCES_SOURCE_RENDU",Element::ELEMENT_TYPE_SCENE_SOURCES_SOURCE_RENDU)
		.value("ELEMENT_TYPE_TEXT",Element::ELEMENT_TYPE_TEXT)
		.value("ELEMENT_TYPE_COLOR",Element::ELEMENT_TYPE_COLOR)
		.value("ELEMENT_TYPE_POSITION",Element::ELEMENT_TYPE_POSITION)
		.value("ELEMENT_TYPE_LIST",Element::ELEMENT_TYPE_LIST)
		.value("ELEMENT_TYPE_INTEGER",Element::ELEMENT_TYPE_INTEGER)
		.value("ELEMENT_TYPE_FLOAT",Element::ELEMENT_TYPE_FLOAT)
		.value("ELEMENT_TYPE_BOOL",Element::ELEMENT_TYPE_BOOL)
		.value("ELEMENT_TYPE_SCENE_PROJET_RENDU",Element::ELEMENT_TYPE_SCENE_PROJET_RENDU)
		.value("ELEMENT_TYPE_SCENE_PROJET_RENDU_ORIGINE",Element::ELEMENT_TYPE_SCENE_PROJET_RENDU_ORIGINE)
		.value("ELEMENT_TYPE_SCENE_PROJET_RENDU_MODEL",Element::ELEMENT_TYPE_SCENE_PROJET_RENDU_MODEL)
		.value("ELEMENT_TYPE_SCENE_BDD",Element::ELEMENT_TYPE_SCENE_BDD)
		.value("ELEMENT_TYPE_SCENE_BDD_SPECTRUMS",Element::ELEMENT_TYPE_SCENE_BDD_SPECTRUMS)
		.value("ELEMENT_TYPE_SCENE_BDD_SPECTRUMS_USER",Element::ELEMENT_TYPE_SCENE_BDD_SPECTRUMS_USER)
		.value("ELEMENT_TYPE_SCENE_BDD_SPECTRUMS_APP",Element::ELEMENT_TYPE_SCENE_BDD_SPECTRUMS_APP)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_APP",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_APP)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_APP_GROUP",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_APP_GROUP)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_APP_MATERIAU",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_APP_MATERIAU)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_USER",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_USER)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_USER_GROUP",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_USER_GROUP)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_USER_MATERIAU",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_USER_MATERIAU)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_PROPMATERIAU",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_PROPMATERIAU)
		.value("ELEMENT_TYPE_SCENE_BDD_CATMATERIAL",Element::ELEMENT_TYPE_SCENE_BDD_CATMATERIAL)
		.value("ELEMENT_TYPE_MATERIAU_APP",Element::ELEMENT_TYPE_MATERIAU_APP)
		.value("ELEMENT_TYPE_MATERIAU_USER",Element::ELEMENT_TYPE_MATERIAU_USER)
		.value("ELEMENT_TYPE_GAMMEFREQ_APP",Element::ELEMENT_TYPE_GAMMEFREQ_APP)
		.value("ELEMENT_TYPE_GAMMEFREQ_USER",Element::ELEMENT_TYPE_GAMMEFREQ_USER)
		.value("ELEMENT_TYPE_PROPERTY_FREQ",Element::ELEMENT_TYPE_PROPERTY_FREQ)
		.value("ELEMENT_TYPE_ROW",Element::ELEMENT_TYPE_ROW)
		.value("ELEMENT_TYPE_ROW_BFREQ",Element::ELEMENT_TYPE_ROW_BFREQ)
		.value("ELEMENT_TYPE_ROW_MATERIAU",Element::ELEMENT_TYPE_ROW_MATERIAU)
		.value("ELEMENT_TYPE_SCENE_ENCOMBREMENTS",Element::ELEMENT_TYPE_SCENE_ENCOMBREMENTS)
		.value("ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT",Element::ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT)
		.value("ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT_PROPRIETES",Element::ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT_PROPRIETES)
		.value("ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT_CUBOIDE",Element::ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT_CUBOIDE)
		.value("ELEMENT_TYPE_GAMMEABSORPTION",Element::ELEMENT_TYPE_GAMMEABSORPTION)
		.value("ELEMENT_TYPE_CORE_SPPS",Element::ELEMENT_TYPE_CORE_SPPS)
		.value("ELEMENT_TYPE_CORE_CORE_CONFIG",Element::ELEMENT_TYPE_CORE_CORE_CONFIG)
		.value("ELEMENT_TYPE_CORE_CORE_CONFMAILLAGE",Element::ELEMENT_TYPE_CORE_CORE_CONFMAILLAGE)
		.value("ELEMENT_TYPE_SCENE_PROJET",Element::ELEMENT_TYPE_SCENE_PROJET)
		.value("ELEMENT_TYPE_SCENE_PROJET_USERCONFIGURATION",Element::ELEMENT_TYPE_SCENE_PROJET_USERCONFIGURATION)
		.value("ELEMENT_TYPE_SCENE_PROJET_RENDU_PARTICULES",Element::ELEMENT_TYPE_SCENE_PROJET_RENDU_PARTICULES)
		.value("ELEMENT_TYPE_SCENE_DONNEES",Element::ELEMENT_TYPE_SCENE_DONNEES)
		.value("ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT_RENDU",Element::ELEMENT_TYPE_SCENE_ENCOMBREMENTS_ENCOMBREMENT_RENDU)
		.value("ELEMENT_TYPE_SCENE_PROJET_ENVIRONNEMENTCONF",Element::ELEMENT_TYPE_SCENE_PROJET_ENVIRONNEMENTCONF)
		.value("ELEMENT_TYPE_DRAWABLE",Element::ELEMENT_TYPE_DRAWABLE)
		.value("ELEMENT_TYPE_CORE_CORE_BFREQSELECTION",Element::ELEMENT_TYPE_CORE_CORE_BFREQSELECTION)
		.value("ELEMENT_TYPE_BOOL_BFREQ",Element::ELEMENT_TYPE_BOOL_BFREQ)
		.value("ELEMENT_TYPE_REPORT_FOLDER",Element::ELEMENT_TYPE_REPORT_FOLDER)
		.value("ELEMENT_TYPE_REPORT_PARTVISUALISATION",Element::ELEMENT_TYPE_REPORT_PARTVISUALISATION)
		.value("ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION",Element::ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION)
		.value("ELEMENT_TYPE_REPORT_GABE",Element::ELEMENT_TYPE_REPORT_GABE)
		.value("ELEMENT_TYPE_REPORT_GABE_RECP",Element::ELEMENT_TYPE_REPORT_GABE_RECP)
		.value("ELEMENT_TYPE_TREE_LIST",Element::ELEMENT_TYPE_TREE_LIST)
		.value("ELEMENT_TYPE_CORE_TC",Element::ELEMENT_TYPE_CORE_TC)
		.value("ELEMENT_TYPE_SCENE_PROJET_INFORMATION",Element::ELEMENT_TYPE_SCENE_PROJET_INFORMATION)
		.value("ELEMENT_TYPE_SCENE_BDD_MATERIAUX_MATERIAU_RENDER",Element::ELEMENT_TYPE_SCENE_BDD_MATERIAUX_MATERIAU_RENDER)
		.value("ELEMENT_TYPE_FONT",Element::ELEMENT_TYPE_FONT)
		.value("ELEMENT_TYPE_CORE_TLM",Element::ELEMENT_TYPE_CORE_TLM)
		.value("ELEMENT_TYPE_REPORT_GABE_GAP",Element::ELEMENT_TYPE_REPORT_GABE_GAP)
		.value("ELEMENT_TYPE_REPORT_UNKNOWN",Element::ELEMENT_TYPE_REPORT_UNKNOWN)
		.value("ELEMENT_TYPE_CORE_SPPS_OCTREE",Element::ELEMENT_TYPE_CORE_SPPS_OCTREE)
		.value("ELEMENT_TYPE_REPORT_RPI",Element::ELEMENT_TYPE_REPORT_RPI)
		.value("ELEMENT_TYPE_SCENE_VOLUMES",Element::ELEMENT_TYPE_SCENE_VOLUMES)
		.value("ELEMENT_TYPE_SCENE_VOLUMES_VOLUME",Element::ELEMENT_TYPE_SCENE_VOLUMES_VOLUME)
		.value("ELEMENT_TYPE_SCENE_VOLUMES_VOLUME_RENDU",Element::ELEMENT_TYPE_SCENE_VOLUMES_VOLUME_RENDU)
		.value("ELEMENT_TYPE_SCENE_VOLUMES_VOLUME_PROPRIETES",Element::ELEMENT_TYPE_SCENE_VOLUMES_VOLUME_PROPRIETES)
		.value("ELEMENT_TYPE_PYTHON_EXTENSION",Element::ELEMENT_TYPE_PYTHON_EXTENSION)
		.value("ELEMENT_TYPE_ELEMENT",Element::ELEMENT_TYPE_ELEMENT)
		.value("ELEMENT_TYPE_CORE_CORE",Element::ELEMENT_TYPE_CORE_CORE)
		.value("ELEMENT_TYPE_REPORT_FILE",Element::ELEMENT_TYPE_REPORT_FILE)
		.value("ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_STANDART",Element::ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_STANDART)
		.value("ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_GAIN",Element::ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_GAIN)
		.value("ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_TR",Element::ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_TR)
		.value("ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_EDT",Element::ELEMENT_TYPE_REPORT_RECEPTEURSSVISUALISATION_EDT)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEURCOUPE",Element::ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEURCOUPE)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEURCOUPE_PROPRIETES",Element::ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEURCOUPE_PROPRIETES)
		.value("ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEURCOUPE_RENDU",Element::ELEMENT_TYPE_SCENE_RECEPTEURSS_RECEPTEURCOUPE_RENDU)
		.value("ELEMENT_TYPE_USER_PREFERENCE_NODE",Element::ELEMENT_TYPE_USER_PREFERENCE_NODE)
		.value("ELEMENT_TYPE_USER_PREFERENCE_ITEM",Element::ELEMENT_TYPE_USER_PREFERENCE_ITEM)
		.value("ELEMENT_TYPE_USER_PREFERENCE_ITEM_ISOTEMPLATE",Element::ELEMENT_TYPE_USER_PREFERENCE_ITEM_ISOTEMPLATE)
		.value("ELEMENT_TYPE_ROW_EXTBFREQ",Element::ELEMENT_TYPE_ROW_EXTBFREQ)
		;

    enum_<Element::GRAPH>("graph")
		.value("GRAPH_FOLDER",Element::GRAPH_FOLDER)
		.value("GRAPH_ITEM",Element::GRAPH_ITEM)
		.value("GRAPH_FOLDER_OPEN",Element::GRAPH_FOLDER_OPEN)
		.value("GRAPH_FITTINGS_OPEN",Element::GRAPH_FITTINGS_OPEN)
		.value("GRAPH_FITTINGS_CLOSE",Element::GRAPH_FITTINGS_CLOSE)
		.value("GRAPH_FITTING_OPEN",Element::GRAPH_FITTING_OPEN)
		.value("GRAPH_FITTING_CLOSE",Element::GRAPH_FITTING_CLOSE)
		.value("GRAPH_PUNCTUAL_RECEIVERS_OPEN",Element::GRAPH_PUNCTUAL_RECEIVERS_OPEN)
		.value("GRAPH_PUNCTUAL_RECEIVERS_CLOSE",Element::GRAPH_PUNCTUAL_RECEIVERS_CLOSE)
		.value("GRAPH_SURFACE_RECEIVERS_OPEN",Element::GRAPH_SURFACE_RECEIVERS_OPEN)
		.value("GRAPH_SURFACE_RECEIVERS_CLOSE",Element::GRAPH_SURFACE_RECEIVERS_CLOSE)
		.value("GRAPH_SOUND_SOURCES_OPEN",Element::GRAPH_SOUND_SOURCES_OPEN)
		.value("GRAPH_SOUND_SOURCES_CLOSE",Element::GRAPH_SOUND_SOURCES_CLOSE)
		.value("GRAPH_SURFACES_OPEN",Element::GRAPH_SURFACES_OPEN)
		.value("GRAPH_SURFACES_CLOSE",Element::GRAPH_SURFACES_CLOSE)
		.value("GRAPH_VOLUMES_CLOSE",Element::GRAPH_VOLUMES_CLOSE)
		.value("GRAPH_VOLUMES_OPEN",Element::GRAPH_VOLUMES_OPEN)
		.value("GRAPH_PROJECT_OPEN",Element::GRAPH_PROJECT_OPEN)
		.value("GRAPH_PROJECT_CLOSE",Element::GRAPH_PROJECT_CLOSE)
		.value("GRAPH_DATA_CLOSE",Element::GRAPH_DATA_CLOSE)
		.value("GRAPH_DATA_OPEN",Element::GRAPH_DATA_OPEN)
		.value("GRAPH_USER_MATERIALS_CLOSE",Element::GRAPH_USER_MATERIALS_CLOSE)
		.value("GRAPH_USER_MATERIALS_OPEN",Element::GRAPH_USER_MATERIALS_OPEN)
		.value("GRAPH_APPLICATION_MATERIALS_CLOSE",Element::GRAPH_APPLICATION_MATERIALS_CLOSE)
		.value("GRAPH_APPLICATION_MATERIALS_OPEN",Element::GRAPH_APPLICATION_MATERIALS_OPEN)
		.value("GRAPH_DATABASE_CLOSE",Element::GRAPH_DATABASE_CLOSE)
		.value("GRAPH_DATABASE_OPEN",Element::GRAPH_DATABASE_OPEN)
		.value("GRAPH_USER_SPECTRUMS_CLOSE",Element::GRAPH_USER_SPECTRUMS_CLOSE)
		.value("GRAPH_USER_SPECTRUMS_OPEN",Element::GRAPH_USER_SPECTRUMS_OPEN)
		.value("GRAPH_APPLICATION_SPECTRUMS_CLOSE",Element::GRAPH_APPLICATION_SPECTRUMS_CLOSE)
		.value("GRAPH_APPLICATION_SPECTRUMS_OPEN",Element::GRAPH_APPLICATION_SPECTRUMS_OPEN)
		.value("GRAPH_MATERIAL_CLOSE",Element::GRAPH_MATERIAL_CLOSE)
		.value("GRAPH_MATERIAL_OPEN",Element::GRAPH_MATERIAL_OPEN)
		.value("GRAPH_STANDARTCORE_CLOSE",Element::GRAPH_STANDARTCORE_CLOSE)
		.value("GRAPH_STANDARTCORE_OPEN",Element::GRAPH_STANDARTCORE_OPEN)
		.value("GRAPH_CORES_CLOSE",Element::GRAPH_CORES_CLOSE)
		.value("GRAPH_CORES_OPEN",Element::GRAPH_CORES_OPEN)
		.value("GRAPH_SPPSCORE_CLOSE",Element::GRAPH_SPPSCORE_CLOSE)
		.value("GRAPH_SPPSCORE_OPEN",Element::GRAPH_SPPSCORE_OPEN)
		.value("GRAPH_DISK_FOLDER_OPEN",Element::GRAPH_DISK_FOLDER_OPEN)
		.value("GRAPH_DISK_FOLDER_CLOSE",Element::GRAPH_DISK_FOLDER_CLOSE)
		.value("GRAPH_ENVIRONMENT",Element::GRAPH_ENVIRONMENT)
		.value("GRAPH_PROJECT_AUTHOR",Element::GRAPH_PROJECT_AUTHOR)
		.value("GRAPH_INFORMATION",Element::GRAPH_INFORMATION)
		.value("GRAPH_DISK_DEFAULT_FILE",Element::GRAPH_DISK_DEFAULT_FILE)
		.value("GRAPH_DISK_GABE",Element::GRAPH_DISK_GABE)
		.value("GRAPH_DISK_RS",Element::GRAPH_DISK_RS)
		.value("GRAPH_DISK_PARTICLE",Element::GRAPH_DISK_PARTICLE)
		.value("GRAPH_EL_CONFIGURATION",Element::GRAPH_EL_CONFIGURATION)
		.value("GRAPH_EL_3D_DISPLAY",Element::GRAPH_EL_3D_DISPLAY)
		.value("GRAPH_EL_POSITION",Element::GRAPH_EL_POSITION)
		.value("GRAPH_EL_TRIANGLE",Element::GRAPH_EL_TRIANGLE)
		.value("GRAPH_SPECTRUM",Element::GRAPH_SPECTRUM)
		.value("GRAPH_ORIGIN",Element::GRAPH_ORIGIN)
		.value("GRAPH_TETMESH_PARAMETERS",Element::GRAPH_TETMESH_PARAMETERS)
		.value("GRAPH_RENDERING_FOLDER_CLOSE",Element::GRAPH_RENDERING_FOLDER_CLOSE)
		.value("GRAPH_RENDERING_FOLDER_OPEN",Element::GRAPH_RENDERING_FOLDER_OPEN)
		.value("GRAPH_ROOT_MATERIALS_OPEN",Element::GRAPH_ROOT_MATERIALS_OPEN)
		.value("GRAPH_ROOT_MATERIALS_CLOSE",Element::GRAPH_ROOT_MATERIALS_CLOSE)
		.value("GRAPH_ROOT_SPECTRUMS_OPEN",Element::GRAPH_ROOT_SPECTRUMS_OPEN)
		.value("GRAPH_ROOT_SPECTRUMS_CLOSE",Element::GRAPH_ROOT_SPECTRUMS_CLOSE)
		.value("GRAPH_PUNCTUAL_RECEIVER_OPEN",Element::GRAPH_PUNCTUAL_RECEIVER_OPEN)
		.value("GRAPH_PUNCTUAL_RECEIVER_CLOSE",Element::GRAPH_PUNCTUAL_RECEIVER_CLOSE)
		.value("GRAPH_SURFACE_RECEIVER_OPEN",Element::GRAPH_SURFACE_RECEIVER_OPEN)
		.value("GRAPH_SURFACE_RECEIVER_CLOSE",Element::GRAPH_SURFACE_RECEIVER_CLOSE)
		.value("GRAPH_SOUND_SOURCE_OPEN",Element::GRAPH_SOUND_SOURCE_OPEN)
		.value("GRAPH_SOUND_SOURCE_CLOSE",Element::GRAPH_SOUND_SOURCE_CLOSE)
		.value("GRAPH_VOLUME_OPEN",Element::GRAPH_VOLUME_OPEN)
		.value("GRAPH_VOLUME_CLOSE",Element::GRAPH_VOLUME_CLOSE)
		.value("GRAPH_PREF_ANIMATION",Element::GRAPH_PREF_ANIMATION)
		.value("GRAPH_PREF_GENERAL",Element::GRAPH_PREF_GENERAL)
		.value("GRAPH_PREF_LEGEND",Element::GRAPH_PREF_LEGEND)
		.value("GRAPH_PREF_NOISE_MAP",Element::GRAPH_PREF_NOISE_MAP)
		.value("GRAPH_PREF_PARTICLES",Element::GRAPH_PREF_PARTICLES)
		.value("GRAPH_USER_PREF_ROOT_CLOSE",Element::GRAPH_USER_PREF_ROOT_CLOSE)
		.value("GRAPH_USER_PREF_ROOT_OPEN",Element::GRAPH_USER_PREF_ROOT_OPEN)
		.value("GRAPH_USER_PREF_MAINCONFIGURATION_OPEN",Element::GRAPH_USER_PREF_MAINCONFIGURATION_OPEN)
		.value("GRAPH_USER_PREF_MAINCONFIGURATION_CLOSE",Element::GRAPH_USER_PREF_MAINCONFIGURATION_CLOSE)
		.value("GRAPH_USER_PREF_HISTORY",Element::GRAPH_USER_PREF_HISTORY)
		.value("GRAPH_LAST_STATIC_GRAPH",Element::GRAPH_LAST_STATIC_GRAPH)
		;
}
#endif
