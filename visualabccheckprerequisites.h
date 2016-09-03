#ifndef TOOLVISUALABCCHECKPREREQUISITES_H
#define TOOLVISUALABCCHECKPREREQUISITES_H

namespace ribi {

struct CheckPrerequisites
{
  CheckPrerequisites();

  private:
  void CheckAbc2midi() const;
  void CheckAbcm2ps() const;
  void CheckConvert() const;
  void CheckPlaysound() const;
};

} //~namespace ribi

#endif // TOOLVISUALABCCHECKPREREQUISITES_H
