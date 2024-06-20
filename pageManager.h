/*
   pageManager header V1.0.0
   Created by Milad Nikpendar
*/

typedef enum pagesMenu {
  HOME,          // page Home            >>>
  Setting,       // page Display setting >>>
};
pagesMenu page = HOME;      //default HOME
pagesMenu pastPage = HOME;

class pageManager {
  public:
    boolean clear = true;
    boolean refresh = true;
    boolean window = false;

    pagesMenu now() {
      return page;
    }
    pagesMenu past() {
      return pastPage;
    }
    void back(pagesMenu newPage = HOME) {
      page = pastPage;
      pastPage = newPage;
      clear = true;
    }
    bool check(pagesMenu myPage) {
      return (myPage == now()) ? true : false;
    }
    void change(pagesMenu newPage, pagesMenu oldPage = page) {
      pastPage = (newPage == HOME) ? newPage : oldPage;
      page = newPage;
      clear = true;
    }
};