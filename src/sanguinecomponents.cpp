﻿#include "sanguinecomponents.hpp"

using namespace rack;

extern Plugin* pluginInstance;

// Ports

BananutBlack::BananutBlack() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutBlack.svg")));
}

BananutBlackPoly::BananutBlackPoly() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutBlackPoly.svg")));
}

BananutBlue::BananutBlue() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutBlue.svg")));
}

BananutBluePoly::BananutBluePoly() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutBluePoly.svg")));
}

BananutGreen::BananutGreen() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutGreen.svg")));
}

BananutGreenPoly::BananutGreenPoly() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutGreenPoly.svg")));
}

BananutPurple::BananutPurple() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutPurple.svg")));
}

BananutPurplePoly::BananutPurplePoly() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutPurplePoly.svg")));
}

BananutRed::BananutRed() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutRed.svg")));
}

BananutRedPoly::BananutRedPoly() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutRedPoly.svg")));
}

BananutYellow::BananutYellow() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutYellow.svg")));
}

BananutYellowPoly::BananutYellowPoly() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BananutYellowPoly.svg")));
}

// Knobs

BefacoTinyKnobRed::BefacoTinyKnobRed() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BefacoTinyPointWhite.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BefacoTinyKnobRed_bg.svg")));
}

BefacoTinyKnobBlack::BefacoTinyKnobBlack() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BefacoTinyPointWhite.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/BefacoTinyKnobBlack_bg.svg")));
}

Sanguine1PBlue::Sanguine1PBlue() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PBlue.svg")));
	bg->setSvg(Svg::load(asset::system("res/ComponentLibrary/Rogan1P_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PBlue_fg.svg")));
}

Sanguine1PGrayCap::Sanguine1PGrayCap() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PWhite.svg")));
	bg->setSvg(Svg::load(asset::system("res/ComponentLibrary/Rogan1P_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PGrayCap_fg.svg")));
}

Sanguine1PGreen::Sanguine1PGreen() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PGreen.svg")));
	bg->setSvg(Svg::load(asset::system("res/ComponentLibrary/Rogan1P_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PGreen_fg.svg")));
}

Sanguine1PPurple::Sanguine1PPurple() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PPurple.svg")));
	bg->setSvg(Svg::load(asset::system("res/ComponentLibrary/Rogan1P_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PPurple_fg.svg")));
}

Sanguine1PRed::Sanguine1PRed() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PRed.svg")));
	bg->setSvg(Svg::load(asset::system("res/ComponentLibrary/Rogan1P_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PRed_fg.svg")));
}

Sanguine1PYellow::Sanguine1PYellow() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PYellow.svg")));
	bg->setSvg(Svg::load(asset::system("res/ComponentLibrary/Rogan1P_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PYellow_fg.svg")));
}

Sanguine1PSBlue::Sanguine1PSBlue() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSBlue.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSBlue_fg.svg")));
}

Sanguine1PSGreen::Sanguine1PSGreen() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSGreen.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSGreen_fg.svg")));
}

Sanguine1PSOrange::Sanguine1PSOrange() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSOrange.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSOrange_fg.svg")));
}

Sanguine1PSPurple::Sanguine1PSPurple() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSPurple.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSPurple_fg.svg")));
}

Sanguine1PSRed::Sanguine1PSRed() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSRed.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSRed_fg.svg")));
}

Sanguine1PSYellow::Sanguine1PSYellow() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSYellow.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1PSYellow_fg.svg")));
}

Sanguine1SGray::Sanguine1SGray() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1SGray.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1S_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine1SGray_fg.svg")));
}

Sanguine2PSBlue::Sanguine2PSBlue() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine2PSBlue.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine2PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine2PSBlue_fg.svg")));
}

Sanguine2PSRed::Sanguine2PSRed() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine2PSRed.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine2PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine2PSRed_fg.svg")));
}

Sanguine3PSGreen::Sanguine3PSGreen() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine3PSGreen.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine3PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine3PSGreen_fg.svg")));
}

Sanguine3PSRed::Sanguine3PSRed() {
	setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine3PSRed.svg")));
	bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine3PS_bg.svg")));
	fg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Sanguine3PSRed_fg.svg")));
}

// Switches

SanguineBlackSwitch::SanguineBlackSwitch() {
	addFrame(Svg::load(asset::plugin(pluginInstance, "res/components/SanguineSwitchBlack_0.svg")));
	addFrame(Svg::load(asset::plugin(pluginInstance, "res/components/SanguineSwitchBlack_1.svg")));
	addFrame(Svg::load(asset::plugin(pluginInstance, "res/components/SanguineSwitchBlack_2.svg")));
}

SanguineBezel115::SanguineBezel115() {
	addFrame(Svg::load(asset::plugin(pluginInstance, "res/components/SanguineButton115.svg")));
}

// Displays

SanguineBaseSegmentDisplay::SanguineBaseSegmentDisplay(uint32_t newCharacterCount, Module* theModule) {
	characterCount = newCharacterCount;
	module = theModule;
	#ifndef METAMODULE
	fontSize = 10;
	#else
	fontSize = 18;
	#endif
}

void SanguineBaseSegmentDisplay::draw(const DrawArgs& args) {
	// Background
	nvgBeginPath(args.vg);
	nvgRoundedRect(args.vg, 0.f, 0.f, box.size.x, box.size.y, 5.f);
	nvgFillColor(args.vg, backgroundColor);
	nvgFill(args.vg);
	nvgStrokeWidth(args.vg, 1.f);
	nvgStrokeColor(args.vg, borderColor);
	nvgStroke(args.vg);

	Widget::draw(args);
}

void SanguineBaseSegmentDisplay::drawLayer(const DrawArgs& args, int layer) {
	if (layer == 1) {
		std::shared_ptr<Font> font = APP->window->loadFont(asset::plugin(pluginInstance, fontName));
		if (font) {
			// Text
			nvgFontSize(args.vg, fontSize);
			nvgFontFaceId(args.vg, font->handle);
			nvgTextLetterSpacing(args.vg, kerning);

			Vec textPos = textMargin;
			#ifndef METAMODULE
			nvgFillColor(args.vg, nvgTransRGBA(textColor, backgroundCharAlpha));
			// Background of all characters
			std::string backgroundText = "";
			for (uint32_t character = 0; character < characterCount; ++character) {
				backgroundText += backgroundCharacter;
			}
			nvgText(args.vg, textPos.x, textPos.y, backgroundText.c_str(), NULL);
			nvgFillColor(args.vg, textColor);
			#endif

			std::string displayValue = "";

			// TODO: Ensure we draw only characterCount chars.

			if (module && !module->isBypassed()) {
				switch (displayType)
				{
				case DISPLAY_NUMERIC:
					if (values.numberValue) {
						displayValue = std::to_string(*values.numberValue);
						if (*values.numberValue < 10 && leadingZero) {
							displayValue.insert(0, 1, '0');
						}
					}
					break;
				case DISPLAY_STRING:
					if (values.displayText) {
						displayValue = *values.displayText;
					}
					break;
				}

				nvgText(args.vg, textPos.x, textPos.y, displayValue.c_str(), NULL);
				if (drawHalo) {
					drawRectHalo(args, box.size, textColor, haloOpacity, 0.f);
				}
			} else if (!module) {
				switch (displayType)
				{
				case DISPLAY_NUMERIC:
					displayValue = std::to_string(fallbackNumber);
					if (fallbackNumber < 10 && leadingZero) {
						displayValue.insert(0, 1, '0');
					}
					break;
				case DISPLAY_STRING:
					displayValue = fallbackString;
					break;
				}

				nvgText(args.vg, textPos.x, textPos.y, displayValue.c_str(), NULL);
			}
		}
	}
	Widget::drawLayer(args, layer);
}

SanguineAlphaDisplay::SanguineAlphaDisplay(uint32_t newCharacterCount, Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineBaseSegmentDisplay(newCharacterCount, theModule) {
	fontName = "res/components/Segment14.ttf";
	box.size = mm2px(Vec(newCharacterCount * 12.6f, 21.2f));
	fontSize = 40;

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}

	backgroundCharacter = '~';
	textMargin = Vec(9.f, 52.f);
	kerning = 2.5f;
}

SanguineLedNumberDisplay::SanguineLedNumberDisplay(uint32_t newCharacterCount, Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineBaseSegmentDisplay(newCharacterCount, theModule) {
	fontName = "res/components/Segment7Standard.otf";
	box.size = mm2px(Vec(newCharacterCount * 7.75f, 15.f));
	fontSize = 33.95f;

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}

	backgroundCharacter = '8';
	textMargin = Vec(2.f, 36.f);
	kerning = 2.5f;

	displayType = DISPLAY_NUMERIC;
}

SanguineMatrixDisplay::SanguineMatrixDisplay(uint32_t newCharacterCount, Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineBaseSegmentDisplay(newCharacterCount, theModule)
{
	fontName = "res/components/sanguinematrix.ttf";
	box.size = mm2px(Vec(newCharacterCount * 5.70275f, 10.16f));
	#ifndef METAMODULE
	fontSize = 16.45f;
	#else
	fontSize = 28;
	#endif
	haloOpacity = 55;

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}

	#ifdef METAMODULE
	box.pos = Vec(box.pos.x - 10, box.pos.y + 10);
	#endif

	backgroundCharacter = "\u2588";
	textMargin = Vec(5, 24);
	kerning = 2.f;
}

SanguineTinyNumericDisplay::SanguineTinyNumericDisplay(uint32_t newCharacterCount, Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineLedNumberDisplay(newCharacterCount, theModule, X, Y, createCentered) {
	displayType = DISPLAY_NUMERIC;
	box.size = mm2px(Vec(newCharacterCount * 6.45f, 8.f));
	fontSize = 21.4f;

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}

	backgroundCharacter = '8';
	textMargin = Vec(5, 20);
	kerning = 2.5f;
};

Sanguine96x32OLEDDisplay::Sanguine96x32OLEDDisplay(Module* theModule, const float X, const float Y, bool createCentered) :
	fontName("res/components/sanguinematrix.ttf") {
	box.size = mm2px(Vec(16.298f, 5.418f));

	module = theModule;

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}

	#ifdef METAMODULE
	// Offset the y pos by a few pixels
	box.pos = Vec(box.pos.x, box.pos.y + 6);
	#endif
}

void Sanguine96x32OLEDDisplay::draw(const DrawArgs& args) {
	// Background
	NVGcolor backgroundColor = nvgRGB(10, 10, 10);
	NVGcolor borderColor = nvgRGB(100, 100, 100);
	nvgBeginPath(args.vg);
	nvgRect(args.vg, 0.f, 0.f, box.size.x, box.size.y);
	nvgFillColor(args.vg, backgroundColor);
	nvgFill(args.vg);
	nvgStrokeWidth(args.vg, 1.f);
	nvgStrokeColor(args.vg, borderColor);
	nvgStroke(args.vg);

	Widget::draw(args);
}

void Sanguine96x32OLEDDisplay::drawLayer(const DrawArgs& args, int layer) {
	if (layer == 1) {
		std::shared_ptr<Font> font = APP->window->loadFont(asset::plugin(pluginInstance, fontName));
		if (font) {
			// Text
			#ifndef METAMODULE
			nvgFontSize(args.vg, 6);
			#else
			nvgFontSize(args.vg, 14);
			#endif
			nvgFontFaceId(args.vg, font->handle);

			nvgFillColor(args.vg, textColor);

			Vec textPos = Vec(3.f, 7.5f);

			if (module && !module->isBypassed()) {
				if (oledText && !(oledText->empty())) {
					std::string textCopy;
					textCopy.assign(oledText->data());
					bool multiLine = oledText->size() > 8;
					if (multiLine) {
						std::string displayText = "";
						static const int kCharactersPerLine = 8;
						for (uint32_t character = 0; character < kCharactersPerLine; ++character) {
							displayText += textCopy[character];
						}
						textCopy.erase(0, 8);
						nvgText(args.vg, textPos.x, textPos.y, displayText.c_str(), NULL);
						#ifndef METAMODULE // Truncated text for better readability on MM
						textPos = Vec(3.f, 14.5f);
						displayText = "";
						for (uint32_t character = 0; (character < kCharactersPerLine || character < textCopy.length()); ++character) {
							displayText += textCopy[character];
						}
						nvgText(args.vg, textPos.x, textPos.y, displayText.c_str(), NULL);
						#endif
					} else {
						nvgText(args.vg, textPos.x, textPos.y, oledText->c_str(), NULL);
					}
					//drawRectHalo(args, box.size, textColor, 55, 0.f);
				}
			} else {
				if (!module) {
					nvgText(args.vg, textPos.x, textPos.y, fallbackString.c_str(), NULL);
				}
			}
		}
	}
	Widget::drawLayer(args, layer);
}

// Switches

SanguineLightUpSwitch::SanguineLightUpSwitch() {
	momentary = true;
	shadow->opacity = 0.f;
	sw->wrap();
	box.size = sw->box.size;
}

void SanguineLightUpSwitch::addHalo(NVGcolor haloColor) {
	halos.push_back(haloColor);
}

void SanguineLightUpSwitch::drawLayer(const DrawArgs& args, int layer) {
	if (layer == 1) {
		if (module && !module->isBypassed()) {
			uint32_t frameNum = getParamQuantity()->getValue();
			std::shared_ptr<window::Svg> svg = frames[static_cast<int>(frameNum)];
			if (!svg) {
				return;
			}
			nvgGlobalCompositeBlendFunc(args.vg, NVG_ONE_MINUS_DST_COLOR, NVG_ONE);
#ifndef METAMODULE
			rack::window::svgDraw(args.vg, svg->handle);
#endif
			if (frameNum < halos.size()) {
				drawCircularHalo(args, box.size, halos[frameNum], 175.f, 8.f);
			}
		}
	}
	Widget::drawLayer(args, layer);
}

SanguineLightUpRGBSwitch::SanguineLightUpRGBSwitch() {
	momentary = true;
	shadow->opacity = 0.f;
	sw->wrap();
	box.size = sw->box.size;
	transformWidget = new TransformWidget;
	fb->addChildAbove(transformWidget, sw);
	glyph = new SvgWidget();
	transformWidget->addChild(glyph);
}

void SanguineLightUpRGBSwitch::addColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
	colors.push_back(rgbColorToInt(red, green, blue, alpha));
}

void SanguineLightUpRGBSwitch::addColor(unsigned int color) {
	colors.push_back(color);
}

void SanguineLightUpRGBSwitch::addHalo(NVGcolor haloColor) {
	halos.push_back(haloColor);
}

void SanguineLightUpRGBSwitch::drawLayer(const DrawArgs& args, int layer) {
	// Programmers responsibility: set both a background and glyph or Rack will crash here. You've been warned.
	if (layer == 1) {
		if (module && !module->isBypassed() && sw->svg) {
#ifndef METAMODULE
			svgDraw(args.vg, sw->svg->handle);
			uint32_t frameNum = getParamQuantity()->getValue();
			nvgGlobalCompositeBlendFunc(args.vg, NVG_ONE_MINUS_DST_COLOR, NVG_ONE);
			/*
			Programmer responsibility : make sure there are enough colors here for every switch state
			or Rack will go bye-bye.
			*/
			fillSvgSolidColor(glyph->svg->handle, colors[frameNum]);
			nvgSave(args.vg);
			nvgTransform(args.vg, transformWidget->transform[0], transformWidget->transform[1], transformWidget->transform[2],
				transformWidget->transform[3], transformWidget->transform[4], transformWidget->transform[5]);
			svgDraw(args.vg, glyph->svg->handle);
			nvgRestore(args.vg);
			/*
			Programmer responsibility: make sure there are enough halos here for  every switch state
			or Rack will go to synth heaven.
			*/
			drawCircularHalo(args, box.size, halos[frameNum], 175.f, 8.f);
#endif
		}
		// For module browser
		else if (!module && sw->svg) {
#ifndef METAMODULE
			svgDraw(args.vg, sw->svg->handle);
			fillSvgSolidColor(glyph->svg->handle, colors[0]);
			nvgSave(args.vg);
			nvgTransform(args.vg, transformWidget->transform[0], transformWidget->transform[1], transformWidget->transform[2],
				transformWidget->transform[3], transformWidget->transform[4], transformWidget->transform[5]);
			svgDraw(args.vg, glyph->svg->handle);
			nvgRestore(args.vg);
#endif
		}
	}
	Widget::drawLayer(args, layer);
}

void SanguineLightUpRGBSwitch::setBackground(const std::string& fileName) {
	sw->setSvg(Svg::load(asset::plugin(pluginInstance, fileName)));
	sw->wrap();
	box.size = sw->box.size;
	fb->box.size = sw->box.size;
	// Move shadow downward by 10%
	shadow->box.size = sw->box.size;
	shadow->box.pos = math::Vec(0.f, sw->box.size.y * 0.10f);
}

void SanguineLightUpRGBSwitch::setGlyph(const std::string& fileName, const float offsetX, const float offsetY) {
	glyph->setSvg(Svg::load(asset::plugin(pluginInstance, fileName)));
	glyph->wrap();
	transformWidget->box.size = glyph->box.size;
	transformWidget->identity();
	transformWidget->translate(millimetersToPixelsVec(offsetX, offsetY));
}

Befaco2StepSwitch::Befaco2StepSwitch() {
	addFrame(Svg::load(asset::system("res/ComponentLibrary/BefacoSwitch_0.svg")));
	addFrame(Svg::load(asset::system("res/ComponentLibrary/BefacoSwitch_2.svg")));
}

// Lights

SanguineMultiColoredShapedLight::SanguineMultiColoredShapedLight() {
	module = nullptr;
}

/* Returns the parameterized value of the line p2--p3 where it intersects with p0--p1 */
float SanguineMultiColoredShapedLight::getLineCrossing(math::Vec p0, math::Vec p1, math::Vec p2, math::Vec p3) {
	math::Vec b = p2.minus(p0);
	math::Vec d = p1.minus(p0);
	math::Vec e = p3.minus(p2);
	float m = d.x * e.y - d.y * e.x;
	// Check if lines are parallel, or if either pair of points are equal
	if (std::abs(m) < 1e-6) {
		return NAN;
	}
	return -(d.x * b.y - d.y * b.x) / m;
}

NVGcolor SanguineMultiColoredShapedLight::getNVGColor(uint32_t color) {
	return nvgRGBA((color >> 0) & 0xff, (color >> 8) & 0xff, (color >> 16) & 0xff, (color >> 24) & 0xff);
}

NVGpaint SanguineMultiColoredShapedLight::getPaint(NVGcontext* vg, NSVGpaint* p, NVGcolor innerColor, NVGcolor outerColor) {
	assert(p->type == NSVG_PAINT_LINEAR_GRADIENT || p->type == NSVG_PAINT_RADIAL_GRADIENT);
	NSVGgradient* g = p->gradient;
	assert(g->nstops >= 1);

	float inverse[6];
	nvgTransformInverse(inverse, g->xform);
	math::Vec s, e;
	// Is it always the case that the gradient should be transformed from (0, 0) to (0, 1)?
	nvgTransformPoint(&s.x, &s.y, inverse, 0, 0);
	nvgTransformPoint(&e.x, &e.y, inverse, 0, 1);

	NVGpaint paint;
	if (p->type == NSVG_PAINT_LINEAR_GRADIENT) {
		paint = nvgLinearGradient(vg, s.x, s.y, e.x, e.y, innerColor, outerColor);
	} else {
		paint = nvgRadialGradient(vg, s.x, s.y, 0.f, 160.f, innerColor, outerColor);
	}
	return paint;
};

void SanguineMultiColoredShapedLight::drawLayer(const DrawArgs& args, int layer) {
	if (innerColor && svg) {
		if (layer == 1) {
			if (module && !module->isBypassed()) {
				int shapeIndex = 0;
#ifndef METAMODULE
				const NSVGimage* mySvg = svg->handle;

				// Iterate shape linked list
				for (NSVGshape* shape = mySvg->shapes; shape; shape = shape->next, ++shapeIndex) {

					// Visibility
					if (!(shape->flags & NSVG_FLAGS_VISIBLE)) {
						continue;
					}

					nvgSave(args.vg);

					// Opacity
					if (shape->opacity < 1.f) {
						nvgAlpha(args.vg, shape->opacity);
					}

					// Build path
					nvgBeginPath(args.vg);

					// Iterate path linked list
					for (NSVGpath* path = shape->paths; path; path = path->next) {

						nvgMoveTo(args.vg, path->pts[0], path->pts[1]);
						for (int i = 1; i < path->npts; i += 3) {
							float* p = &path->pts[2 * i];
							nvgBezierTo(args.vg, p[0], p[1], p[2], p[3], p[4], p[5]);
						}

						// Close path
						if (path->closed) {
							nvgClosePath(args.vg);
						}

						// Compute whether this is a hole or a solid.
						// Assume that no paths are crossing (usually true for normal SVG graphics).
						// Also assume that the topology is the same if we use straight lines rather than Beziers (not always the case but usually true).
						// Using the even-odd fill rule, if we draw a line from a point on the path to a point outside the boundary (e.g. top left) and count the number of times it crosses another path, the parity of this count determines whether the path is a hole (odd) or solid (even).
						int crossings = 0;
						math::Vec p0 = math::Vec(path->pts[0], path->pts[1]);
						math::Vec p1 = math::Vec(path->bounds[0] - 1.f, path->bounds[1] - 1.f);
						// Iterate all other paths
						for (NSVGpath* path2 = shape->paths; path2; path2 = path2->next) {
							if (path2 == path) {
								continue;
							}

							// Iterate all lines on the path
							if (path2->npts < 4) {
								continue;
							}
							for (int i = 1; i < path2->npts + 3; i += 3) {
								float* p = &path2->pts[2 * i];
								// The previous point
								math::Vec p2 = math::Vec(p[-2], p[-1]);
								// The current point
								math::Vec p3 = (i < path2->npts) ? math::Vec(p[4], p[5]) : math::Vec(path2->pts[0], path2->pts[1]);
								float crossing = getLineCrossing(p0, p1, p2, p3);
								float crossing2 = getLineCrossing(p2, p3, p0, p1);
								if (0.f <= crossing && crossing < 1.f && 0.f <= crossing2) {
									++crossings;
								}
							}
						}

						if (crossings % 2 == 0) {
							nvgPathWinding(args.vg, NVG_SOLID);
						} else {
							nvgPathWinding(args.vg, NVG_HOLE);
						}
					}

					// Fill shape with external gradient
					if (svgGradient) {
#ifndef METAMODULE
						NSVGimage* myGradient = svgGradient->handle;
						if (myGradient->shapes->fill.type) {
							switch (myGradient->shapes->fill.type) {
							case NSVG_PAINT_COLOR: {
								nvgFillColor(args.vg, *innerColor);
								break;
							}
							case NSVG_PAINT_LINEAR_GRADIENT:
							case NSVG_PAINT_RADIAL_GRADIENT: {
								if (outerColor) {
									nvgFillPaint(args.vg, getPaint(args.vg, &myGradient->shapes->fill, *innerColor, *outerColor));
								} else {
									nvgFillColor(args.vg, *innerColor);
								}
								break;
							}
							}
							nvgFill(args.vg);
						}
#endif
					} else {
						NVGcolor color = nvgRGB(0, 250, 0);
						nvgFillColor(args.vg, color);
						nvgFill(args.vg);
					}

					// Stroke shape
					if (shape->stroke.type) {
						nvgStrokeWidth(args.vg, shape->strokeWidth);
						nvgLineCap(args.vg, (NVGlineCap)shape->strokeLineCap);
						nvgLineJoin(args.vg, static_cast<int>(shape->strokeLineJoin));

						switch (shape->stroke.type) {
						case NSVG_PAINT_COLOR: {
							NVGcolor color = getNVGColor(shape->stroke.color);
							nvgStrokeColor(args.vg, color);
						} break;
						case NSVG_PAINT_LINEAR_GRADIENT: {
							break;
						}
						}
						nvgStroke(args.vg);
					}

					nvgRestore(args.vg);
				}
#endif

				if (haloType) {
					switch (*haloType)
					{
					case HALO_CIRCULAR:
						drawCircularHalo(args, box.size, *outerColor, haloOpacity, haloRadiusFactor);
						break;

					case HALO_RECTANGULAR:
						drawRectHalo(args, box.size, *outerColor, haloOpacity, haloX);
						break;

					default:
						break;
					}
				}
			}
		}
	}
}

// Decorations
SanguineShapedLight::SanguineShapedLight(Module* theModule, const std::string& shapeFileName, const float X, const float Y, bool createCentered) {
#ifndef METAMODULE
	module = theModule;

	setSvg(Svg::load(asset::plugin(pluginInstance, shapeFileName)));

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}
#endif
}

void SanguineShapedLight::draw(const DrawArgs& args) {
#ifndef METAMODULE
	// Draw lights in module browser.
	if (!module) {
		Widget::draw(args);
	}
	// else do not call Widget::draw: it draws on the wrong layer.
#endif
}

void SanguineShapedLight::drawLayer(const DrawArgs& args, int layer) {
#ifndef METAMODULE
	if (layer == 1) {
		//From SvgWidget::draw()
		if (!sw->svg) {
			return;
		}
		if (module && !module->isBypassed()) {
			nvgGlobalCompositeBlendFunc(args.vg, NVG_ONE_MINUS_DST_COLOR, NVG_ONE);
#ifndef METAMODULE
			rack::window::svgDraw(args.vg, sw->svg->handle);
#endif
		}
	}
	Widget::drawLayer(args, layer);
#endif
}

SanguineStaticRGBLight::SanguineStaticRGBLight(Module* theModule, const std::string& shapeFileName, const float X, const float Y,
	bool createCentered, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
	module = theModule;
	setSvg(Svg::load(asset::plugin(pluginInstance, shapeFileName)));
	lightColor = (alpha << 24) + (blue << 16) + (green << 8) + red;

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}
}

SanguineStaticRGBLight::SanguineStaticRGBLight(Module* theModule, const std::string& shapeFileName, const float X, const float Y,
	bool createCentered, unsigned int newLightColor) {
	module = theModule;
	setSvg(Svg::load(asset::plugin(pluginInstance, shapeFileName)));
	lightColor = newLightColor;

	if (createCentered) {
		box.pos = centerWidgetInMillimeters(this, X, Y);
	} else {
		box.pos = mm2px(Vec(X, Y));
	}
}

// draw and drawLayer logic partially based on code by BaconPaul and Hemmer.
void SanguineStaticRGBLight::draw(const DrawArgs& args) {
	// Draw lights in module browser.
	if (!module) {
		if (!sw->svg) {
			return;
		}

		// TODO: MetaModule draws nothing here.
#ifndef METAMODULE
		const NSVGimage* mySvg = sw->svg->handle;

		fillSvgSolidColor(mySvg, lightColor);
		svgDraw(args.vg, sw->svg->handle);
#endif
	}
	// else do not call Widget::draw: it draws on the wrong layer.
}

void SanguineStaticRGBLight::drawLayer(const DrawArgs& args, int layer) {
	if (layer == 1) {
		//From SvgWidget::draw()
		if (!sw->svg) {
			return;
		}
		if (module && !module->isBypassed()) {
#ifndef METAMODULE
			const NSVGimage* mySvg = sw->svg->handle;

			fillSvgSolidColor(mySvg, lightColor);
			nvgGlobalCompositeBlendFunc(args.vg, NVG_ONE_MINUS_DST_COLOR, NVG_ONE);

			svgDraw(args.vg, sw->svg->handle);
#endif
		}
	}
	// TODO: MetaModule draws a gray shape, if anything.
	Widget::drawLayer(args, layer);
}

SanguineMonoInputLight::SanguineMonoInputLight(Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineStaticRGBLight(theModule, "res/in_light.svg", X, Y, createCentered, kSanguineYellowLight) {
}

SanguineMonoOutputLight::SanguineMonoOutputLight(Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineStaticRGBLight(theModule, "res/out_light.svg", X, Y, createCentered, kSanguineYellowLight) {
}

SanguinePolyInputLight::SanguinePolyInputLight(Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineStaticRGBLight(theModule, "res/in_light.svg", X, Y, createCentered, kSanguineBlueLight) {
}

SanguinePolyOutputLight::SanguinePolyOutputLight(Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineStaticRGBLight(theModule, "res/out_light.svg", X, Y, createCentered, kSanguineBlueLight) {
}

SanguineBloodLogoLight::SanguineBloodLogoLight(Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineShapedLight(theModule, "res/blood_glowy.svg", X, Y, createCentered) {
}

SanguineMonstersLogoLight::SanguineMonstersLogoLight(Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineShapedLight(theModule, "res/monsters_lit.svg", X, Y, createCentered) {
}

SanguineMutantsLogoLight::SanguineMutantsLogoLight(Module* theModule, const float X, const float Y, bool createCentered) :
	SanguineShapedLight(theModule, "res/mutants_glowy.svg", X, Y, createCentered) {
}

// Panels

SanguinePanel::SanguinePanel(const std::string& newBackgroundFileName, const std::string& newForegroundFileName) {
#ifndef METAMODULE
	setBackground(Svg::load(asset::plugin(pluginInstance, newBackgroundFileName)));
	foreground = new SvgWidget();
	foreground->setSvg(Svg::load(asset::plugin(pluginInstance, newForegroundFileName)));
	fb->addChildBelow(foreground, panelBorder);
#else
	setBackground(Svg::load(asset::plugin(pluginInstance, newBackgroundFileName)));
#endif
}

void SanguinePanel::addLayer(const std::string& layerFileName) {
	SvgWidget* layer = new SvgWidget();
	layer->setSvg(Svg::load(asset::plugin(pluginInstance, layerFileName)));
	fb->addChildBelow(layer, panelBorder);
}

// Modules

void SanguineModule::dataFromJson(json_t* rootJ) {
	getJsonBoolean(rootJ, "uniqueSanguineTheme", bUniqueTheme);

	if (bUniqueTheme) {
		json_int_t themeValue = 0;
		if (getJsonInt(rootJ, "sanguineModuleTheme", themeValue)) {
			currentTheme = FaceplateThemes(themeValue);
		}
	}
}

json_t* SanguineModule::dataToJson() {
	json_t* rootJ = json_object();
	setJsonBoolean(rootJ, "uniqueSanguineTheme", bUniqueTheme);
	setJsonInt(rootJ, "sanguineModuleTheme", static_cast<int>(currentTheme));

	return rootJ;
}

void SanguineModule::setModuleTheme(int themeNum) {
	currentTheme = FaceplateThemes(themeNum);
	bUniqueTheme = true;
}

void SanguineModule::addExpander(Model* model, ModuleWidget* parentModuleWidget, ExpanderPositions expanderPosition) {
	Module* module = model->createModule();
	APP->engine->addModule(module);
	ModuleWidget* moduleWidget = model->createModuleWidget(module);
	APP->scene->rack->setModulePosForce(moduleWidget, Vec(parentModuleWidget->box.pos.x +
		(expanderPosition == EXPANDER_LEFT ? -moduleWidget->box.size.x : parentModuleWidget->box.size.x), parentModuleWidget->box.pos.y));
	APP->scene->rack->addModule(moduleWidget);
	history::ModuleAdd* undoHistory = new history::ModuleAdd;
	undoHistory->name = "add " + model->name + " expander";
	undoHistory->setModule(moduleWidget);
	APP->history->push(undoHistory);
}

// Module widgets

void SanguineModuleWidget::makePanel() {
	BackplateColors themeBackplateColor = PLATE_PURPLE;
	FaceplateThemes faceplateTheme = defaultTheme;

	// Programmer responsibility: if the module is not a SanguineModule, Rack will jump off a cliff.
	// Now you know.
	SanguineModule* sanguineModule = dynamic_cast<SanguineModule*>(this->module);

	if (sanguineModule) {
		if (!sanguineModule->bUniqueTheme) {
			sanguineModule->setModuleTheme(faceplateTheme);
		} else {
			faceplateTheme = sanguineModule->currentTheme;
		}
	}

	switch (faceplateTheme)
	{
	case THEME_NONE:
	case THEME_VITRIOL:
		themeBackplateColor = backplateColor;
		break;
	case THEME_PLUMBAGO:
		themeBackplateColor = PLATE_BLACK;
		break;
	}

#ifndef METAMODULE
	std::string backplateFileName = "res/backplate_" + panelSizeStrings[panelSize] + backplateColorStrings[themeBackplateColor] + ".svg";

	std::string faceplateFileName = "res/" + moduleName;

	if (bFaceplateSuffix) {
		faceplateFileName += "_faceplate";
	}

	faceplateFileName += faceplateThemeStrings[faceplateTheme] + ".svg";

	SanguinePanel* panel = new SanguinePanel(backplateFileName, faceplateFileName);
#else
	/* NOTE: MetaModule uses a single, 240 pixels high, png with all elements instead of
	   layered faceplates!
	   E.g: aleae_faceplate_metamodule_plumbago.png */

	   // Keep the "res" folder: MetaModule replaces it by itself.
	std::string backplateFileName = "res/" + moduleName;

	if (bFaceplateSuffix) {
		backplateFileName += "_faceplate";
	}

	backplateFileName += "_metamodule";

	backplateFileName += faceplateThemeStrings[faceplateTheme];

	// Keep this as svg: MetaModule replaces it by itself.
	backplateFileName += ".svg";

	SanguinePanel* panel = new SanguinePanel(backplateFileName, "");
#endif

#ifndef METAMODULE
	if (bHasCommon) {
		panel->addLayer("res/" + moduleName + "_common.svg");
	}
#endif

	setPanel(panel);
}

void SanguineModuleWidget::appendContextMenu(Menu* menu) {
	SanguineModule* sanguineModule = dynamic_cast<SanguineModule*>(this->module);
	assert(sanguineModule);

	menu->addChild(new MenuSeparator);

	menu->addChild(createSubmenuItem("Sanguine Modules themes", "",
		[=](Menu* menu) {
			menu->addChild(createMenuLabel("Applies to current module"));
			menu->addChild(createIndexSubmenuItem("Module", faceplateMenuLabels,
				[=]() { return static_cast<int>(sanguineModule->currentTheme); },
				[=](int i) { sanguineModule->setModuleTheme(i); }
			));

			menu->addChild(new MenuSeparator);

			menu->addChild(createMenuLabel("Applies across Sanguine modules"));
			menu->addChild(createIndexSubmenuItem("Default", faceplateMenuLabels,
				[=]() { return static_cast<int>(defaultTheme); },
				[=](int i) { setDefaultTheme(i); sanguineModule->setModuleTheme(i); }
			));
		}
	));
}

void SanguineModuleWidget::addScrews(int screwIds) {
	if (screwIds & SCREW_TOP_LEFT) {
		addChild(createWidget<ScrewBlack>(Vec(RACK_GRID_WIDTH, 0)));
	}
	if (screwIds & SCREW_TOP_RIGHT) {
		addChild(createWidget<ScrewBlack>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, 0)));
	}
	if (screwIds & SCREW_BOTTOM_LEFT) {
		addChild(createWidget<ScrewBlack>(Vec(RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));
	}
	if (screwIds & SCREW_BOTTOM_RIGHT) {
		addChild(createWidget<ScrewBlack>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));
	}
}

void SanguineModuleWidget::step() {
	SanguineModule* sanguineModule = dynamic_cast<SanguineModule*>(this->module);
	if (module) {
		if (sanguineModule->currentTheme != sanguineModule->previousTheme) {
			sanguineModule->previousTheme = sanguineModule->currentTheme;
			makePanel();
		}
	}
	Widget::step();
}

FaceplateThemes defaultTheme = THEME_VITRIOL;