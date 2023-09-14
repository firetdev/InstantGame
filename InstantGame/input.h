#pragma once

#include <map>
#include <string>
#include <SFML/Graphics.hpp>

namespace Input
{
    std::map<std::string, bool> keys;
    std::string keyToString(unsigned int keycode)
    {
        switch(keycode)
        {
            case sf::Keyboard::Escape: return "Escape"; break;
            case sf::Keyboard::LControl: return "LControl"; break;
            case sf::Keyboard::LShift: return "LShift"; break;
            case sf::Keyboard::LAlt: return "LAlt"; break;
            case sf::Keyboard::LSystem: return "LSystem"; break;
            case sf::Keyboard::RControl: return "RControl"; break;
            case sf::Keyboard::RShift: return "RShift"; break;
            case sf::Keyboard::RAlt: return "RAlt"; break;
            case sf::Keyboard::RSystem: return "RSystem"; break;
            case sf::Keyboard::Menu: return "Menu"; break;
            case sf::Keyboard::LBracket: return "LBracket"; break;
            case sf::Keyboard::RBracket: return "RBracket"; break;
            case sf::Keyboard::SemiColon: return ";"; break;
            case sf::Keyboard::Comma: return ","; break;
            case sf::Keyboard::Period: return "."; break;
            case sf::Keyboard::Quote: return "\'"; break;
            case sf::Keyboard::Slash: return "/"; break;
            case sf::Keyboard::BackSlash: return "\\"; break;
            case sf::Keyboard::Tilde: return "~"; break;
            case sf::Keyboard::Equal: return "="; break;
            case sf::Keyboard::Dash: return "-"; break;
            case sf::Keyboard::Space: return "Space"; break;
            case sf::Keyboard::Return: return "Return"; break;
            case sf::Keyboard::Backspace: return "Back"; break;
            case sf::Keyboard::Tab: return "Tab"; break;
            case sf::Keyboard::PageUp: return "Page Up"; break;
            case sf::Keyboard::PageDown: return "Page Down"; break;
            case sf::Keyboard::End: return "End"; break;
            case sf::Keyboard::Home: return "Home"; break;
            case sf::Keyboard::Insert: return "Insert"; break;
            case sf::Keyboard::Delete: return "Delete"; break;
            case sf::Keyboard::Add: return "+"; break;
            case sf::Keyboard::Left: return "Left"; break;
            case sf::Keyboard::Right: return "Right"; break;
            case sf::Keyboard::Up: return "Up"; break;
            case sf::Keyboard::Down: return "Down"; break;
            case sf::Keyboard::Numpad0: return "0"; break;
            case sf::Keyboard::Numpad1: return "1"; break;
            case sf::Keyboard::Numpad2: return "2"; break;
            case sf::Keyboard::Numpad3: return "3"; break;
            case sf::Keyboard::Numpad4: return "4"; break;
            case sf::Keyboard::Numpad5: return "5"; break;
            case sf::Keyboard::Numpad6: return "6"; break;
            case sf::Keyboard::Numpad7: return "7"; break;
            case sf::Keyboard::Numpad8: return "8"; break;
            case sf::Keyboard::Numpad9: return "9"; break;
            case sf::Keyboard::F1: return "F1"; break;
            case sf::Keyboard::F2: return "F2"; break;
            case sf::Keyboard::F3: return "F3"; break;
            case sf::Keyboard::F4: return "F4"; break;
            case sf::Keyboard::F5: return "F5"; break;
            case sf::Keyboard::F6: return "F6"; break;
            case sf::Keyboard::F7: return "F7"; break;
            case sf::Keyboard::F8: return "F8"; break;
            case sf::Keyboard::F9: return "F9"; break;
            case sf::Keyboard::F10: return "F10"; break;
            case sf::Keyboard::F11: return "F11"; break;
            case sf::Keyboard::F12: return "F12"; break;
            case sf::Keyboard::F13: return "F13"; break;
            case sf::Keyboard::F14: return "F14"; break;
            case sf::Keyboard::F15: return "F15"; break;
            case sf::Keyboard::Pause: return "Pause"; break;
            case sf::Keyboard::A: return "a"; break;
            case sf::Keyboard::B: return "b"; break;
            case sf::Keyboard::C: return "c"; break;
            case sf::Keyboard::D: return "d"; break;
            case sf::Keyboard::E: return "e"; break;
            case sf::Keyboard::F: return "f"; break;
            case sf::Keyboard::G: return "g"; break;
            case sf::Keyboard::H: return "h"; break;
            case sf::Keyboard::I: return "i"; break;
            case sf::Keyboard::J: return "j"; break;
            case sf::Keyboard::K: return "k"; break;
            case sf::Keyboard::L: return "l"; break;
            case sf::Keyboard::M: return "m"; break;
            case sf::Keyboard::N: return "n"; break;
            case sf::Keyboard::O: return "o"; break;
            case sf::Keyboard::P: return "p"; break;
            case sf::Keyboard::Q: return "q"; break;
            case sf::Keyboard::R: return "r"; break;
            case sf::Keyboard::S: return "s"; break;
            case sf::Keyboard::T: return "t"; break;
            case sf::Keyboard::U: return "u"; break;
            case sf::Keyboard::V: return "v"; break;
            case sf::Keyboard::W: return "w"; break;
            case sf::Keyboard::X: return "x"; break;
            case sf::Keyboard::Y: return "y"; break;
            case sf::Keyboard::Z: return "z"; break;
        }
        if(keycode == sf::Mouse::Left)
        {
            return "leftclick";
        }
        if(keycode == sf::Mouse::Right)
        {
            return "leftclick";
        }
        if(keycode == sf::Mouse::Middle)
        {
            return "leftclick";
        }
    }
}
