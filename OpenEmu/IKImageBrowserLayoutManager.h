
#import <Foundation/Foundation.h>
#import "IKImageBrowserView.h"
@interface IKImageBrowserLayoutManager : NSObject
@property double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
- (unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)arg1;
- (void)prepareRenderingOrderingWithIndexes:(id)arg1;
- (void)invalidateBSP;
- (void)moveIndexOnTop:(long long)arg1;
- (struct CGPoint)normalizedPositionAtIndex:(long long)arg1;
- (struct CGPoint)positionAtIndex:(long long)arg1;
- (double)scaleFactorAtIndex:(long long)arg1;
- (void)setScaleFactor:(double)arg1 atIndex:(long long)arg2;
- (void)setPosition:(struct CGPoint)arg1 atIndex:(long long)arg2;
- (void)setFreeFormLayoutMode:(BOOL)arg1;
- (unsigned long long)leftIndex;
- (unsigned long long)rightIndex;
- (unsigned long long)bottomIndex;
- (unsigned long long)topIndex;
- (double)spaceOutGroupsHeight;
- (BOOL)cellAtIndexOverlapsAnotherCell:(unsigned long long)arg1;
- (void)translateAllBy:(struct CGSize)arg1;
- (void)setFreeFormDocumentOffset:(struct CGPoint)arg1;
- (struct CGSize)freeFormDocumentTranslation;
- (struct CGSize)freeFormTotalDocumentOffset;
- (struct CGSize)freeFormScaleFactor;
- (void)setFreeFormScaleFactor:(struct CGSize)arg1;
- (void)setAnchorPointTranslation:(struct CGPoint)arg1;
- (void)zSortWithZValues:(double *)arg1;
- (double)zAtIndex:(unsigned long long)arg1;
- (struct CGPoint)topLeftItemPosition;
- (double)xAtColumn:(int)arg1;
- (void)resetGroupsOffset;
- (void)adjustGroupsHorizontalOffsetIfNeeded;
- (double)yAtRow:(int)arg1;
- (double)_yAtRow:(int)arg1;
- (int)heightOfInfoSpaceAtRow:(int)arg1;
- (int)cellIndexAtColumn:(int)arg1 andRow:(int)arg2;
- (int)rowAtY:(double)arg1;
- (int)rowAtIndex:(int)arg1;
- (int)rowsCountForGrid:(id)arg1;
- (int)columnAtIndex:(int)arg1;
- (int)screenColumnAtIndex:(unsigned long long)arg1;
- (int)columnAtX:(double)arg1;
- (int)rowsCount;
- (int)_contentColumnCount;
- (int)columnCount;
- (void)collapsedStateChanged:(id)arg1;
- (void)updateIfNeeded;
- (void)updateGridFrames;
- (BOOL)update;
- (id)subManagers;
- (id)subManagerForCellAtIndex:(unsigned long long)arg1;
- (void)createGrids;
- (BOOL)hasCoverflowSubLayout;
- (void)addGroup:(id)arg1 inGroupList:(id)arg2;
- (id)_newGridWithClass:(Class)arg1 pool:(id)arg2;
- (void)computeMargin;
- (BOOL)_shouldForceAlignLeft;
- (BOOL)computeColumnCount;
- (void)spaceOutGroup:(unsigned long long)arg1 usingAnimationManager:(id)arg2 animate:(BOOL)arg3;
- (void)_animateHeaderAndFooterOffsetFrom:(double)arg1 startingWithGroupIndex:(unsigned long long)arg2 usingAnimationManager:(id)arg3;
- (void)contentDidChangeAtIndexes:(id)arg1;
- (void)_wrapCellsForiOSGroups;
- (id)gridIndexesToClientIndexes:(id)arg1;
- (id)clientIndexesToGridIndexes:(id)arg1;
- (unsigned long long)clientIndexToGridIndex:(unsigned long long)arg1;
- (long long)gridIndexToClientIndex:(unsigned long long)arg1;
- (long long)_gridIndexToClientIndex:(unsigned long long)arg1;
- (long long)_clientIndexToGridIndex:(unsigned long long)arg1;
- (void)unlock;
- (void)lock;
- (void)setContent:(id)arg1;
- (id)content;
- (id)groups;
- (void)setGroups:(id)arg1;
- (struct CGSize)margin;
- (struct CGSize)cellMargin;
- (int)flavor;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (struct __IKImageBrowserLayoutParameter *)layoutParameters;
- (void)setAlignLeftForSingleRow:(BOOL)arg1;
- (BOOL)alignLeftForSingleRow;
- (void)setMargin:(struct CGSize)arg1;
- (void)setCellMargin:(struct CGSize)arg1;
- (void)setCellsHaveACommonHeightOfInfoSpace:(BOOL)arg1;
- (BOOL)cellsHaveACommonHeightOfInfoSpace;
- (void)setAutomaticallyMinimizeRowMargin:(BOOL)arg1;
- (BOOL)automaticallyMinimizeRowMargin;
- (struct CGSize)cellSize;
- (void)setCellSize:(struct CGSize)arg1;
- (unsigned long long)contentResizingMask;
- (void)setContentResizingMask:(unsigned long long)arg1;
- (struct CGSize)containerSize;
- (void)setContainerSize:(struct CGSize)arg1;
- (void)invalidate;
- (void)layoutDidChange;
@property IKImageBrowserView *parent;
- (void)dealloc;
- (id)init;

@end
