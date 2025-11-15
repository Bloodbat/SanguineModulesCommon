#include "themes.hpp"
#include "sanguinejson.hpp"

namespace sanguineThemes {
	// Config file stuff: adapted from Venom's plugin.

	static std::string sanguineConfigFileName = rack::asset::user("SanguineModules.json");

	void getDefaultSanguineTheme() {
		FILE* configFile = fopen(sanguineConfigFileName.c_str(), "r");
		if (configFile) {
			json_error_t error;
			json_t* rootJ = json_loadf(configFile, 0, &error);

			json_int_t themeValue;
			if (getJsonInt(rootJ, "defaultSanguineTheme", themeValue)) {
				defaultTheme = FaceplateThemes(themeValue);
			}

			fclose(configFile);
			json_decref(rootJ);
		}
	}

	void setDefaultSanguineTheme(int themeNum) {
		if (defaultTheme != FaceplateThemes(themeNum)) {
			FILE* configFile = fopen(sanguineConfigFileName.c_str(), "w");
			if (configFile) {
				defaultTheme = FaceplateThemes(themeNum);
				json_t* rootJ = json_object();
				setJsonInt(rootJ, "defaultSanguineTheme", static_cast<int>(defaultTheme));
				json_dumpf(rootJ, configFile, JSON_INDENT(2) | JSON_REAL_PRECISION(9));
				fclose(configFile);
				json_decref(rootJ);
			}
		}
	}
}