#ifndef ESCHER_LIST_VIEW_CELL_H
#define ESCHER_LIST_VIEW_CELL_H

#include <escher/view.h>
#include <escher/pointer_text_view.h>
#include <escher/palette.h>
#include <escher/metric.h>
#include <escher/table_view_cell.h>

class ListViewCell : public TableViewCell {
public:
  ListViewCell(char * label = nullptr);
  PointerTextView * textView();
  virtual View * contentView() const;
  void drawRect(KDContext * ctx, KDRect rect) const override;
  void reloadCell() override;
  int numberOfSubviews() const override;
  View * subviewAtIndex(int index) override;
  void layoutSubviews() override;
private:
  constexpr static KDCoordinate k_separatorThickness = 1;
  PointerTextView m_pointerTextView;
};

#endif