//---------------------------------------------------------------------------
/*
Visual ABC, visual ABC editor
Copyright (C) 2011-2015 Richel Bilderbeek

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
//From http://www.richelbilderbeek.nl/ToolVisualAbc.htm
//---------------------------------------------------------------------------
#ifndef TOOLVISUALABCMAINDIALOG_H
#define TOOLVISUALABCMAINDIALOG_H

#include <string>
#include <vector>

namespace ribi {

struct VisualAbcMainDialog
{
  VisualAbcMainDialog() {};

  void ConvertToPng(const std::string& s) const;
  void ConvertToMid(const std::string& s) const;
  void PlayMid() const;
  std::vector<std::string> GetAbcFriday() const;
  const std::string m_abc_filename{"temp.abc"};
  const std::string m_log_filename{"temp.log"};
  const std::string m_mid_filename{"temp.mid"};
  const std::string m_png_filename{"temp.png"};
  const std::string m_pngs_filename{"temp-0.png"};
};

} //~namespace ribi

#endif // TOOLVISUALABCMAINDIALOG_H
